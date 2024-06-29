#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int primeFactor(int n)
{

    // time complexity =O( sqrt(n) )

    for (int i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }

    if (n > 1)
    {
        cout << n << " ";
    }
}

int main()
{
    int n;
    cin >> n;

    primeFactor(n);
    return 0;
}