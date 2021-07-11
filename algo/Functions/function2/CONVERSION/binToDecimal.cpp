#include<bits/stdc++.h>
using namespace std;
int binaryToDecimal(int n){
    int ans=0;
    int x=1;
    while(n>0){
        int y=n%10;  //last digit
        ans+=x*y;    //2^0
        x*=2;  //2^1,2^2,..........
        n/=10;  
    }
    return ans;

}


int32_t main()
{
    int n;
    cin>>n;
    cout<<binaryToDecimal(n);
}