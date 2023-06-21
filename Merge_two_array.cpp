///// Merge two sorted arrays into one sorted array////
#include <iostream>
using namespace std;

int main()
{
    int i, j, k, n1, n2, t;
    i = j = k = 0;
    cin >> n1;
    cin >> n2;

    t = n1 + n2;
    int arr1[n1], arr2[n2], arr3[t];

    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    for (int j = 0; j < n2; j++)
    {
        cin >> arr2[j];
    }

    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }

    for(int i = 0; i < t; i++)
    {
        cout << arr3[i] << "\t";
    }

    return 0;
}