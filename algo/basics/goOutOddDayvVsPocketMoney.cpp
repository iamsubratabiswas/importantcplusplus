#include<iostream>
using namespace std;

int main(){
int date,pocketMoney=3000;
for(date=1;date<=30;date++){
    if(date%2==0){
        continue;
    }
    if(pocketMoney<300){
        break;
    }
    cout<<"DAY "<<date<<": Go out today!"<<endl;
    pocketMoney -=300;
}
    return 0;
}