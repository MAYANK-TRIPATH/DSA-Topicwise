#include<iostream>
using namespace std;

bool ispresent(int arr[3][3], int i, int j, int target){
 for(int i = 0; i<3; i++) {
    for(int j=0; j<3; j++) {

        if(arr[i][j] == target) {
            return 1;
        }
    }
 }
 return 0;
}

// Largest row sum

int largestRowSum(int  arr[][3], int i, int j) {

int maxi = INT_MIN;
int rowIndex = -1;

for(int i = 0; i<3; i++) {
    int sum = 0;
    for( int j=0; j<3; j++) {
        sum += arr[i][j];
    }

    if(sum > maxi) {
        maxi = sum;
        rowIndex = i;
    }
}

cout << "The maximum sum is" << maxi << endl;
return rowIndex;
}


int main() {
// create 2d array
int arr[3][3];

// taking input
 for(int i = 0; i<3; i++) {
    for(int j=0; j<3; j++) {
        cin >> arr[i][j];
    }
 }

 //print
 for(int i= 0; i<3; i++) {
    for(int j = 0; j<3; j++) {
        cout << arr[i][j] << " ";
    }
    cout << endl;
 }

/*
  // Printing the sum row wise

 void printSum(int arr[3][3], int i, int j) {
 cout << "Printing the sum" << endl;
 for(int i; i<3; i++) {
        int sum = 0;
    for ( int j = 0; j < 3; j++){
        sum += arr[i][j];
    }
    cout << sum << " ";
 }
 cout << endl ;
 }
*/


 // Search of an element from array

 cout <<" Enter the element to search " << endl;
 int target;
 cin >> target;

 if(ispresent(arr, target, 3, 3)) {
    cout << "Element found" << endl;
 }
 else {
    cout <<"Not found"<< endl;
 }

 int ansIndex = largestRowSum(arr,3,3);
 cout << "Max row is at index"<< ansIndex << endl;

 return 0;
};

