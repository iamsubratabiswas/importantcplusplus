#include<iostream>
#include<cmath>

using namespace std;

int main(){
int n,i;
cin>>n;
// for(i=2;i<n;i++){
//     if(n%i==0){
//         cout<<"non prime";
//         break;
//     }
// }
// if(i==n)
//          cout<<"prime";







//alternative less iteration
int flag=0;
for(i=2;i<=sqrt(n);i++){    //wee can count upto square root
    if(n%i==0){
        cout<<"non prime";
        flag=1;
        break;
    }
}
if(flag==0)
         cout<<"prime";








return 0;
}
