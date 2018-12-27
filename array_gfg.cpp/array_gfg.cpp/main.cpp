#include <iostream>
using namespace std;
int main()
{int s=6;
    int n=5;
    int arr[6]={1,2,3,5,6};
  int   d=(s-arr[0])/(n-1);
  
    for(int i=0;i<n;i++)
    {
        if(arr[i]+d==arr[i+1])
            i++;
        else
            cout<<arr[i]+d;
    }
}
