struct ControlBlock {
    int ref_count{1};

    void add_ref() {
        ++ref_count;
    }

    bool release_ref() {
        return --ref_count == 0;
    }
};



template <typename T>
class SharedPtr {
    T* ptr;
    ControlBlock* control;

    void increment() {
        if (control)
            control->add_ref();
    }

    void decrement() {
        if (control && control->release_ref()) {
            delete ptr;
            delete control;
        }
    }

public:
    SharedPtr(T* p = nullptr) : ptr(p) {
        control = p ? new ControlBlock() : nullptr;
    }

    SharedPtr(const SharedPtr& other)
        : ptr(other.ptr), control(other.control) {
        increment();
    }

    ~SharedPtr() {
        decrement();
    }
};

