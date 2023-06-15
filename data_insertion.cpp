//// data inserting in a position of the array////
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    for(int i = 4; i >= 0; i--)
    {
        arr[i+1] = arr[i];
        if(i == 1)
        {
            arr[i] = 50;
            break;
        }
        
    }

    for(int i = 0; i < 6; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}