/*
maximum  consecutive ones:
Question: find the maximum number of consecutive 1s in a binary array.
logic : Iterate through the array, keeping track of the current consecutive 1s and the maximum seen so far.
sample input: [1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1]
expected output is : 4

*/
#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(const vector<int>& nums) {
    int mc = 0, cc = 0; // maxCount and currentCount
    int n = nums.size();

    for (int i = 0; i < n; ++i) {
        if (nums[i] == 1) {
            cc++;
            if (cc > mc) {
                mc = cc;
            }
        } else {
            cc = 0;
        }
    }

    return mc;
}

int main() {
    vector<int> nums = {1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1};
    int maxConsecutiveOnes = findMaxConsecutiveOnes(nums);
    cout << "The maximum number of consecutive 1s is: " << maxConsecutiveOnes << endl;

    return 0;
}
