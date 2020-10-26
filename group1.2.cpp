#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++)
    {
        
        cin>>nums[i];
    }
    int len = 2;
     
      if(n <= 2)
      return n;
      for(int i = 2; i < n; i++){
         if( nums[i] != nums[len - 2] || nums[i] != nums[len - 1]){
            nums[len] = nums[i];
            len++;
          
         }
      }
    
    
    cout<<len;
    cout<<endl;
    for(int i=0;i<n;i++)
    {
    cout<<nums[i]<<" ";
    
    }
    
    
    
    
}
