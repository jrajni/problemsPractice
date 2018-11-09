#include <iostream>
using namespace std;
int main(void)
{int t;
    cout<<"no of test cases=";
    cin>>t;
    while(t--){
    int a[1000][1000];
        int e,count=0;
        cout<<"no of edges=";
    cin>>e;
    long int x,y;
    for(int i=1;i<=e;i++)
    {cout<<"cities=";
        cin>>x>>y;
        a[x][y]=1;
    }
    for(int i=1;i<=e;i++)
    {
        for(int j=1;j<=e;j++)
        {
            if(a[i][j]==1)
                count++;
        }
    }
        cout<<endl<<"no of roads require=";
    cout<<count;
    }
    return 0;
}
