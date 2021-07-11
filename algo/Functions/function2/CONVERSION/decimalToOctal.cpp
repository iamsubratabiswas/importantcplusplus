#include<bits/stdc++.h>
using namespace std;
int decimalToOctal(int n){   //suppose n=12
    int ans=0;
    int x=1;
    while(x<=n){  
         x*=8;          //x=64
          }
               x/=8;           //x=8

        while(x>0){                //  Step1         //next          //next  
            int quotient=n/x;      //   12/8 = 1        4/1=4            0 
            n-=quotient*x;         // n=12-1*8 =4       4-4=0            0 
            x/=8;                  // x = 8/8 =1        x=0              1 
            ans =ans*10 + quotient; //ans=0+1=1          1*10 + 4=14   11*10=14
        }
         return ans;
    }
    


int32_t main()
{
    int n;
    cin>>n;
    cout<<decimalToOctal(n);
}