#include<vector>
#include<iosfwd>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res (nums.size(), 0);
        int k = nums.size() - 1; 
        //k is the index for res vector and starts from the end
        //because two pointers send the max val
        int left = 0;
        int right = nums.size() - 1;
        while(left <= right){
            if(nums[left] * nums[left] <= nums[right] * nums[right]){
                res[k] = nums[right] * nums[right];
                right--;
            }
            else{
                res[k] = nums[left] * nums[left];
                left++;
            }
            k--;
        }
        return res;
    }
};