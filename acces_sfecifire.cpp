#include <iostream>
using namespace std;

class empl
{
private:
  int a, b, c;

public:
  int d, e;
  void setData(int a1, int b1, int c1);
  void getdata()
  {
    cout << "The vlaue of a is: - " << a << endl;
    cout << "The vlaue of b is: - " << b << endl;
    cout << "The vlaue of c is: - " << c << endl;
    cout << "The vlaue of d is: - " << d << endl;
    cout << "The vlaue of e is: - " << e << endl;
  }
};

void empl :: setData(int a1, int b1, int c1) 
{
  a = a1;
  b = b1;
  c = c1;
}

int main()
{
  empl suhas;
  suhas.e = 55;
  suhas.d = 87;
  suhas.setData(22, 23, 56);
  suhas.getdata();

  return 0;
}