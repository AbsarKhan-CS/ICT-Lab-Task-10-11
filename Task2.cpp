
#include <iostream>
#include <string>
using namespace std;

// Base Class
class Animal
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

    // Display animal information
    void displayInfo()
    {
        cout << "Animal Name: " << name << endl;
        cout << "Animal Age: " << age << endl;
    }
};

// Derived Class 1: Mammal
class Mammal : public Animal
{
public:
    void feedBaby()
    {
        cout << "Feeding baby mammal." << endl;
    }
};

// Derived Class 2: Bird
class Bird : public Animal
{
public:
    void layEgg()
    {
        cout << "Laying an egg." << endl;
    }
};

// Derived Class 3: Reptile
class Reptile : public Animal
{
public:
    void shedSkin()
    {
        cout << "Shedding skin." << endl;
    }
};

// Main Function
int main()
{
    // Create Mammal object
    Mammal m;
    m.setName("Lion");
    m.setAge(5);

    cout << "----- Mammal Details -----" << endl;
    m.displayInfo();
    m.feedBaby();

    cout << endl;

    // Create Bird object
    Bird b;
    b.setName("Parrot");
    b.setAge(2);

    cout << "----- Bird Details -----" << endl;
    b.displayInfo();
    b.layEgg();

    cout << endl;

    // Create Reptile object
    Reptile r;
    r.setName("Snake");
    r.setAge(3);

    cout << "----- Reptile Details -----" << endl;
    r.displayInfo();
    r.shedSkin();

    return 0;
}
