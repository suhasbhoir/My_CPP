#include <iostream>
#include <string>
using namespace std;

class binaries
{
private:
    string s;
    void check_binari(void);

public:
    void read(void);
    void validation(void);
    void display(void);
};

void binaries ::read(void)
{
    cout << "Enter the binary number here: " << endl;
    cin >> s;
}
void binaries ::check_binari(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary Number" << endl;
            exit(0);
        }
    }
}
void binaries ::validation(void)
{
    check_binari();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binaries ::display(void)
{
    cout<<"Displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binaries sb;
    sb.read();
    // sb.check_binari();
    sb.validation();
    sb.display();

    return 0;
}
