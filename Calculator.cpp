#include<iostream>
using namespace std;
int main(){

    char opr;
    double a,b;

    cout<<"Enter your operation(+,-,*,/) " ;
    cin>>opr;

    cout<<"Enter first digit : " ;
    cin>>a;

    cout<<"Enter second digit : " ;
    cin>>b;

    if(opr=='+'){
        cout<<"Sum is "<<(a+b)<<endl;
    }
    else if(opr=='-'){
        cout<<"Difference is "<<(a-b)<<endl;
    }
    else if(opr=='*'){
       cout<<"Multiplication is "<<(a*b)<<endl;
    }
    else if(opr=='/'){
        cout<<"Division is "<<(a/b)<<endl;
    }
    else{
        cout<<"Invalid operation "<<endl;
    }

    return 0;
}