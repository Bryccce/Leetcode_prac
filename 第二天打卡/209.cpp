#include<vector>
#include<iosfwd>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int sum = 0;
        int subL = 0;
        int res = nums.size() + 1; //impossibly large value
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            while(sum >= target){
                subL = i - left + 1;
                res = res < subL ? res : subL;
                sum -= nums[left];
                left++;
            }
        }
        return res > nums.size() ? 0 : res;
        // If the sum of array is smaller than the target,
        // result will be zero and returned
    }
};