// Returning structure from function

#include <iostream>
using namespace std;
struct person
{
    char name[10];
    int age;
    float salary;
};

person getData(person p)
{
    cout << "Enter The name of Person: ";
    // cin >> p.name;
    cin.get(p.name, 10);
    cout << "Enter The Age of Person: ";
    cin >> p.age;
    cout << "Enter The Salary of Person: ";
    cin >> p.salary;
    return p;
}

void display(person p)
{
    cout << "Name is: " << p.name << endl;
    cout << "Age is: " << p.age << endl;
    cout << "Salary is: " << p.salary << endl;
}
int main()
{
    person p, temp;
    temp = getData(p);
    p = temp;
    display(p); // mrthod call
}