class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        int x = 0;
        int i;
        for( i = 0 ;i < n ;++i){
            if(arr[i]!=0) x++;
            else x+=2;
            if(x >= n){
                break;
            }
        }
        int j = n - 1;
        if(x > n){
            arr[j--] = arr[i--];
        }
        for(;i>= 0 ; i--){
            if(arr[i] != 0){
                arr[j--] = arr[i];
            }else{
                arr[j--] = 0;
                arr[j--] = 0;
            }
        }
        
    }
};
