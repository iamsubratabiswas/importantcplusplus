// nCr

#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
for(int i=1;i<=x;i++){
f*=i;
}
return f;

}


int main(){

int n,r;
cin>>n>>r;
int ans=fact(n)/(fact(r)*fact(n-r));
cout<<ans;
    return 0;
}


