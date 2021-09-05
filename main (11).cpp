#include <iostream>
#include<string.h>
using namespace std;

class Employee 
{
    public:
    string name, department;
    int id, salary;
    double da, hra, ta, gross;
    
    
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
    
    void compute()
    {
        da = salary/2;
        hra = (0.3*salary);
        ta = (0.1*salary);
        gross = salary + da + hra + ta;
    }
    
    void display()
    {
        cout << "\nEmployee Details:\n\n";
        cout << "Name: " << name;
        cout << "\nID: " << id;
        cout << "\nDepartment: " << department;
        cout << "\nSalary: " << salary;
        cout << "\nDearness Allowance: " << da;
        cout << "\nHouse Rent Allowance: " << hra;
        cout << "\nTravel Allowance: " << ta;
        cout << "\nGross Salary: " << gross;
    }
};

int main()
{
    Employee obj;
    obj.input();
    obj.compute();
    obj.display();
}
