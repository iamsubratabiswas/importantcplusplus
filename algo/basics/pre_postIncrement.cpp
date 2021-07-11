#include<iostream>
using namespace std;

int main(){
    int i=1,j,m;

//   1   +   3 =4
 i = i++ + ++i;
cout<<i<<endl;
  
i=1,j=2;
int k;
//     1   2   1     2       3     4  =13
     k=i + j + i++ + j++ + ++i + ++j;
   cout<<"i= "<<i<<" j= "<<j<<" k= " <<k<<endl;

i=0;
//  0       0     1   1  = 0
i = i++ - --i + ++i - i--;
cout<<i<<endl;

i=1,j=2,k=3;
//     1     2     3   = -4   after i=0  j=1 k=2
   m = i-- - j-- - k--;
cout<<"i= "<<i<<" j= "<<j<<" k= " <<k<<" m= " <<m<<endl;


i=10,j=20,k;
//      10    9      19    20     9   20    9     19  == -21  after i=10,j=20
    k = i-- - i++ + --j - ++j + --i - j-- + i++ - j++;
    cout<<"i= "<<i<<" j= "<<j<<" k= " <<k<<endl;

    return 0;
}