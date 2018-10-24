#include<iostream>
using namespace std;
int main(void)
{
    int n1,n2;
    cin>>n1>>n2;
    int sum=0,carry;
    while(carry!=0){
    sum=n1^n2;
    carry=(n1&n2)<<1;
    n1=sum;
    n2=carry;
}
    cout<<sum;
    return 0;
}
