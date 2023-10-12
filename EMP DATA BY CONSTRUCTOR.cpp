#include <iostream>

using namespace std;

class Employee {
public:
    string name;
    int age;
    double sal;

    Employee(){
        name = "Default";
        age = 22;
        sal = 12000;
    }

    void entry() {
        cout << "Enter employee name: ";
        cin >> name;
        
        cout << "Enter employee age: ";
        cin >> age;
        cout << "Enter employee salary: ";
        cin >> sal;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << sal << endl;
    }
};

int main() {
    int max = 10;
    Employee employees[max];

    int num_e;

    cout << "Enter the number of employees (up to " << max << "): ";
    cin >> num_e;

    if (num_e > max) {
    cout << "You exceeded the maximum limit of " << max << " employees." <<endl;
        return 1; 
    }

    for (int i = 0; i < num_e; i++) {
        cout << "Enter details for employee " << i + 1 << ":" << endl;
        employees[i].entry();
    }
    cout <<endl ;
    cout <<endl ;
    cout << "Employee Details:" << endl;
    for (int i = 0; i < num_e; i++) {
        cout << "Employee " << i + 1 << ":" << endl;
        employees[i].display();
        cout <<endl ;
    }

    return 0;
}
