#include <iostream>
using namespace std;
int main(void)
{int m[10],ncount=0;
    string s;
  //  char s = new char[100001];
    //char s[100001];
    cin>>s;
    int l = s.length();
    for(int i=0;i<l;i++)
    {int count=0;
        int temp;
        temp=s[i];
      
        for(int j=i+1;j<l;j++)
        {m[j]=-1;
            if(temp==s[j])
            {
                m[j]=j;
                count++;
            }
            if(i==m[j]){break;}
        }
     ncount=count+ncount;
    }
    cout<<ncount<<endl;
    return 0;
}