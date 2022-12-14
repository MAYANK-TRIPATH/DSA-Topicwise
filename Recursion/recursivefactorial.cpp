#include<iostream>
using namespace std;

//base case
int factorial(int n) {

if(n==0)
    return 1;

    // recursive call
    return n * factorial(n-1);
}

int main (){

int n ;
cin >> n;

//int ans = factorial(n);

cout << factorial(n) << endl;
}



// Counting by Recursion

 void print(int n) {

 // base case

 if(n==0) {
    return;
 }

 // Recursive relation

 print(n-1);
 cout << n << endl;
 }


int main (){
int n;
cin >> n;
cout << endl;
print(n);

 return 0;
}


// digit to alphabet

void sayDigit(int n, string arr[]) {
// base case
if(n==0)
    return ;

    // processing
    int digit = n % 10;
    n = n/ 10;
    // recursive call

    sayDigit(n, arr);

    cout << arr[digit] << " ";

}
int main (){


string arr[10] = {"Zero", "one", "two", "three","four", "five","six", "seven", "eight", " nine" };

int n;
cin >> n;

cout << endl << endl  << endl;
sayDigit(n, arr);
cout << endl << endl  << endl;


return 0;
}
*/
