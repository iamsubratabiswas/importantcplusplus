#include<iostream>
using namespace std;

int main(){
//repeatedly swap two adjacent elements if they are in wrong order
//after first iteration we get last large digit 
//2nd iteration we get 2nd last element and so on
//max element comes up like bubble 6 element 5 iteration for 1st loop counter=5

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
     cin>>arr[i];
}

int counter=1;
while(counter<n) //after last iteration counter = n
{
   for(int i=0; i <n-counter; i++)  //n-1,n-2,n-3 and so on iterations
   {
       if(arr[i]>arr[i+1])     //swap
       {
           int temp=arr[i];
           arr[i]=arr[i+1];
           arr[i+1]=temp;
       }
   }
   counter++;                     //2,3,....
}

cout<<"sorted array is: ";
  for(int i=0;i<n;i++)
{
     cout<<arr[i]<<" ";
}  

return 0;
}