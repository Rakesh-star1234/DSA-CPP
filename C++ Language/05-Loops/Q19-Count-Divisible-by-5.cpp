#include <iostream>
using namespace std;
int main()
{
  int  Count =0; 
   
   for(int i = 1; i <= 50; i++)
   {
      if(i % 5 == 0)
      {
         Count=Count+1;
      }
    }
      cout<<"Count:"<<Count<<endl;
      return 0;
    }   