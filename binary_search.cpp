
#include <iostream>
using namespace std;

int binaryseaRch(int array[], int n, int k)
{
    int s = 0;
    int e = n;
    while (s <= e)
    {

        int mid = (s + e) / 2;

        if (array[mid] == k)
        {

            return k;
        }
        else if (array[mid] < k)
        {
            e = mid + 1;
        }
        else
        {
            e = mid - 1;
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

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int k;
    cout << "enter the key you want to search" << endl;
    cin >> k;

    cout << "the final output" << endl;
    cout << binaryseaRch(array, n, k) << endl;

    return 0;
}
