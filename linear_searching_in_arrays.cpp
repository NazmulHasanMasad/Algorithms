
#include <iostream>
using namespace std;

int seaRch(int array[], int n, int k)
{

    for (int i = 0; i < n; i++)
    {
        if (array[i] == k)
        {
            return k;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "enter the size of the array" << endl;
    cin >> n;
    int array[n];
    int k;
    cout << "enter the key you want to search" << endl;
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        cout << "enter the elements of the array" << endl;
        cin >> array[i];
    }

    cout << "the final output" << endl;
    cout << seaRch(array, n, k);

    return 0;
}
