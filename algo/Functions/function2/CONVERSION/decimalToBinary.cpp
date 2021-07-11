#include<bits/stdc++.h>
using namespace std;
int decimalToBinary(int n){   //suppose n=12
    int ans=0;
    int x=1;
    while(x<=n){  
         x*=2;          //x=16
          }
       
        x/=2;           //x=8

        while(x>0){                //  Step1         //next          //next        //next
            int quotient=n/x;      //   12/8 = 1        4/4=1            0           0
            n-=quotient*x;         // n=12-1*8 =4       4-4=0            0           0
            x/=2;                  // x = 8/2 =4        x=2              1           0
           ans =ans*10 + quotient; //ans=0+1=1          1*10 + 1=11   11*10=110      1100
        }
         return ans;
    }
    


int32_t main()
{
    int n;
    cin>>n;
    cout<<decimalToBinary(n);
}