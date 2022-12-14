#include<iostream>
using namespace std;
// bubble sort using recursion

void sortArray(int *arr, int n)
{
//base case
    if(n == 0 || n == 1)
    {
        return ;
    }
    for(int i = 0; i<n-1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            swap(arr[i], arr[i+1]);
        }
    }
    sortArray(arr, n-1);
}


int main ()
{

    int arr[5] = {2,3,5,6,8};

    sortArray(arr,5);

    for(int j= 0; j<5; j++)
        cout << arr[j] << " ";
    cout << endl;
    return 0;
}
