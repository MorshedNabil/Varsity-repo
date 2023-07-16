#include <iostream>
using namespace std;

int main()
{
  int arr[5], n, beg = 0, end = 4, loc = -1, mid;
  cout << "Enter the value you want to search\n";
  cin >> n;
  cout << "Enter the values of the array\n";

  for (int i = 0; i < 5; i++)
  {
    cin >> arr[i];
  }

  while (beg <= end)
  {
    mid = (beg + end) / 2;

    if (arr[mid] < n)
      beg = mid + 1;
    else if (arr[mid] > n)
      end = mid - 1;
    else
    {
      loc = mid;
      break;
    }
  }
  if (loc != -1)
    cout << loc << "\n";
  else
    cout << "Item not found\n";

  return 0;
}