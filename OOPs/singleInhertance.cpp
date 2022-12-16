#include<iostream>
using namespace std;

// Single Inheritance :- One class can extend the functionality of another class. In single inheritance, there is only
//                       one parent class and only one child class.

    class Animal {

    public:

    int age;
    int weight;


    public:
    void speak() {
    cout << " Speaking " << endl;
    }
};

class Dog: public Animal {

};


int main () {

    Dog d;
    d.speak();
    cout << d.age << endl;

    return 0;
}
