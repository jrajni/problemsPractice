#include <iostream>
#include <numeric>
using namespace std;
int main(void){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    int sum=0;
    int f=accumulate(a,a+n,sum);
    cout<<f<<endl;
    return 0;
:P
