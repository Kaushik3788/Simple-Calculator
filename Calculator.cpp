#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value of A: "<<endl;
    cin>>a;
    
    cout<<"Enter the value of B: "<<endl;
    cin>>b;
    
    char op;
    cout<<"Enter the Operation you want to perform:   "<<endl<< "       (eg.'+','-','*','/','%')"<<endl;
    cin>>op;
    
    
    switch( op )
    {
        case '+':
        cout<<"You choose SUM and your OUTPUT is: "<<(a+b);
        break;
        
        case '-':
        cout<<"You choose SUB and your OUTPUT is: "<<(a-b);
        break;
        
        case '*':
        cout<<"You choose MUL and your OUTPUT is: "<<(a*b);
        break;
        
        case '/':
        cout<<"You choose DIVIDE and your OUTPUT is: "<<(a/b);
        break;
        
        case '%':
        cout<<"You choose MODULO and your OUTPUT is: "<<(a%b);
        break;
        
        default:
        cout<<"Please Enter Valid OPERATOR.";
    }
    
}
