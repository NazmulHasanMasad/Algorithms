#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int primeFactor(int n)
{
    // time complexity = O(n)

    vector<int> prime_factors;

    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            prime_factors.push_back(i);
            n = n / i;
        }
    }
    for (int prime : prime_factors)
    {
        cout << prime << " ";
    }
}

int primeFactors(int n)
{
}

int main()
{
    int n;
    cin >> n;

    primeFactor(n);
    return 0;
}