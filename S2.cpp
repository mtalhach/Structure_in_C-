#include <iostream>
using namespace std;
struct point
{
    int x;
    float y;
};

int main()
{
    point arr[10];
    arr[0].x = 20;
    arr[0].y = 30;
    arr[1].x = 7;
    arr[1].y = 9;
    cout << "arr[0].x: " << arr[0].x << "    arr[0].y: " << arr[0].y << endl;
    cout << "arr[1].x: " << arr[1].x << "    arr[1].y: " << arr[1].y;
}