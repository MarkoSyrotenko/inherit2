#include <iostream>
using namespace std;

class Animal
{
protected:
    string name;
public:
    Animal()
    {
        name = "";
    }
    Animal(string n)
    {
        name = n;
    }
    virtual void makeSound() = 0;
};
class Dog :public Animal
{
public:
    Dog(string n)
    {
        name = n;
    }
    virtual void makeSound() override
    {
        cout << "Woof\n";
    }
};
class Cat :public Animal
{
public:
    Cat(string n)
    {
        name = n;
    }
    virtual void makeSound() override
    {
        cout << "Meow\n";
    }
};
class Bird :public Animal
{
public:
    Bird(string n)
    {
        name = n;
    }
    virtual void makeSound() override
    {
        cout << "Chirp\n";
    }
};
//2
class Transport
{
protected:
    string name;
public:
    Transport()
    {
        name = "";
    }
    Transport(string n)
    {
        name = n;
    }
    virtual void move() = 0;
};
class Car :public Transport
{
public:
    Car(string n)
    {
        name = n;
    }
    virtual void move() override
    {
        cout << "car moves\n";
    }
};
class Bicycle :public Transport
{
public:
    Bicycle(string n)
    {
        name = n;
    }
    virtual void move() override
    {
        cout << "bicycle moves\n";
    }
};
class Airplane :public Transport
{
public:
    Airplane(string n)
    {
        name = n;
    }
    virtual void move() override
    {
        cout << "airplane moves\n";
    }
};
//3
class Employee
{
protected:
    int hours;
public:
    Employee()
    {
        hours = 0;
    }
    Employee(int h)
    {
        hours = h;
    }
    virtual void calculateSalary() = 0;
};
class Manager :public Employee
{
public:
    Manager(int h)
    {
        hours = h;
    }
    virtual void calculateSalary() override
    {
        cout << "The manager makes " << 160 * hours << " dollars in " << hours << " hours\n";
    }
};
class Developer :public Employee
{
public:
    Developer(int h)
    {
        hours = h;
    }
    virtual void calculateSalary() override
    {
        cout << "The developer makes " << 80*hours << " dollars in " << hours << " hours\n";
    }
};
class Intern :public Employee
{
public:
    Intern(int h)
    {
        hours = h;
    }
    virtual void calculateSalary() override
    {
        cout << "The intern makes " << 40 * hours << " dollars in " << hours << " hours\n";
    }
};
//4
class PaymentMethod
{
protected:
public:
    virtual void pay(int amount) = 0;
};
class CreditCard :public PaymentMethod
{
public:
    virtual void pay(int amount) override
    {
        cout << "You paid " << amount << " through a credit card\n";
    }
};
class PayPal :public PaymentMethod
{
public:
    virtual void pay(int amount) override
    {
        cout << "You paid " << amount << " through PayPal\n";
    }
};
class CryptoWallet :public PaymentMethod
{
public:
    virtual void pay(int amount) override
    {
        cout << "You paid " << amount << " through a crypto wallet\n";
    }
};
//5
class Device
{
protected:
public:
    virtual void turnOn() = 0;
};
class Smartphone :public Device
{
public:
    virtual void turnOn() override
    {
        cout << "You turned the smartphone on\n";
    }
};
class Laptop :public Device
{
public:
    virtual void turnOn() override
    {
        cout << "You turned the laptop on\n";
    }
};
class TV :public Device
{
public:
    virtual void turnOn() override
    {
        cout << "You turned the TV on\n";
    }
};

int main()
{
    Animal* ptr = nullptr;
    int choice;
    cout << "1 - dog 2 - cat 3 - bird\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        ptr = new Dog("dog");
        break;
    case 2:
        ptr = new Cat("cat");
        break;
    case 3:
        ptr = new Bird("bird");
        break;
    }
    ptr->makeSound();

    Transport* ptr2 = nullptr;
    cout << "1 - car 2 - bicycle 3 - airplane\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        ptr2 = new Car("car");
        break;
    case 2:
        ptr2 = new Bicycle("bike");
        break;
    case 3:
        ptr2 = new Airplane("plane");
        break;
    }
    ptr2->move();

    Employee* ptr3 = nullptr;
    cout << "1 - manager 2 - developer 3 - intern\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        ptr3 = new Manager(8);
        break;
    case 2:
        ptr3 = new Developer(8);
        break;
    case 3:
        ptr3 = new Intern(8);
        break;
    }
    ptr3->calculateSalary();

    PaymentMethod* ptr4 = nullptr;
    cout << "1 - credit card 2 - paypal 3 - crypto wallet\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        ptr4 = new CreditCard;
        break;
    case 2:
        ptr4 = new PayPal;
        break;
    case 3:
        ptr4 = new CryptoWallet;
        break;
    }
    ptr4->pay(60);

    Device* ptr5 = nullptr;
    cout << "1 - smartphone 2 - laptop 3 - tv\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        ptr5 = new Smartphone;
        break;
    case 2:
        ptr5 = new Laptop;
        break;
    case 3:
        ptr5 = new TV;
        break;
    }
    ptr5->turnOn();
}