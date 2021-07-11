#include<iostream>
using namespace std;

int main(){
   // max of 3 number
   int a,b,c;
   cin>>a>>b>>c;
   cout<<"max is ";
   a>b?(a>c?cout<<a:cout<<c):(b>c?cout<<b:cout<<c);

//alternative way

cout<<endl<<"max is ";
   if(a>b){
       if(a>c){
            cout<<a;
       }
       else{
            cout<<c;
       }
   }
   else{
       if(b>c){
            cout<<b;
       }
       else{
            cout<<c;
       }
   }

    return 0;
}