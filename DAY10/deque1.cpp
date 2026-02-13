//#include <bits/stdc++.h>
#include<iostream>
using namespace std;
class deque
{
         int table_size=4;
        static const int block_size=4;
        int** block_table;
        int start_block;
        int end_block;
        int start_offset;
        int end_offset;
        int current_size;
        public:deque()
               {     block_table=new int*[table_size];
                       for(int i=0;i<table_size;i++)
                       {
                               block_table[i]=nullptr;
                       }

                       start_block=end_block=table_size/2;
                       block_table[start_block]=new int[block_size];
                       start_offset=0;
                       end_offset=0;
                       current_size=0;
               }
               void push_back(int val)
               {   if(end_block==(table_size-1)&&(end_offset==block_size))
                     {
                       realloc();
                     }
                       if(end_offset==block_size)
                       {  end_block++;
                               block_table[end_block]=new int[block_size];
                               end_offset=0;
                       }
                       block_table[end_block][end_offset++]=val;
                       current_size++;
               }
               void realloc()
               {  //table_size=table_size*2;
                  int **newblocktab=new int*[table_size*2];
                  int news=(table_size/2);//news= newstart
                  for(int i=0;i<table_size*2;i++)
                    newblocktab[i]=nullptr;
                   int j=news+start_block;//j=4;and start_block=2
                  for(int i=start_block;i<=end_block;i++)
                   {    newblocktab[j++]=block_table[i];
                   }
                   delete []block_table;
                    block_table=newblocktab;
                    int d=end_block-start_block;
                   start_block=start_block+(table_size/2);
                   end_block=start_block+d;
                   table_size=table_size*2;
                 }
                   
                   
                          
               void push_front(int val)
               { if(start_block==0&&start_offset==0)
                   {
                      realloc();
                   }
                   
                 if(start_offset==0)
                 {
                   --start_block;
                      block_table[start_block]=new int[block_size];
                      start_offset=block_size;

                  }
                  --start_offset;
                  block_table[start_block][start_offset]=val;
                  current_size++;
                 }
                void pop_back()
                {   
                    if(end_offset==0)
                     { --end_block;
                       end_offset=block_size;
                     }
                      end_offset--;
                     block_table[end_block][end_offset]=0;
                    current_size--;
                }
               int operator[](int index)
               {
                       int total_offset=start_offset+index;
                       int block=start_block+(total_offset/block_size);
                       int offset=total_offset%block_size;
                       return block_table[block][offset];
               }
               int size() const
               {
                       return current_size;
               }
               ~deque()
               {
                       for(int i=0;i<table_size;i++)
                       {
                               if(block_table[i])
                               {
                                 delete []block_table[i];
                               }
                       }
                       delete []block_table;
               }
};
int main()
{
        deque d;
        for(int i=0;i<20;i++)
           d.push_front(i);
 //       d.pop_back();
        for(int i=0;i<d.size();i++)
        {
                cout<<d[i]<<" ";
        }
        cout<<endl;
        d.pop_back();

        for(int i=0;i<d.size();i++)
        {
                cout<<d[i]<<" ";
        }
}


