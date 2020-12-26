#include<iostream>
using namespace std;

class My_Base{
    int data1;

    public:
    int data2;
    void setData();
    int getData1();
    int getData2();

};

void My_Base:: setData(void){
    data1 = 100;
    data2 = 200;
}
int My_Base::getData1(){
    return data1;
}
int My_Base::getData2(){
    return data2;
}

class My_Derived : public My_Base{
    int data3;

    public:

    void process_data();
    void display_data();
};

void My_Derived:: process_data(){
    data3 = data2 * getData1();
}
void My_Derived:: display_data(){
    cout <<"Value of data1 is: "<<getData1()<<endl;
    cout <<"Value of data1 is: "<<data2<<endl;
    cout <<"Value of data1 is: "<<data3<<endl;

}

int main(){
    My_Derived sis;
    sis.setData();
    sis.process_data();
    sis.display_data();
    
    return 0;
}