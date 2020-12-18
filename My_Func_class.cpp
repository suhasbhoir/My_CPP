#include<iostream>
using namespace std;

// int sum(int a, int b){
//     int c = a+b;
//     return c;
int sum(int a, int b); 

int main(){
    int num1;
    int num2;
    cout<<"enter fist num"<<endl;
    cin >>num1;
    cout<<"enter second num"<<endl;
    cin >>num2;

    cout<<"sum of num1 and num2 is: "<<sum(num1, num2)<<endl;
    return 0;
}

int sum(int a, int b){
    int c = a+b;
    return c;
}