#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin>>n;
    int a[n];                   //1 2 0 7 2
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    }
    int sum;
    for(int i=0;i<n;i++)
    {
        sum=0;
      for(int j=i;j<n;j++)
      {
          sum+=a[j];
          cout<<sum<<endl;

      }
    }


    return 0;
}