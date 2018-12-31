#include <iostream>
using namespace std;

void rotate_array(int arr[],int r,int n){
    int temp,i=0;
    while(r--){
     temp=arr[0];
    for(i=0;i<n-1;i++)
        arr[i]=arr[i+1];
        arr[n-1]=temp;
}
    for(i=0;i<n;i++)
    {cout<<arr[i]<<" ";}
}
int main(void)
{int n,r;
    cout<<"enter number of elements in an array=";
    cin>>n;
    int arr[n];
    cout<<endl<<"array elements are=";
    for(int i=0;i<n;i++)cin>>arr[i];
 //   int arr[]={1,2,3,4,5,6,7};
    cout<<endl<<"enter no of 4rotation=";
    cin>>r;
   // int n=sizeof(arr)/sizeof(int);
   rotate_array(arr,r,n);
}
