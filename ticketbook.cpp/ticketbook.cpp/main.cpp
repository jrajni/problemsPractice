#include <iostream>
using namespace std;
int main(void)
{long p,h;
    int r,s,t,x;
    cout<<"cost of flight ticket";
    cin>>p;
    cout<<endl<<"No of total seats available=";
    cin>>s;
    cout<<endl<<"no of seats available";
    cin>>t;
    cout<<endl<<"high rate of ticket=";
    cin>>h;
    cout<<endl<<"No of family members=";
    cin>>x;//6000 10 5 6500 7
    p=p*t;
    if(x>t){
        x=x-t;
        r=h*x;
        
    }else{}
    cout<<p+r;
    return 0;
}
