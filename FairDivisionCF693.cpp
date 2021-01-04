#include <bits/stdc++.h>
using namespace std;


int main() {
    
    int n,i,t;
    cin>>t;
    
    for(i=1;i<=t;i++)
    {
    cin>>n;
    int x=0,y=0;
    int a[n];
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    if(a[i]==1)
    x++;
    else y++;
    }
    
    if(x%2==0 && y%2==0)
    cout<<"YES"<<endl;
    else if(x/2>0 && x%2==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    
}
}
