#include<bits/stdc++.h>
using namespace std;
bool check(int x,int y,int z){
    int b,c;
    int a=max(x,max(y,z));
    if(a==x){
        b=y;
        c=z;
    }

    else if(a==y){
        b=x;
        c=z;
    }

    else if(a==z){
        b=y;
        c=x;
    }

  return a*a==b*b+c*c?true:false;  //MAX^2=1ST^2+2ND^2 ?


}


int32_t main(){

int x,y,z;
cin>>x>>y>>z;
if(check(x,y,z))
    cout<<"pythagorian triplet";

else
   cout<<"not a pythagorian triplet";

}