#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSumVec(vector<int>nums){
    int currSum= 0, maxSum = INT_MIN;

    for(int val : nums){
        currSum+=val;
        maxSum = (currSum, currSum);
        if(currSum<0){
            currSum=0;
        }
    }
    return maxSum;
}


int main() {
    vector <int> nums= {1,-6,3,7,-2,6};
    
    // maxSumVec(nums);

    cout<< maxSumVec(nums);
    
    return 0;
}