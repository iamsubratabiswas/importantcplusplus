#include<iostream>
using namespace std;

int main(){


          int n;
          cin>>n;
//way 1:
        n%2==0 ? cout<<"even":cout<<"odd";
        cout<<endl;

//way 2:
          if(n%2==0){
              cout<<"even";
          }
          else
          cout<<"odd";

    return 0;
}