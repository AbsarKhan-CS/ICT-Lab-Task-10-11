
#include <iostream>
#include <string>
using namespace std;

// Base Class
class Person
{
private:
    string name;
    int age;

public:
    // Setter methods
    void setName(string n)
    {
        name = n;
    }

    void setAge(int a)
    {
        age = a;
    }

    // Getter methods
    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    // Virtual display function
    virtual void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    virtual ~Person() = default;
};

// Derived Class 1: Employee
class Employee : public Person
{
private:
    int employeeID;

public:
    void setEmployeeID(int id)
    {
        employeeID = id;
    }

    void displayInfo() override
    {
        cout << "\n----- Employee Details -----" << endl;
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Employee ID: " << employeeID << endl;
    }
};

// Derived Class 2: Student
class Student : public Person
{
private:
    int studentID;

public:
    void setStudentID(int id)
    {
        studentID = id;
    }

    void displayInfo() override
    {
        cout << "\n----- Student Details -----" << endl;
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Student ID: " << studentID << endl;
    }
};

// Main Function
int main()
{
    // Create Person object
    Person p;
    p.setName("Ali");
    p.setAge(30);

    cout << "----- Person Details -----" << endl;
    p.displayInfo();

    // Create Employee object
    Employee e;
    e.setName("Ahmed");
    e.setAge(28);
    e.setEmployeeID(101);

    e.displayInfo();

    // Create Student object
    Student s;
    s.setName("Sara");
    s.setAge(20);
    s.setStudentID(202);

    s.displayInfo();

    return 0;
}
