#include<iostream>
#include<climits>
using namespace std;

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}

int maxNo=INT_MIN,minNo=INT_MAX;   //we can use arr[0] but we want usee best option 
                                  //INT_MIN= minimum possible integer 
                                  //INT_MAX=maximum posible integer
                                  // header file #include<climits>
for(int i=0;i<n;i++)
{
//    if(arr[i]>maxNo)
//    {
//        maxNo=arr[i];
//    } 
//WE CAN USE max() ,min() method  ALSO in single ine
 maxNo=max(maxNo,arr[i]);

//   minNo=min(minNo,arr[i]); 

   if(arr[i]<minNo)
   {
       minNo=arr[i];
   } 

 
      

}

cout<<minNo<<"     "<<maxNo;
    return 0;
}