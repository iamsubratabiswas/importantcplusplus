//armstrong number= sum of digits qube = number 
//1^3 + 5^3 + 3^3 =153

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,rem,sum=0,copy;
    cin>>n;
 copy=n;
while(copy>0){
    rem=copy%10;
    sum+=pow(rem,3);
    copy/=10;
}
sum==n?cout<<"Armstrong number":cout<<"Non armstrong number";

    return 0;
}