
# Two Sum Problem Solution

## Problem Description
Given an array of integers `nums` and an integer `target`, return the indices of the two numbers such that they add up to the target.

You may assume that each input would have **exactly one solution**, and you may not use the same element twice.

You can return the answer in any order.

### Example
```plaintext
Input: nums = [2, 7, 11, 15], target = 9
Output: [0, 1]
Explanation: nums[0] + nums[1] = 2 + 7 = 9, so the indices are [0, 1].

#### My solution

create a map using std::map<int, int>
loop into the given array
check if the complement which is the diffence between target and the current value is exist in the map
if exist return the current index and the index stored in the map after store it in a vector
if it's not, store the current value as an index and the index itself as a value
otherwise return empty vector

[1, 5, 11, 9] target = 16

first iteration :
complement = 16 - 1 = 15 ; 15 doesnt exist in the map so store it like ; key = 1 and value = 0
comlement = 16 - 5 = 11 ; 11 doesnt exit ...
complement = 16 - 11 = 5 ; 5 exist from the previous iteation then when we sum them 11 + 5(from the previous iteration) = 16
then return the current index of 11 which is 2 and the index of 5 which is 1
result = [1, 2]


