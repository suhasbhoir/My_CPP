#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

class randum
{
public:
  char name[20];

  int rollno;
  void display()
  {
    /* code */
    std::cout << "inside the class" << '\n';
    std::cout << "Enter the name here: " << '\n';
    std::cin >> name;
    std::cout6 << "Enter the roll number" << '\n';
    std::cin >> rollno;
    cout <<"student name is "<<name<< " And his Roll Number is: " <<rollno <<endl;

  }
};
int main()
  {
  /* code */
  randum s;
  s.display();
    }
