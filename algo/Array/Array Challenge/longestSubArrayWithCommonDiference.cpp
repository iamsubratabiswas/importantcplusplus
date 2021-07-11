#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin>>n;
    int a[n];                   //10  7  4  6  8  10  11
    for(int i=0;i<n;i++)   //dif=   -3 -3  2  2  2   1 
    {                      //ans=4,consecutive
    cin>>a[i];
    }


    int ans=2;  // 2 element gives diff
    int pd=a[1]-a[0];//initial diffference
    int j=2;   
    int curr=2; //current length
   while(j<n)
    {

    if(pd==a[j]-a[j-1]) //if previous common difference is equal current c.d then increment current
        
        {
            curr++;
        }
    else{
            pd=a[j]-a[j-1];
            curr=2;
        }
        ans=max(ans,curr);

      j++;

    }

    cout<<ans<<endl;
    return 0;
}