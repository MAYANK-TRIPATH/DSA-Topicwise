#include<iostream>
using namespace std;

 #define PI 3.14       // Yeh value



    /*
     int r = 5;

     double area = PI * r * r;                // Yaha replace karr dey raha
     cout << "Area is" << area << endl;


     // global variable


 int score = 15;

 void a(int& i) {

 cout << score << "in a " << endl;

 char ch = 'a';
 cout << i << endl;

 }

  void b(int& i ) {
  cout << score << " in b" << endl;
  cout << i << endl;
  }

  int main () {
  cout << score << " in main" << endl;
  int i = 5;
  a(i);
  b(i);
  */

  // Inline function


  inline int getMax(int & a, int&b) {
  return (a>b) ? a:b;
  }

  int main (){

  int a = 1, b=2;
  int ans = 0;

  ans = getMax(a,b);
  cout << ans << endl;

  a = a+3;
  b = b+1;

  ans = getMax(a,b);
  cout << ans << endl;


     return 0;
}
