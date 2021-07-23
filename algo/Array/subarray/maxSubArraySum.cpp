#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;                       
    cin>>n;                      
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

       int maxSum= INT_MIN;

//brutforce aproach //3 loop= O(n^3)

    /* 
for (int i = 0; i < n; i++)
{
    for (int j = i; j < n; j++)
    {    
        int sum = 0;
        for (int k = i; k <= j; k++)
        {
            sum+=a[k];
           // cout<<a[k]<<" ";
        }
        //cout<<endl;
        maxSum=max(maxSum,sum);
    }
}


cout<< "Maximum subarray sum is = "<<maxSum;
*/


//Cumalative sum aproach
/*
int currSum[n+1];
currSum[0]=0;

for (int i = 1; i <= n; i++)
{
    currSum[i]=currSum[i-1]+ a[i-1];
}

for (int i = 1; i <= n; i++)
{
  int sum=0;
  for (int j = 0; j < i; j++)
  {
      sum=currSum[i] - currSum[j];
      maxSum=max(sum,maxSum);
  }
}

cout<< "Maximum subarray sum is = "<<maxSum;

*/

//Kadane's Algorithm  //O(n)

 int currentSum=0;
 //int maxSum=INT_MIN;
 for(int i=0;i<n;i++)
 {
     currentSum+=a[i];
     if(currentSum<0)
     {
         currentSum=0;
     }
     maxSum=max(maxSum,currentSum);
 }
cout<< "Maximum subarray sum is = "<<maxSum;


    return 0;
 
}