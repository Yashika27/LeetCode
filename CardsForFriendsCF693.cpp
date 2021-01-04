#include <bits/stdc++.h>
using namespace std;


int main() {
    
    int w,n,h,i,t;
    cin>>t;
    
    for(i=1;i<=t;i++)
    {
    cin>>w>>h>>n;
    
    int c1=0,c2=0;
    
    while(w%2==0 && w/2>0)
    {
        c1++;
        w=w/2;
    }
    
    while(h%2==0 && h/2>0)
    {
        c2++;
        h=h/2;
    }
    int c=c1+c2;
    
    if(n>pow(2,c))
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
    
}
}
