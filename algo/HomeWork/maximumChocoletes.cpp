#include<iostream>
using namespace std;

int main(){
    /*
    problem:
    you have 15 rupees
    1 rupee= 1 chocolete
    3 Wrapper =1 chocolet

    max no of chocoletes = ?
    15+15/3+3/3+(2+1)/3 =22
    */
int money,wrapper,chocolet;
cin>>money;
chocolet=money;
wrapper=chocolet;

while(wrapper>=3 ){  
int newChocolet=wrapper/3;
chocolet+=newChocolet;
wrapper=wrapper%3+newChocolet;

}

cout<<"maximum no of chocolets= "<<chocolet;

    return 0;
}