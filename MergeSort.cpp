#include<iostream>
using namespace std;

void display(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

void merge(int arr[], int beg, int mid, int end)
{
    int n1 = mid - beg + 1;
    int n2 = end - mid;
    int arr1[n1], arr2[n2];
    for(int i = 0; i < n1; i++)
    {
        arr1[i] = arr[beg+1];
    }
    for(int j = 0; j < n2; j++)
    {
        arr2[j] = arr[mid + 1 + j];
    }
    int i, j, k;
    i = 0, j = 0, k = beg;
    while(i < n1 && j < n2)
    {
        if(arr1[i] <= arr2[j])
        {
            arr[k] = arr1[i];
            i++;
        }
        else
        {
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }
    while(i < n1)
    {
        arr[k] = arr1[i];
        i++;
        k++;
    }
    while(j < n2)
    {
        arr[k] = arr2[j];
        i++;
        k++;
    }
}

void MergeSort(int arr[], int beg, int end)
{
    if(beg < end)
    {
        int mid = beg + (end - beg)/2;
        MergeSort(arr, beg, mid);
        MergeSort(arr, mid + 1, end);
        merge(arr, beg, mid, end);
    }
}

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cout<<"Enter the element of arr["<<i+1<<"]: ";
        cin>>arr[i];
    }
    cout<<"Before Sorting: ";
    display(arr, n);
    MergeSort(arr, 0, n-1);
    cout<<"After Sorting: ";
    display(arr, n);
    return 0;
}