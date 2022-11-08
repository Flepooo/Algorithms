#include <bits/stdc++.h>
using namespace std;

int Binary(int arr[], int k, int bottom, int top)
{
    int middle;
    if (bottom <= top)
    {
        middle = (bottom + top) / 2;
        if (k == arr[middle])
        {
            return middle;
        }
        else if (k < arr[middle])
        {
            return Binary(arr, k, bottom, middle - 1);
        }
        else
        {
            return Binary(arr, k, middle + 1, top);
        }
    }
    return -1;
}

int main()
{
    int index;
    cin >> index;
    int *arr = new int[index];
    for (int i = 0; i < index; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    cout << Binary(arr, k, 0, index) << endl;

    return 0;
}