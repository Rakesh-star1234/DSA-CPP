#include <iostream>
using namespace std;
int squareNumber(int num)
{
    int square = num*num;
    return square;
}

int main()
{
    int num;
    cout<<"enter a number:"<<endl;
    cin>>num;
    int square = squareNumber(num);
    cout<<"square:"<<square<<endl;
    return 0;
} 