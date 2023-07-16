#include <iostream>
using namespace std;

int main()
{
    int arr[7], i, j, temp;

    cout << "Enter the values of the array\n";
    
    for(int k = 0; k < 7; k++)
    {
        cin >> arr[k];
    }

    for(i = 1; i < 7; i++)
    {
        temp = arr[i];
        for(j = i; j > 0; j-- )
        {
            if(arr[j - 1] <= temp)
              break;
            else
              arr[j] = arr[j - 1];
        }
        arr[j] = temp;
    }

    for(int k = 0; k < 7; k++)
    {
        cout << arr[k] << "\t";
    }

    return 0;
}