#include<iostream>
using namespace std;

int main(){
//insert an element from unsorted array to its 
//correct position in sorted array
//start from 2nd element
 
int n;            
cin>>n;
int arr[n];
for(int i=0;i<n;i++)                //12 45 23 51 19 8
    {                               // j  i
        cin>>arr[i];
    }



  for(int i=1;i<n;i++)         //when i=4       j  j+1
  {
      int current=arr[i];
     int j=i-1;
     while(arr[j]>current && j>=0)
     {
         arr[j+1]=arr[j];
         j--;
     } 
     arr[j+1]=current;
  }
cout<<" sorted array is : ";
for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
