#include <iostream>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums) int maxSum
    {
        for (i = 0; i < nums.size(); i++)
        {
        }
    }
};*/

/*class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int currentSum = nums[0];

        for (int i = 1; i <=nums.size(); i++)
        {
            if (currentSum<0){
            currentSum=0;
            }
            currentSum=currentSum+nums[1];
            if(currentSum>maxSum)
            {
                maxSum=currentSum;
            }
        }

    return maxSum;
    }
};
