/* OOPs refers to the language that uses the concept of class and object in programming.
Question - Why do we use OOPs :-

* To make the development and maintaince of project more manageable.
* To provide the feature of data hiding that is good for security concerns.
*/


#include<iostream>
using namespace std;

// A class is a logical entity that is used to define a new data type.
// Class is a template for an object. A class contains variables, methods , and constructors.

class Hero {   // Here HERO is an object  :- The object is an entity that has a state and behaviour.

// ACCESS MODIFIER :- Used to assign access to the class members.

     // Properties

private:      // Private can be only called within the class.
    int health;



public:       // Yeah wla can be called anywhere in the program
    char *name;
    char level;
    static int time ToComplete;

     // Constructor

 //  A constructor is a special type of member function that is called automatically when an object
 //  is created.

    Hero() {
    cout << "Simple constructor called" << endl;
    name = new char[100];
}

// Parameterised constructor :- A constructor with parameters is known as parameterized constructor.
             //                 The parameterized constructor takes its argument provided by the programmer.
Hero(int health) {
this -> health = health;
}

Hero(int health, char level) {

// this Pointer :- this pointer holds the current objects address; this pointer points to the class's current object.
// 1 -  It can be used to pass the current object as a parameter to another method.
// 2 -  It can be used to refer to a current class instance variable.
// 3 -  It can be used to declare indexes.

this -> level = level;
this -> health = health;
}

//Copy constructor :- A copy construction is a member function that initialized an object using another object of the same class.

Hero(Hero& temp) {
char *ch = new char[strlen(temp.name) + 1];
strcpy(ch, temp.name);
this->name = ch;

cout << "Copy constructor called" << endl;
this->health = temp.health;
this->level = temp.level;
}


void print() {
cout << endl;
cout << "[ Name: " << this ->name<<" , ";
cout << "health: " << this ->health << " , ";
cout <<"level: " << this-> level << "]";
cout << endl << endl;

}

//Getter :- Getters are those functions that allow us to access data members of the object.

int gethealth(){
return health;
}

char getlevel() {
return level;
}

//Setter :- Setters are the member functions that allows us to change the data members of an object.Also called Mutator functions

void sethealth (int h) {
health = h;
}

void setlevel(char ch) {
level = ch;
}

void setName(char name[]) {
strcpy(this->name, name);
}

static int random(){
return timeToComplete ;
}

// Destructor :- It destroy or delete object.(~)

~Hero() {
cout << "Destructor is called " << endl;
}

};

int main() {

int Hero::timeToComplete = 5;

int main() {

cout << Hero::random() << endl;
cout << Hero::timeToComplete << endl;

Hero a;


cout << a.timeToComplete << endl;


Hero b;
b.timeToComplete = 10;
cout << a.timetoComplete << endl;
cout << b.timeToComplete << endl;


// Static

Hero a;

// Dynamic
Hero *b = new Hero();

// Manually destructor called
delete b;


Hero hero1;

hero1.sethealth(12);
hero1.setlevel('D');
char name[7] = "Babbar";
hero1.setName(name);

}












