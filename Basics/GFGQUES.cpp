#include<iostream>
using namespace std;

// Ques   -    Reverse an Array  ------------------------------------------------------------------------------------------

void reverseArray(int arr[], int start, int end) {
while(start < end){
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;

}
}
void printArray(int arr[], int size){
for(int i = 0; i<size; i++)
    cout << arr[i] << " ";

    cout << endl;
}

int main(){

int arr[] = {1,2,3,4,5};

int n = sizeof(arr)/sizeof(arr[0]);

reverseArray(arr, 0, n-1);


 printArray(arr, n);




//Ques -  Move All negative elements to the end   -----------------------------------------------------------------------------------------------------

// fxn

void movetoend(int arr[], int n){

 int *newarr = new int[n];

 int j = 0;

 for (int i = 0; i<n ; i++){

    if(arr[i]>0){

        newarr[j++]=arr[i];

    }
 }

  for (int i = 0; i<n ; i++){

    if(arr[i]<0){

        newarr[j++]=arr[i];

    }
 }

  for (int j = 0; j<n ; i++){

    arr[j] = newarr[j];

  }
}



// Ques  - Cyclically rotate an array by one ------------------------------------------------------------------------------------------------------------

void rotate(int arr[], int n) {
int temp = arr[n-1];
for(int i = 0; i <= n-2; i++) {
    arr[i+1] = arr[i];
}
arr[0] = temp;
}


// Ques - Maximum Occuring character



