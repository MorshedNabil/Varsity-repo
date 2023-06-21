#include <iostream>
#include <array>
using namespace std;
void selectionSort(int arr[], int n)
{
    int i, j, minIndex;
    int temp;
    for (i = 0; i <= n - 1; i++)
    {
        minIndex = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        } // inner j loop

        if (minIndex != i)
        {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    } // outer i loop
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << "\n";
    }
}

int main()
{
    int arr[] = {2, 34, 10, 3, 5, 44, 3, 64};
    int size = 8;
    selectionSort(arr, size);

    return 0;
}

