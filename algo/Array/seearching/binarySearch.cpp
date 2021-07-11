#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key){
    int s=0; //starting point
    int e=n; //ending point

    while(s<=e)
    {                                   //visualize by 8,10,12,21,27,34,42 to search 27 ,
        int mid=(s+e)/2;                //s=0 e=6 mid=3(21)
        if(arr[mid]==key)               //s=4 e=5 mid=3(27)
        {                               //s=4 e=4 mid=4(27)
            return mid;                 //if search 21 we can get it first attempt
        }
        else if(arr[mid]>key )
        {
            e=mid-1;            //update end point 
        }

        else
        {
            s=mid+1;              //jupdate start index      
        }


    }
    return -1;

}

int main(){
int n;
cout<<"enter capacity and  elements of array"<<endl;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int key;
cout<<endl<<"enter element to search ";
cin>>key;
cout<<key<< " Found at index: " << binarySearch(arr,n,key)<<" by bianry search O(logn)";

    return 0;
}

/*
Complexity of binary search:
after:
1st itration ,length of array =n
2nd itration ,length of array =n/2
3rd itration ,length of array =n/2^2
kth itration ,length of array =  1 = n/2^k
                             =>n=2^k
                             =>k=log(n)
   COMPLEXITY= O(logn) 

*/