#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin>>n;          //greater than all previous day and next day
    int  a[n+1];                   //1 2 0 7 2 0 2 2 
     a[n]=-1;
    for(int i=0;i<n;i++)  
    {                      
    cin>>a[i];
    }

    if(n==1)
    {
        cout<<"1"<<endl;
        return 0;
    }


    int ans=0;
    int mx=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i] > mx && a[i] > a[i+1])
        {
            ans++;
        }
        mx=max(mx,a[i]);
    }

    cout<<ans<<endl;


    
    return 0;
}