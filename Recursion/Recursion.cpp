#include<iostream>
using namespace std;

// Sorting using Recursion
bool issorted(int arr[], int size){

// base case
if(size == 0 || size == 1){
    return true;
}
// processing
if(arr[0] >arr[1])
    return false;
else {
bool remainingpart = issorted(arr +1, size -1);
// recursive call
return remainingpart;
}
}

int main (){

int arr[5] = {1,2,6,9,5};
int size =5;

bool ans = issorted(arr, size);

if(ans) {
    cout << " Array is sorted" << endl;
}
else {
    cout << "Array is not sorted" << endl;
    }
};

// Sum of an array using recursion
int getsum(int *arr, int size) {

// base case
if(size == 0){
    return 0;
}
if(size == 1){
    return arr[0];
}

int remainingpart = getsum(arr+1, size -1);
int sum = arr[0] + remainingpart;
return sum;
}



int main (){

int arr[5] = {1,4,5,6,3};
int size = 5;

int sum  = getsum(arr, size);

cout << "Sum is " << sum << endl;

return 0;

}


// Linear search using recursion

int linearsearch (int arr[], int size, int k){
// basecase
if(size == 0)
    return false;

if (arr[0] == k){
    return true;
}
else{
    bool remainingpart = linearsearch(arr+1, size-1, k);
    return remainingpart;
    }
}

int main (){

int arr [5] = {2,4,5,6,9};
int size = 5;
int key = 6;
bool ans = linearsearch(arr, size, key);

if(ans){
    cout << "Present " << endl;
}
else{
    cout << "Absent" << endl;
}
return 0;
} */

// Binary search using recursion

bool binarysearch(int* arr, int s, int e, int k) {
// base case
if(s>e)
    return false;

    int mid  = s +(e-s)/2;

    if(arr[mid] == k)
        return true;

    if(arr[mid] < k){
        return binarysearch(arr, mid+1, e, k);
    }
    else {
        return binarysearch(arr,s,mid-1, k);
    }
}

int main (){

int arr[6] = {2,4,6,8,10,14};
int size = 6;
int key = 8;

bool ans = binarysearch(arr, s, e, k);

if(ans){
    cout << "Present" << endl;
}
else {
    cout << " Not present" << endl;
}

return 0 ;
}
