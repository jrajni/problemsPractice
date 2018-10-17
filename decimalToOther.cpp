#include<iostream>
using namespace std;
int main(void)
{
    int n,i;
    char c;
    cout<<"To convert decimal to binary->Press B"<<endl;
    cout<<"To convert decimal to Octal->Press O"<<endl;
    cout<<"To convert decimal to Hexadecimal->Press H"<<endl;
    cin>>c;
    cout<<"Enter value of n="<<endl;
    cin>>n;
    int a[n];

     switch(c)
     {
         case 'O': case 'o':

    {
    for(i=0;n>0;i++)
    {
        a[i]=n%8;
        n=n/8;
    } for(i=i-1;i>=0;i--)
        cout<<a[i];
    }
    break;
     case 'h': case 'H':
    {
    for(i=0;n>0;i++)
    {
        a[i]=n%16;
        n=n/16;
    } for(i=i-1;i>=0;i--)
        cout<<a[i];
    break;
    }
    case 'b': case 'B':
        {
    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    } for(i=i-1;i>=0;i--)
        cout<<a[i];
    break;}
     }

    return 0;
}
