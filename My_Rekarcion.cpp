#include<iostream>
using namespace std;

int fibonacci(int n){
    if (n<2){
        return 1;
    } 
    else{
    return fibonacci(n-2) + fibonacci(n-1);
    }
}

int factorial(int n){
    if (n <=1){
        return 1;
    } 
    return n * factorial(n-1);
}
int main(){
    int a; 
    // cout<<"Enter the number to caluclate Fctorial"<<endl;
    cout<<"Enter the number to caluclate Fibonacci"<<endl;
    cin >> a;
    // cout<<endl;
    // cout<<"you select "<<(a)<<" and Facorial of "<<(a)<<" is = "<<factorial(a)<<endl; 
    cout<<endl;
    cout<<"you select "<<(a)<<" and, at the sequence of"<<(a)<<" in Fibonacci number is: "<<fibonacci(a)<<endl; 


    return 0;
}