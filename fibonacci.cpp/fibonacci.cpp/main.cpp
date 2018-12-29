#include <iostream>
using namespace std;
int fibonacci(int n){
if(n<2)
    return n;
else
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(void)
{
    int n;
    cin>>n;
    int f=fibonacci(n);
    cout<<f;
}
// 1 1 2 3 5 8 13
