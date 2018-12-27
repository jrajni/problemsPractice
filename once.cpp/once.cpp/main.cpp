#include <iostream>
using namespace std;
int main(void)
{
    int arr[7]={1,3,1,4,5,3,5};
   int temp=arr[0];
    for(int i=0;i<6;i++)
    {
              temp^=arr[i+1];
    }
    
    cout<<temp;
}
