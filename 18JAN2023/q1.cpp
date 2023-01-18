class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> ans;
        int size = 0;
        for(int i : index){
            ans.insert(ans.begin() + i , nums[size++]);
        }
        return ans;
    }
};
