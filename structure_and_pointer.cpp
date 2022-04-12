// Pointers to Structure
#include <iostream>
using namespace std;
struct Distance
{
    int feet;
    float inch;
};
int main()
{
    Distance *p, d;
    p = &d;
    cout << "Enter The feet: ";
    cin >> (*p).feet;
    cout << "Enter The Inch: ";
    cin >> (*p).inch;

    cout << "The feet is: " << (*p).feet << endl;
    cout << "The Inch is: " << (*p).inch;
}
