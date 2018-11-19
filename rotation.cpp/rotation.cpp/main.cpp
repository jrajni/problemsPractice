#include <iostream>
using namespace std;
int main(void)
{
    string s,s1,s2;
    cin>>s1>>s2;
    s=s1+s1;
    for(int j=0,i=0;j<s2.length(),i<s.length();j++,i++){
    {   if(s2[j]==s[i])
        {
            cout<<"1";break;
        }else{
            cout<<"0";break;
        }
    }
    }
    return 0;
}
