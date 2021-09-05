#include <iostream>
#include<string.h>
using namespace std;

string name, department;
int id, salary, i;

    
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
    private:
    double da, hra, ta, gross;
    
    public:
    Compute(int salary)
    {
        da = salary/2;
        hra = (0.3*salary);
        ta = (0.1*salary);
        gross = salary + da + hra + ta;
    }
    
    Compute(const Compute &n)
    {
        da=n.da;
        hra=n.hra;
        ta=n.ta;
        gross=n.gross;
    }
    
    void Display()
    {
        cout << "\nDearness Allowance: " << da;
        cout << "\nHouse Rent Allowance: " << hra;
        cout << "\nTravel Allowance: " << ta;
        cout << "\nGross Salary: " << gross << "\n";
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
    
    Compute obj1(salary);
    Compute obj2 = obj1;
    obj1.Display();
    obj2.Display(); //the other salaries will show twice due to copy
}

