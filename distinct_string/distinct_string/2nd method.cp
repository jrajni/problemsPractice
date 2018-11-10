#include<iostream>
#include <algorithm>
using namespace std;
int main(void)
{int count=0;
    string s,m;
    cin>>s;
    sort(s.begin(),s.end(),greater<char>());
    for(int i=0;i<s.length();i++)
         {
             if(s[i]!=s[i+1])
             {
                
             }else{ count++;}
         }cout<<m<<endl<<count<<endl;
    return 0;
}
