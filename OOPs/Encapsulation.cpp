#include<iostream>
using namespace std;

// Encapsulation :- The process of grouping data members and corresponding methods into a single unit is know Encapsulation.
//              --> We can create a fully encapsulated class by making all the data members private.

private:
    string studentName;
    int studentRollno;
    int studdentAge;

public:

    string getStudentName() {
    return studentName;
    }

   void setStudentName(string studentName) {
   this -> studentName = studentName;
   }

   int getstudentRollno() {
   return studentRollno;
   }



int main () {
   Student obj;

   obj.setStudentName("Mayank");
   obj.setStudentName(101);
   obj.setStudnetAge(22);

   cout << "Student Name :" << obj.getStudentName() << endl;
   cout << "Student Age :" << obj.getStudentAge() << endl;

}

