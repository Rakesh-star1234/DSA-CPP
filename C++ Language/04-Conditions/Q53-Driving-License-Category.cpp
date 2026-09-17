#include <iostream>
using namespace std;

int main()
{
    int Age = 22;

    if(Age < 18)
    {
        cout << "Not Eligible" << endl;
    }
    else if(Age <= 20)
    {
        cout << "Learner License" << endl;
    }
    else if(Age <= 60)
    {
        cout << "Full Driving License" << endl;
    }
    else
    {
        cout << "Senior Driver Category" << endl;
    }

    return 0;
}