#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i;
    string s;
    string t;
    cin>>s;
    cin>>t;
    for(int i=0;i<s.length()+1;i++)
     
     {
         if(s[i]!=t[i])
         cout<<t[i]<<" is the letter that was added";
     }  
         
    return 0;
}
