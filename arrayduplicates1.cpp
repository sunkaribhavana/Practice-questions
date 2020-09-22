#include<iostream>
using namespace std;
int main()
{
 int n;
 cin>>n;

    int a[n];
    int b[n];
       for(int i=0;i<n;i++)

       {
         cin>>a[i];
       }

    
   for(int i=0;i<n;i++)
    {
      b[i]=i+1;    
      if(b[i]!=a[i])  
      
     cout<<b[i]<<" ";
    
    }
     for(int i=0;i<n;i++){
    a[a[i] % (n-1)] = a[a[i] % (n-1)] +(n-1);
      
        if (a[i] >= (n-1)*2)  
        { 
            cout << i << " "; 
        } 
    
     }
    
}
