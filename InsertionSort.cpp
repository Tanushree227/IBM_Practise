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

void InsertionSort(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while(j >= 0 && temp < arr[j])
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
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
    InsertionSort(arr, n);
    cout<<"After Sorting: ";
    display(arr, n);
    return 0;
}