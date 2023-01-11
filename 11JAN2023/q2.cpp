class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> count(1001 , 0);
        for(int i = 0 ; i < nums1.size() ; i++){
            if(count[nums1[i]] == 0)
                count[nums1[i]]++;
        }
        for(int i = 0 ; i < nums2.size() ; i++){
            if(count[nums2[i]] == 1)
                count[nums2[i]]++;
        }
        vector<int> ans;
        for(int i = 0 ; i <= 1000 ; i++){
            if(count[i] >= 2){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
