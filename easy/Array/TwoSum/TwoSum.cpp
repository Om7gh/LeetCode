
#include <iostream>
#include <map>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::map<int, int> hashMap;
        std::vector<int> result;

        for (int i = 0; i < (int)nums.size(); i++)
		{
            int complement = target - nums[i];
	
            if (hashMap.find(complement) != hashMap.end()) {
                result.push_back(hashMap[complement]);
                result.push_back(i);
                return result;
            }
            hashMap[nums[i]] = i;
        }
        return result;
	}
};
