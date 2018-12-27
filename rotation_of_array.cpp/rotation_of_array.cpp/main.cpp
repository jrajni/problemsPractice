#include <iostream>
using namespace std;
void leftRotateByOne(int arr[],int n)
{
    int temp=arr[0],i=0;
    for(int i=0;i<n-1;i++)
    { arr[i]=arr[i+1];
        
    }
    arr[i]=temp;
   // for(int j=0;j<n;j++)cout<<arr[j]<<" ";
}
void leftRotate(int arr[],int d,int n)
{
    for(int i=0;i<d;i++)
        leftRotateByOne(arr,n);
}
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
int main()
{int n,d;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    leftRotate(arr, d, n);
   printArray(arr, n);
    return 0;
}
