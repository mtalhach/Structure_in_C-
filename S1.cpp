#include <iostream>
using namespace std;
struct point
{
    int x;
    float y;
};

int main()
{
    point p1 = {2, 5};
    p1.x = 20;
    cout << "x: " << p1.x << "    y: " << p1.y;
}

// struct point
// {
//     int x;
//     float y;
// } p1;

// int main()
// {
//     p1 = {2, 5};
//     cout << "x: " << p1.x << "    y: " << p1.y;
// }