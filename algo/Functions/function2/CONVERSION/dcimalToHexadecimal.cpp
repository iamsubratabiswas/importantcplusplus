#include<bits/stdc++.h>
using namespace std;
string decimalToHexadecimal(int n){   //suppose n=30
    string ans=""; //empty string
    int x=1;
    while(x<=n){  
         x*=16;          //x=256
          }
         x/=16;           //x=16

        while(x>0){                //  Step1                          //next          //next  
            int quotient=n/x;      //   30/16 = 1                      14/1=14            0 
            n-=quotient*x;         // n=30-1*16 =14                    14-14=0            0 
            x/=16;                 // x = 16/16 =1                     x=0              1 
            if(quotient<=9)               
            ans =ans + to_string(quotient) ; //ans=""+"1"="1"          c='A'+14-10
   //                                                                   =65+14-10=69='E'
            else
            {
                char c='A'+quotient-10;     // c='A'+14-10=65+14-10=69='E'
                ans.push_back(c);           // "1".push_back('E')="1E"
            }
        
        }
         return ans;
    }
    


int32_t main()
{
    int n;
    cin>>n;
    cout<<decimalToHexadecimal(n);
}