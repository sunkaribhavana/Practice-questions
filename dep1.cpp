#include<iostream>
using namespace std;
int main()
{
    int n,i=0;
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        
        cin>>a[i];
    }
    int len = sizeof(a)/sizeof(a[0]);
    
    for (int j = 1; j < n; j++) {
        if (a[j] != a[i]) {
            i++;
            a[i] = a[j];
        
        
        }
    
        //cout<<i+1;
    
    }
    cout<<i+1<<" ";
    
}
