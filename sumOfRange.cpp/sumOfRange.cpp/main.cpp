#include <iostream>
using namespace std;
int main(void)
{
    int n,q;
    cin>>n>>q;
    int a[n],l[q],m[q],r[q];
    
   for(int o=0;o<n;o++){
       
       for(int i=0;i<n;i++){cin>>a[i];}
    for(int i,j=0;i,j<n;i,j++){
        cin>>m[j]>>l[j]>>r[j];
       
        if(m[j]==1)
        {a[i]++;}
        cout<<a[i];
    }
    
   }
    
  // for(int j=0;j<q;j++)cout<<a[j];
    
    return 0;
}
