#include<iostream>
using namespace std;

struct emps
{
    int empno;
    char my_char;
    float salary;
};

int main()
{
    struct emps suhas;
    struct emps swara;
    swara.empno = 50;
    swara.my_char = 's';
    swara.salary = 50000000;
    suhas.empno = 25;
    suhas.my_char = 'b'; 
    suhas.salary = 15000000;

    cout <<"Emp emp_code id: "<<swara.empno<<endl;
    cout <<"Emp My char is: "<<swara.my_char<<endl;
    cout <<"Emp salary is: "<<swara.salary<<endl;
    cout <<"Emp emp_code id: "<<suhas.empno<<endl;
    cout <<"Emp My char is: "<<suhas.my_char<<endl;
    cout <<"Emp salary is: "<<suhas.salary<<endl;
}