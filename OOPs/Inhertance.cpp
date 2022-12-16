#include<iostream>
using namespace std;

// Inheritance :- is the process of inheriting the properties and behaviour of an existing class into a new class.
// Also known as Parent-child relation.

class Human {

private:
int height;

public:
int weight;

private:
int age;

public:
    int getAge() {
    return this ->age;
    }

    void setWeight(int w) {
    this ->weight == w;
    }

};

 class Male: private Human {

 public:
     string color;

     void sleep() {
     cout << "Male is Sleeping" << endl;
     }

    int getHeight() {
    return this ->height;
    }
 };

 int main() {

 Male m1;
 cout << m1.height << endl;

 Male object;
 cout << object1.age << endl;
 cout << object1.weight << endl;
 cout << object1.height << endl;

cout << object1.color << endl;


 return 0;
 }




