// 0C0
// 0C0 0C1
// 0C0 0C1 0C2
// 0C0 0C1 0C2 0C3
// ------------------
// --------------------



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

int n;
cin>>n;
for(int i=0;i<n;i++){
    for ( int j = 0; j <= i; j++)
    {
   cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
    }
     
  cout<<endl;  
}

    return 0;
}
