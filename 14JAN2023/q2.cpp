class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index =  upper_bound(nums.begin() , nums.end() ,target) - nums.begin();
        if(index != 0 && nums[index - 1] == target) return index - 1;
        return index;
    }
};
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        while(l<=h){
            int m=l+(h-l)/2;
            if(nums[m]<target){
                l=m+1;
            }
            else if(nums[m]>target){
                h=m-1;
            }
            else{
                return m;
            }
        }
        return l;
    }
};
