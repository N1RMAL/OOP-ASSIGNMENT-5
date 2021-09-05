#include <iostream>
#include<string.h>
using namespace std;

string name, department;
int id, salary, i;
double da, hra, ta, gross;
    
class Employee
{
    public:
    
    void input()
    {
        cout << "Enter the name of the employee:\n";
        getline(cin, name);
        
        cout << "Enter the ID number of the employee:\n";
        cin >> id;
        
        cout << "Enter the department of the employee:\n";
        cin.ignore();
        getline(cin, department);
        
        cout << "Enter the basic salary of the employee:\n";
        cin >> salary;
    }
    
    void display()
    {
        cout << "Employee Details:\n\n";
        cout << "Name: " << name;
        cout << "\nID: " << id;
        cout << "\nDepartment: " << department;
        cout << "\nSalary: " << salary;
    }
};

class Compute
{
    public:
    
    Compute(int salary)
    {
        da = salary/2;
        hra = (0.3*salary);
        ta = (0.1*salary);
        i=1;
    }
    
    Compute(int salary, double da, double hra, double ta)
    {
        gross = salary + da + hra + ta;
        i=2;
    }
    
    void Display()
    {
        if(i==1)
        {
            cout << "\nDearness Allowance: " << da;
            cout << "\nHouse Rent Allowance: " << hra;
            cout << "\nTravel Allowance: " << ta;
        }
        else
        {
            cout << "\nGross Salary: " << gross;
        }
    }
    
    ~Compute()
    {
        cout << "\n\nDestructed";
    }
};

int main()
{
    Employee obj;
    obj.input();
    obj.display();
    
    Compute r1(salary);
    r1.Display();
    Compute r2(salary, da, hra, ta);
    r2.Display();
}