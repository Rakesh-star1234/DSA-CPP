
#include <iostream>
using namespace std;

int main()
{
    int a = 25;
    int b = 40;

    bool greater = a > b;
    bool smaller = a < b;
    bool equal = a == b;

    cout << "A greater than B: " << greater << endl;
    cout << "A smaller than B: " << smaller << endl;
    cout << "A equal to B: " << equal << endl;

    return 0; 
}