#include<iostream>
using namespace std;

int main()
{
    int arr[4];   //declaration
    arr[0]=1;   //accessing
    arr[2]=5;
    cout<<arr[3]<<"  "<<arr[3];
    int arr1[4]={1,2,4,8}; //declaration and initialization 
    cout<<arr1[3]<<endl;
    //user input of array
    int size;
    cin>>size;
    int array[size];          //no new - delete
    for(int i=0; i<size;i++)
    {
        cin>>array[i];
    }

    for(int i=0; i<size;i++)
    {
        cout<<array[i]<<" ";

    }
 return 0;
}