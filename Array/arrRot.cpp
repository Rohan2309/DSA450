/*
Program to cyclically rotate an array by one
*/

#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n)
{
    int x = arr[n - 1]; //last element
    int i;
    for (i = arr[n - 1]; i > 0; i--) //from back till first pos
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = x; //last element at first
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int i;
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is \n";
    for (i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    rotate(arr, n);
    cout << "\nRotated array is\n";
    for (i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}