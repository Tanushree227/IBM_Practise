#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    * b = temp;
}
void SelectionSort(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        int min = i;
        for(int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
            swap(&arr[min], &arr[i]);
        }
    }
}
void display(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
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
    SelectionSort(arr, n);
    cout<<"After Sorting: ";
    display(arr, n);
    return 0;
}