#include <iostream>
using namespace std;
int selectionSort(int array[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[j] < array[i])
            {
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
    for (int k = 0; k < n; k++)
    {
        cout << array[k] << " ";
    }

    return 0;
}

int main()
{

    int n;
    cout << "enter the size of the array :" << endl;
    cin >> n;
    int array[n];

    cout << "enter the elements of the array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    selectionSort(array, n);

    return 0;
}
