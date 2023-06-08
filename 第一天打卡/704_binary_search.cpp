#include<vector>
#include<iosfwd>
using namespace std;

class Solution {
public:
    // [left, right]
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        while(left <= right){
            int middle = left + ((right - left) / 2); //prevent overflow = (left + right) / 2
            if(nums[middle] < target){
                left = middle + 1;
            }
            else if (nums[middle] > target){
                right = middle - 1;
            }
            else{
                return middle;//find the target
            }
        }
        return -1; //target is not in the array
    }
};

class Solution {
public:
    // [left, right)
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        while(left < right){ // left cannot be equal to right
            int middle = left + ((right - left) / 2); //prevent overflow = (left + right) / 2
            if(nums[middle] < target){
                left = middle + 1;
            }
            else if (nums[middle] > target){
                right = middle;
            }
            else{
                return middle;//find the target
            }
        }
        return -1; //target is not in the array
    }
};