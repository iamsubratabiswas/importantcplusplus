#include<bits/stdc++.h>
using namespace std;
int hexaDecimalToDecimal(string n){
    int ans=0;
    int x=1;
    int s=n.size();  //by default .size() is defined in string
   for(int i=s-1;i>=0;i--){  //we are taking from last 

        if(n[i]>='0' && n[i]<='9')
        {
            ans+=x*(n[i]-'0');   //'0' - '0' =48-48=0
        }
        else if(n[i]>='A' && n[i]<='F')
        {
            ans+=x*(n[i]-'A'+10);  //'A'-'A'+10=65-65+10
        }

          x*=16;  //16^1,16^2,..........
    }
    return ans;

}


int32_t main()
{
    string n;  //string: we use STL because A,B,C,D,E also be used
    cin>>n;
    cout<<hexaDecimalToDecimal(n);
}