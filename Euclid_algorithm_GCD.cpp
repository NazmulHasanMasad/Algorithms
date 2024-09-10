#include <iostream>

using namespace std;

int euclidA(int a, int b)
{
    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << euclidA(a, b);

    return 0;
}