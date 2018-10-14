#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    if(n&1!=0)
        cout<<"Odd";
    else
        cout<<"Even";
    return 0;
}
