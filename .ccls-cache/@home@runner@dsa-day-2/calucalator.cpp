/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{ 
    int a,b;
    cout << "enter the value of a" <<endl;
    cin >> a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    char op;
    cout<<"enter the operation you want to perform"<<endl;
    cin>>op;
    switch(op){
        case '+': cout<<(a+b)<<endl;
            break;
        case '-':cout<<(a-b)<<endl;
            break;
        case '*':cout<<(a*b)<<endl;
            break;
        case '/':cout<<(a/b)<<endl;
            break;
        default:cout<<"this is a default"<<endl;
            
    
    }

    return 0;
}
