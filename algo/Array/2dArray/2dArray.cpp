#include<iostream>
#include<climits>
using namespace std;
int main()
{
  //input array
    int n,m;                       
    cin>>n>>m;                      
    int a[n][m];
    for (int i = 0; i < n; i++)
        for (int j=0;j<m;j++)
         cin>>a[i][j];
cout<<endl;
//print array
    for (int i = 0; i < n; i++)
    {
        for (int j=0;j<m;j++)
         cout<<a[i][j]<<" ";
         cout<<endl;
    }
    cout<<endl;

 //search matrix 
 int x;
 cout<<"enter element to search"<<endl;
 cin>>x; 
 bool flag=false;
     for (int i = 0; i < n; i++)
    {
        for (int j=0;j<m;j++)
        // cout<<a[i][j]<<" ";
        if(a[i][j]==x)
        {
         cout<<"Element Found At i= "<<i<<" j= "<<j<<endl;
         flag=true;
         break;
        }
    }
if(flag==false)
cout<<"Not Found";
cout<<endl;
 

 //spiral order printing
 int row_start=0, row_end=n-1, col_start=0, col_end=m-1;
 while(row_start<=row_end && col_start<=col_end)
{
    //for row_start
    for(int col=col_start;col<=col_end;col++)
    {
        cout<<a[row_start][col]<<" ";
    }
    row_start++;
//for col_end
for(int row=row_start; row<= row_end;row++)
cout<<a[row][col_end]<<" ";
col_end--;

//for row_end
for(int col=col_end;col>=col_start;col--)
        cout<<a[row_end][col]<<" ";
        row_end--;

//for col_start
for(int row=row_end; row>=row_start;row--)
cout<<a[row][col_start]<<" ";
col_start++;

}
    return 0;
}