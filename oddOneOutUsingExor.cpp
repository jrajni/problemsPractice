#include <iostream>
using namespace std;
int main(void)
{
    int n,r;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
               cin>>a[i];
                r=a[0];
    for(int i=1;i<n;i++)
        r^=a[i];
    cout<<r;
return 0;
}
