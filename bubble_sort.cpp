#include <iostream>
using namespace std;

int bubbleSort(int array[], int n)
{
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
            if (array[i] > array[i + 1])
            {
                int temp = array[i + 1];
                array[i + 1] = array[i];
                array[i] = temp;
            }
        }

    for (int j = 0; j < n; j++)
    {
        cout << array[j] << " ";
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
    bubbleSort(array, n);

    return 0;
}