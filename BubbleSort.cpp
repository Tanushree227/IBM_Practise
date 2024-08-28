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

void BubbleSort(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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
    BubbleSort(arr, n);
    cout<<"After Sorting: ";
    display(arr, n);
    return 0;
}