#include<iostream>
using namespace std;

int main(){
//Find the minimum element
// in undhorted array and swap it with element at begining   
//2 loops : i-loop: (1st to 2nd last)element  j-loop: (i+1 to nth element)
 
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int i,j;
for(i=0;i<n-1;i++)
{
    int min = i;
    for(j=i+1;j<n;j++)
    {
       if(arr[j]<arr[min]) 
       {
           min=j;
       }
    }
    if(min!=j)
    {
      int temp;
      temp=arr[i]; 
      arr[i]=arr[min];
      arr[min]=temp; 
    }
}
cout<<"sorted array is: ";
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
    return 0;
}