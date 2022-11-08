#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int k = 0; k < size - 1; k++)
    {
        int min = k;
        for (int j = k + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[k], arr[min]);
    }
    for (int s = 0; s < size; s++)
    {
        cout << arr[s] << " ";
    }

    return 0;
}