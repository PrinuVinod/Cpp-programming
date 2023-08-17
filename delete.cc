#include<iostream>
using namespace std;
int deleteelem(int arr[], int x, int n)
{
    int i=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==x)
        {
            break;
        }
    }
    if(i==n)
    {
        return n;
    }
    for(int j=i; j<n-1; j++)
    {
        arr[j] = arr[j+1];
    }
    return n-1;
}
int main()
{
    int arr[] = {5, 10, 20, 3, 7};
    int x = 10;
    int n = 5;
    cout<<"Before Deletion"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    n= deleteelem(arr, x, n);
    cout<<"After Deletion"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}