#include <iostream>
using namespace std;
int main(void)
{
    int n,q;
    cin>>n>>q;
    long int a[n],l[q],m[q],r[q];
    
       for(int i=0;i<n;i++){cin>>a[i];}
  
    for(int j=0;j<n;j++){
        
        cin>>m[j]>>l[j]>>r[j];
    }
    for(int j=0;j<n;j++){
        int i=l[j];
        if(m[j]==1)
        {
            a[i]++;}
        
        if(m[j]==2)
        {int s=0;
            for(int i=0;i<=r[j];i++){s=s+a[i];
                
            }cout<<s<<endl;
        }
        for(int i=0;i<n;i++)cout<<a[i]<<" ";
    }
    return 0;
}


