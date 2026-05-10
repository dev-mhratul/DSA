#include <iostream>
#include <vector>

using namespace std;

int majorityElement(vector<int>& nums) {
    int frq = 0, ans = 0;

    for(int i = 0; i < nums.size(); i++) {
        if(frq == 0) {
            ans = nums[i];
        }

        if(ans == nums[i]) {
            frq++;
        } 
        else {
            frq--;
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    
    int result = majorityElement(nums);

    cout << "Majority Element is: " << result << endl;

    return 0;
}