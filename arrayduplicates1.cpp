#include<iostream>
using namespace std;
int main()
{

    int a[5]={1,2,2,4,5};
    int b[5];
    int c[5];
    
   for(int i=0;i<5;i++)
    {
      b[i]=i+1;    
      if(b[i]!=a[i])  
      
     cout<<b[i]<<" ";
    
    }
     for(int i=0;i<5;i++){
    a[a[i] % 4] = a[a[i] % 4] +4;
      
        if (a[i] >= 4*2)  
        { 
            cout << i << " "; 
        } 
    
     }
    
}
