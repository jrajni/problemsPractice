#include <iostream>
using namespace std;
int main(void)
{int t;
    cin>>t;
    while(t--){
    int i=1,a,count=0,b,aa=0,bb=0;
    cin>>a>>b;//4 2
    while(1)
    {if(count%2==0)
    {aa=aa+i;//1
      //  cout<<aa<<endl;
        if(aa<=a)
            i++;//2
    
        else{cout<<"Bob"<<endl;break;}
        count++;
    }else{
        bb=bb+i;//2
        if(bb<=b)
            i++;//3
        
        else{cout<<"Limak"<<endl;break;}count++;
    }//cout<<endl<<i<<endl;
    }}
    return 0;
}
