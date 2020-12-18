#include<iostream>
using namespace std;

// belof function use for call by value
void swap(int x, int y){
    int temp = x;
    x = y;
    y = temp;
}
// belof function use for call by reference
void swappointer(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
// belof function use C++ reference variable
void swapreferencevar(int &x, int &y){
    int temp = x;
    x = y;
    y = temp; 
}
int main(){
    int a =10, b=20;
    cout<<"value of a is: "<<a<<" and value of b is: "<<b<<endl;
    cout<<"after calling swap function"<<endl;
    swap(a, b); 
    cout<<"value of a is: "<<a<<" and value of b is: "<<b<<endl;
    cout<<endl;

    cout<<"value of a is: "<<a<<" and value of b is: "<<b<<endl;
    cout<<"after calling swap_Pointer function"<<endl; 
    swappointer(&a, &b);
    cout<<"value of a is: "<<a<<" and value of b is: "<<b<<endl;
    cout<<endl;

    cout<<"value of a is: "<<a<<" and value of b is: "<<b<<endl;
    cout<<"after calling C++ swapreference function"<<endl; 
    swapreferencevar(a, b);
    cout<<"value of a is: "<<a<<" and value of b is: "<<b<<endl;

    return 0; 
}