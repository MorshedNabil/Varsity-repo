#include <iostream>
using namespace std;

void printarray(int A[], int high)
{
    for (int i = 0; i < high; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n";
}

void quicksort(int A[], int low, int high)
{
    int i = low, j = high, temp;
    int mid = (i + j) / 2;
    int pivot = A[mid];
    ///// partitioning
    while (i <= j)
    {
        while (A[i] < pivot)
            i++;

        while (A[j] > pivot)
            j--;

        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
            i++;
            j--;
        }
    }
    ///// recursion for 1st and 2nd part of the array
    //// the recursion will be continued until one element remains in the sub arrays
    //// when one element will remain the starting and ending index of the sub arrays will be equal
    if (low != j)
        quicksort(A, low, j); //// left part of the array (left sub array)

    if (high != i)
        quicksort(A, i, high); /// right part of the array (right sub array)
}

int main()
{
    int A[] = {1, 12, 5, 26, 7, 14, 3, 7, 2};
    int n = 9;
    printarray(A, n);
    quicksort(A, 0, n - 1);
    printarray(A, n);

    return 0;
}