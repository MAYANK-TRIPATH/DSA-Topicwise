#include<iostream>
using namespace std;
void solve(int& nums , int ans, int index) {
// base case
if(index >= nums)
    return;

    for(int j = index; j<nums; j++){
        swap(nums[index], nums[j]);
        solve(nums, ans , index+1);
        swap(nums[index], nums[j]);
    }

}



int main () {
int ans;
int index = 0 ;

solve(nums, ans, index);
return ans;


}
