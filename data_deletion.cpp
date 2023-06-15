#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < 5; i++) // input loop
    {
        cin >> arr[i];
    }

    for(int i = 0; i < 5; i++) // deletion loop
    {
        if(i >= 1)
        {
            arr[i] = arr[i+1];
        }
        
    }

    for(int i = 0; i < 4; i++) // printing loop
    {
        cout << arr[i] << "\t";
    }

    return 0;
}