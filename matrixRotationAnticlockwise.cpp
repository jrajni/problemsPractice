#include<iostream>
using namespace std;
int main(void)
{int l,n,temp;
cin>>n;
l=n-1;
    int m[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>m[i][j];
        }
    }
    for(int i=0;i<l/2;i++)
    {
        for(int j=i;j<l-i;j++)
        {temp=m[j][i];
        m[j][i]=m[i][l-j];
         m[i][l-j]=m[l-j][l-i];
           m[l-j][l-i]=m[l-i][j];
           m[l-i][j]=temp;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<m[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}
