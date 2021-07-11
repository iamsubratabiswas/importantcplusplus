#include<iostream>
using namespace std;
int fact(int);
int main(){

int n;
cin>>n;
int ans=fact(n);
cout<<ans;
    return 0;
}


int fact(int x){
    int f=1;
for(int i=1;i<=x;i++){
f*=i;
}
return f;

}