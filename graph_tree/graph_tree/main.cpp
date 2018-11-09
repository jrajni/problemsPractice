#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
    int n,s = 0,a[1000];
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)
    {
        s=s+a[i];
    }
    s=s/2;
    if(s==n-1)
    {cout<<"Yes";}
    else{
        cout<<"No";
    }
    return 0;
}
