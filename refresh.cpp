#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> nums, int target) {
    
    int testSumNumber;
    for(int standIdx = 0; standIdx < nums.size(); standIdx++) {
        testSumNumber = nums[standIdx];
        for(int offsetIdx = 0; offsetIdx < nums.size(); offsetIdx++) {
            if(testSumNumber != nums[offsetIdx] && testSumNumber + nums[offsetIdx] == target) {
                return {standIdx, offsetIdx};
            }
        }
    }
    
    return {-1, -1};
}

int main() {
    
    vector<int> result = twoSum({7, 5, 11, 2}, 9);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}
