//sol of this problem:https://www.codechef.com/submit/COG1803
#include <iostream>
using namespace std;
int main()
{int t;
    cin>>t;
    while(t--){
        int count=0,n,temp=0,a=0;
        cin>>n;
        //while(n--)
        
        for(int i=0;i<n;i++)
        {  cin>>a;
            if(a==1)
                count++;
            if(a==-1)
                temp++;
            
        }
        if(count>=temp)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;}
    return 0;
}

