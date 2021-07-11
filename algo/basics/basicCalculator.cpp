#include<iostream>
using namespace std;

int main(){
    int op;
    float n1,n2;
    
    
    
    do{

            
        cout<<endl<<"enter num1: ";
        cin>>n1;
        cout<<endl<<"enter num2: ";
        cin>>n2;
         cout<<endl<<"input \n1 for Addition\n2 for Substraction\n3 for Multiplication\n4 for Division\nNegative number to exit "<<endl;
         cin>>op;
    cout<<"Result: ";
    

        switch (op)
    {
    case 1:
    cout<< n1+n2;
            break;
    case 2:
        cout<< n1-n2;
         break;
    case 3:
        cout<< n1*n2;
         break;      
    case 4:
        cout<< n1/n2;
            break;
    
    default:
    cout<<" Enter valid input";
        break;
    }
    
    cout<<endl<<endl;

    
 }
      while(op > -1);


    return 0;
}