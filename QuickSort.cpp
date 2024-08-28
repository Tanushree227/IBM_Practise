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

int partition(int arr[], int low, int high)
{
    int key = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] <= key)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

void QuickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = partition(arr, low, high);
        QuickSort(arr, low, mid - 1);
        QuickSort(arr, mid + 1, high);
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
    QuickSort(arr, 0, n-1);
    cout<<"After Sorting: ";
    display(arr, n);
    return 0;
}