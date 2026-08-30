#include <iostream>
using namespace std;

int main()
{
    float principal=1000;
    float rate=5;
    float time=2;
    float SI = (principal * rate * time) / 100;
    cout << "Simple Interest: " << SI << endl;
    return 0;
}