//binarybsearch
#include <iostream>
using namespace std;
int main(void)
{
    int a[50],first=0,last=0;
    int n,search;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    cin>>search;
    first=0;
    last=n-1;
   int mid=(first+last)/2;
    while(first<=last)
    {
        if(a[mid]<search)
            first=mid+1;
        else if(a[mid]==search)
        {
            cout<<"number found at "<<mid+1<<" element";
            break;
        }
        else
        {
            last=mid-1;
        }
        mid=(first+last)/2;
    }
if(first>last)
{cout<<"number is not included in your list";}
    return 0;
}
