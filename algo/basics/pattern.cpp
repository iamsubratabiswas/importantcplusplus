#include<iostream>
using namespace std;

int main(){
    int row,col,i,j,count,k;
    cout<<"enter row and col ";
    cin>>row>>col;

    /*

    *****
    *****
    *****
    *****
    *****
    
    */
     for(i=0;i<row;i++){
        for(j=0;j<col;j++){
                         cout<<"*";
                          }
           cout<<endl;
            }

    cout<<endl;


 /*

        *****
        *   *
        *   *
        *   *
        *****
        
 */

     for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            (i==1 || i==row || j==1 || j==col)?cout<<"*":cout<<" ";
                          }
           cout<<endl;
            }

    cout<<endl;


//inverted pyramid
 /*
            *****
            ****
            ***
            **
            *
        
 */

     for(i=row;i>=1;i--){
        for(j=1;j<=i;j++){
                         cout<<"*";
                          }
           cout<<endl;
            }

    cout<<endl;

//Half pyramid after 180 degree rotation
  /*
            *
           **
          ***
         ****
        *****
        
 */
 for(i=1;i<=row;i++){
        for(j=1;j<=row;j++){
            j<=row-i ? cout<<" ":cout<<"*"; 
             }
           cout<<endl;
            }

    cout<<endl;

//Alternative way
     for(i=1;i<=row;i++){
        for(j=row;j>=1;j--){
            j<=i? cout<<"*":cout<<" "; 
             }
           cout<<endl;
            }

    cout<<endl;

  /*
1
22
333
4444
55555
 
        
 */


     for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
                        cout<<i;
                          }
           cout<<endl;
            }

    cout<<endl;    


//Floyd's Triangle
  /*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
        
 */

count=0;

     for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
                         count++;
                        cout<<count<<" ";
                          }
           cout<<endl;
            }

    cout<<endl;   


  /*
*        *
**      **
***    ***
****  ****
**********
**********
****  ****
***    ***
**      **
*        *
        
 */
       
     for(i=1;i<=row;i++){
        for(j=1;j<=2*row;j++){
          (j<=i || j>2*row-i)?cout<<"*":cout<<" ";
                          }
           cout<<endl;
            }

      for(i=row;i>=1;i--){
          for(j=1;j<=2*row;j++){
            (j<=i || j>2*row-i)?cout<<"*":cout<<" ";
                            }
            cout<<endl;
              }
           
    cout<<endl;  

  /*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
   
 */
      for(i=row;i>=1;i--){
        for(j=1;j<=i;j++){
                         cout<<j<<" ";
                          }
           cout<<endl;
            }

    cout<<endl; 

  /*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
   
 */     

for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            (i+j)%2==0 ? cout<<"1 ":cout<<"0 "; 
             }
           cout<<endl;
            }

    cout<<endl;

  /*
    * * * * *
   * * * * *
  * * * * *
 * * * * *
* * * * *
   
 */     

for(i=1;i<=row;i++){
        for(j=1;j<=row+row-i;j++){
          j>row-i?cout<<"* ":cout<<" ";
                         
                          }
           cout<<endl;
            }

    cout<<endl;




  /*
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
   
 */    


for ( i = 1; i <= row; i++)
{
  for ( j = 1; j <= row-i; j++)
  {
   cout<<" ";
       
  }
  for ( j = 1; j <=i; j++)
  cout<<j<<" ";

  cout<<endl;
  
}


//palindromic pattern

  /*
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5

   
 */ 

for ( i = 1; i <= row; i++)
{
  for ( j = 1; j <= row-i; j++)
  {
   cout<<"  ";
       
  } 
 k=i; 
for(;j<=row;j++){
  cout<<k--<<" ";

}
k=2;
for(;j<=row+i-1;j++){
  cout<<k++<<" ";

}
cout<<endl;

}


for ( i = 1; i <= row; i++)
{
  for ( j = 1; j <= row-i; j++)
  {
   cout<<"  ";
       
  } 

 for(j=1;j<=2*i-1;j++){
  cout<<"* ";
 }
   cout<<endl;
}

for ( i = row; i >= 1; i--)
{
  for ( j = 1; j <= row-i; j++)
  {
   cout<<"  ";
       
  } 

for(j=1;j<=2*i-1;j++){
  cout<<"* ";

}

cout<<endl;

}


//for col=9
/*



    *       *
  *   *   *   *
*       *       *


*/


for ( i = 1; i <= 3; i++)
{
  for ( j = 1; j <= col; j++)
  {
  ((i+j)%4==0 || ( i==2 && j%4==0))?cout<<"* ":cout<<"  ";
       
  }

  cout<<endl;
  
}


    return 0;
}  