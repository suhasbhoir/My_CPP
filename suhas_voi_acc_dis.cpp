#include<iostream>
using namespace std;

class engineers
    {
      int emp_id;
      char fname[30]; char lname[30];
      char city[30];
    public:

      void accept()

      {
        std::cout<<"Entered in Public Access Specifier"<< '\n';
        std::cout << "Enter your Employee ID here " << '\n';
        std::cin >> emp_id;
        std::cout << "Enter your First Name and Last Name: " << '\n';
        std::cin >> fname>> lname;
        std::cout << "Enter your City here: " << '\n';
        std::cin >> city;
      }
      void display()
      {
        std::cout << "you Employee ID is: " <<emp_id<<endl;
        std::cout << "you Name is: " <<fname<<" "<< lname<<endl;
        std::cout << "you City is: " <<city<<endl;
     
     
      }

    };
    int main()
      {
       engineers emp1, emp2;
       emp1.accept();
       emp1.display();
       emp2.accept();
       emp2.display();


       return 0;
      }
