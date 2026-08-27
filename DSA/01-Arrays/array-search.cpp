#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int searchElement;
    int found=0;
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];

        }
        cout<<"enter the element to be searched:";
        cin>>searchElement;
        for(int i=0; i<5; i++)
        {
            if(arr[i]==searchElement)
            {
                found=1;
                break;

            }
        }

          if(found==1)
          {
            cout<<"Element found in the array"<<endl;
          }
          else
          {
            cout<<"Element not found in the array"<<endl;
          }
          return 0;
        }