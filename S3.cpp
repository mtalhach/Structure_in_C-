#include <iostream>
using namespace std;
struct Base
{
    int x;
};
struct Derived : Base
{
    int y;
};

int main()
{
    Derived d;
    d.x = 20;
    cout << d.x;
}
