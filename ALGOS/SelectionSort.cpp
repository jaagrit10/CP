// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;

void selectionsort(int n, int arr[])
{
    int i, j, idx_of_min_element;
    for (i = 0; i < n-1; i++)
    {
        idx_of_min_element = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[idx_of_min_element])
            idx_of_min_element = j;
        if (idx_of_min_element!=i)
        {
            swap(arr[idx_of_min_element],arr[i]);
        }
    }
}

int main()
{
    int n; cin >> n; // taking input the size of the array
    int arr[n];
    for(int i=0; i<n; i++) //taking input the elements of the array
    {
        cin >> arr[i];
    }
    
    selectionsort(n,arr); // calling the sort function
    for(int i=0; i<n; i++)          //printing the array after sorting
    {
        cout << arr[i] << " ";
    }
    return 0;
}