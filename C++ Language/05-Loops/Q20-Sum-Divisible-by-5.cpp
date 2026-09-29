#include <iostream>
using namespace std;
int main(){
    int Sum=0;
     for(int i=1; i<=50; i++)
     {
        if(i%5==0)
        {
            Sum=Sum+i; 
        }
     }
     cout<<"Sum:"<<Sum<<endl;
     return 0;

}