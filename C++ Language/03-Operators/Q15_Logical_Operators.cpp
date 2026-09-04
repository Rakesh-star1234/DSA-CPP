#include <iostream>
using namespace std;

int main()
{
    int age = 25;
    int marks = 75;

    bool result1 = age >= 18 && marks >= 40;
    bool result2 = age < 18 || marks < 40;
    bool result3 = !(age < 18);

    cout << "Result 1: " << result1 << endl;
    cout << "Result 2: " << result2 << endl;
    cout << "Result 3: " << result3 << endl;

    return 0;
}