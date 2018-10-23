#include<iostream>
#include<algorithm>
using namespace std;
int main(void)
{
    int n,m=0,max=0,r=0,sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];int k;
    cin>>k;
    sort(a,a+n,greater<int>());
    for(int i=0;i<k;i++)
        cout<<a[i]<<endl;
 return 0;
}

