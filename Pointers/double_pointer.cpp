#include<iostream>
using namespace std;

int main () {
/*
int i = 5;
int* p = &i;
int ** p2 = &p;

cout << i << endl;
cout << *p << endl;
cout << **p2 << endl;

cout << &i << endl;
cout << p << endl;
cout << *p2 << endl;

// Ques - 1  (MCQ)

int f = 6;
int *p = &f;
int *q = p;
(*q)++;
cout << f << endl;
*/

int *p = 0;
int fi = 110;
*p = fi;
cout << *p << endl;

return 0;


}
