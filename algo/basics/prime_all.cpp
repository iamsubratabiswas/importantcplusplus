#include<iostream>
using namespace std;


int main(){
int a,b,i,div,flag;
cout<<"enter lower and upper bounnd"<<endl;
cout<<"lower bound = ";
cin>>a;
cout<<"upper bound = ";
cin>>b;
cout<<endl;
for(i=a;i<=b;i++){

       for(div=2;div<i;div++){ 
        if(i%div==0)
        {
            break;
        }
    }
     div==i ?cout<<i<<endl:cout<<"";
     
}
return 0;
}