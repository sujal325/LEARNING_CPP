#include <iostream>
using namespace std;

int main()
{
    float f;
    cout << "Give fahrenhite value: ";
    cin >> f;
    float c;
    c = (f - 32) * 5 / 9;
    cout << c;
}