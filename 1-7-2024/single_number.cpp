#include <iostream>
#include <vector>

int singleNumber(const std::vector<int>& nums) {
    int result = 0;
    int n = nums.size();
    for (int i = 0; i < n; ++i) {
        result ^= nums[i];
    }
    return result;
}

int main() {
    std::vector<int> nums1 = {2, 2, 1};
    std::vector<int> nums2 = {4, 1, 2, 1, 2};
    
    std::cout << "Example 1: Input: nums = [2, 2, 1]\nOutput: " << singleNumber(nums1) << std::endl;
    std::cout << "Example 2: Input: nums = [4, 1, 2, 1, 2]\nOutput: " << singleNumber(nums2) << std::endl;
    
    return 0;
}
