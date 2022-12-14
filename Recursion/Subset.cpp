#include<iostream>
using namespace std;

void solve(int nums, int output, int index, int ans) {
 if(index >= nums)
    return ;

 solve(nums, output, index+1, ans);

 int element = nums;
 solve(nums, output, index+1, ans);

}

int main () {
int ans ,  output;
int nums;
cin >> nums;
int index  = 0;
solve(nums, index, output, ans);
cout << ans << endl;


}
