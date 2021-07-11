#include<iostream>
using namespace std;

int main(){

int n,i,fact=1;
cin>>n;
//by loop
i=n;
while(i>=1){
    fact*=i;
    i--;
}
cout<<"factorial= "<<fact;
    return 0;
}