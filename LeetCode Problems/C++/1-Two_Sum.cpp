/*
    Question: 
    Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
    You may assume that each input would have exactly one solution, and you may not use the same element twice.
    You can return the answer in any order.

    Example:
    Input: nums = [2,7,11,15], target = 9
    Output: [0,1]
    Output: Because nums[0] + nums[1] == 9, we return [0, 1].
    
*/

/*
    Approach:
    - Traverse through the vector in nested for loops hence taking a two pair each time
    - store the indices if the sum is equal to target.
*/
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> sum;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    sum.push_back(i);
                    sum.push_back(j);
                }
            }
        }
        return sum;
    }
};