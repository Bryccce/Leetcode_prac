#include<vector>
#include<iosfwd>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int slow = 0;
        int fast = 0;
        for(;fast < nums.size();fast++){
            if(nums[fast] != val){//add val at fast to index slow if val is not the one to delete
                nums[slow] = nums[fast];
                slow++;
            }
        }
        return slow;
    }
};