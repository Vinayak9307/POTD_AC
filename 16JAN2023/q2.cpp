class Solution {
public:
    char nextGreatestLetter(vector<char>& a, char target) {
        int low = 0;
        int high = a.size();
        while(low < high){
            int mid = low + (high - low )/2;
            if(a[mid]<=target){
                low = mid+1;
            }else{
                high = mid;
            }
        }
        if(low == a.size()) return a[0];
        return a[low];
    }
};
