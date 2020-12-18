#include<iostream>
using namespace std;

class access_spe {
public:
    int x, y;
 access_spe()
    {
      x = 30;
      y = 40;
      cout<< "access_spe constructer" << endl;
    }
  void display() {
    /* code */
  }
};
int main() {
  /* code */
  access_spe sb;
  sb.x;
  sb.y;
  // sb.a;
  std::cout << "Print x value " <<sb.x << '\n';
  std::cout << "Print y value " <<sb.y << '\n';
  // std::cout << "Print a value" <<sb.a << '\n';
    return 0;
}
