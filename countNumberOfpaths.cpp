#include<iostream>
using namespace std;
int noofpaths(int m,int n)
{
    if(m==1||n==1)
        return 1;
    return noofpaths(m-1,n)+noofpaths(m,n-1);
}
int main(void)
{
    int m,n;
    cin>>m>>n;
    cout<<noofpaths(m,n);
    return 0;
}
