#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    a = 1;
    c = 0;
    cout << "square: ";
    cin >> b;
    while (a <= b)
    {
        d = 1;
        while (d <= a)
        {
            char e = 'A' + c;
            cout << e;
            d += 1;
            c += 1;
        }
        cout << endl;
        a += 1;
    }
}
// A
// BC
// DEF
// GHIJ
// KLMNO
// PQRSTU