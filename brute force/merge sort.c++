#include <bits/stdc++.h>
using namespace std;

void merge(int arr1[], int arr2[], int n1, int n2, int arr3[])
{
    int p = 0, q = 0, w = 0;

    while (p < n1 && q < n2)
    {
        if (arr1[p] < arr2[q])
            arr3[w++] = arr1[p++];
        else
            arr3[w++] = arr2[q++];
    }

    while (p < n1)
    {
        arr3[w++] = arr1[p++];
    }

    while (q < n2)
    {
        arr3[w++] = arr2[q++];
    }
}

int main()
{
    int size1;
    cin >> size1;
    int *arr1 = new int[size1];
    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }

    int size2;
    cin >> size2;
    int *arr2 = new int[size2];
    for (int k = 0; k < size2; k++)
    {
        cin >> arr2[k];
    }

    int *arr3 = new int[size1 + size2];

    merge(arr1, arr2, size1, size2, arr3);

    for (int f = 0; f < size1 + size2; f++)
    {
        cout << arr3[f] << " ";
    }

    cout << endl;

    return 0;
}