//// bubble sorting for string array////
#include <iostream>
using namespace std;

int main()
{
    int n;
    bool swap = true;
    cin >> n;
    string arr[n], temp;

    for(int i = 0; i < n; i++) // get input
    {
        cin >> arr[i];
    }

    for(int pass = 0; pass < n-1; pass++)
    {
        if(swap == false)
          break;
        swap = false;
        for(int i = 0; i < n-1-pass; i++)
        {
            if(arr[i+1] < arr[i])
            {
                temp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = temp;
                swap = true;
            }
        }
    }

    for(int i = 0; i < n; i++) // print output
    {
        cout << arr[i] << "\t";
    }

    return 0;
}