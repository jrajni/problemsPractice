#include <iostream>
using namespace std;
int main(void)
{
    int j,n,m;
    cin>>n>>m;
    int k[n+1][m+1],p[n+1],w[n+1];
    for(int i=0;i<n;i++)        cin>>p[i];
    
    for(int i=0;i<n;i++)        cin>>w[i];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==0||j==0)
            {
                k[i][j]=0;
            }
            else if (w[i]<=j)
            {
                k[i][j]=max(p[i]+k[i-1][m-w[i]],k[i-1][j]);
            }else
            {
                k[i][j]=k[i-1][j];
            }
        }
    }
  //  cout<<k[n][j];
    int i;
    i=n,j=m;
    while (i>0&&j>0)
    {
        if(k[i][j]==k[i-1][j])
        { cout<<i<<"=0"<<endl;
            i--;}
        else{
            cout<<i<<"=1"<<endl;i--;
            j=j-w[i];
        }
        }
    return 0;
}
