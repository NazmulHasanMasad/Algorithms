#include <iostream>
using namespace std;

int insertionSort(int array[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = array[i];
        int k = i - 1;
        while (array[k] > temp && k >= 0)
        {
            array[k + 1] = array[k];
            k--;
        }
        array[k + 1] = temp;
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
    insertionSort(array, n);

    return 0;
}