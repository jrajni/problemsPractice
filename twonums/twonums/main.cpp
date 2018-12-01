solution of this problem link : https://discuss.codechef.com/questions/102955/twonms-editorial
#include <iostream>
using namespace std;
int main(void)
{int t;
    cin>>t;
    while(t--){
    long int a,b,count=0,max=0,min=0;
        cin>>a>>b>>count;
    while(count--)
    {
        if(count%2==0)
            a=a*2;
        else
            b=b*2;
    }
    max = (a>b)?a:b;
        min =(a>b)?b:a;
        if(min!=0)
        max=max/min;
  else max=0;
     cout<<max<<endl;
    }
    

    return 0;
}
