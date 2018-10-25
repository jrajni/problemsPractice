#include<iostream>
using namespace std;
int main(void)
{
    int n,target,count=-1;
    cout<<"size of array="<<endl;
    cin>>n;
    int a[n];
    cout<<"enter elements of array="<<endl;
    for(int i=0;i<n;i++)cin>>a[i];
    cout<<"enter target"<<endl;
    cin>>target;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]+a[j]==target)
            {
                cout<<i<<" "<<j<<endl;
                count++;
                break;
                break;
            }
        }
    }
    if(count==-1){cout<<count;}
    return 0;
}
