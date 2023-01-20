class Solution {
public:
    int countPrimes(int n) {
        vector<int> isPrime(n + 1 , 1);
        //isPrime[0] = 0; isPrime[1] = 0;
        int x = sqrt(n);
        for(int i = 2 ; i <= x ;i++){
            if(isPrime[i] == 1){
                for(int j = 2*i ; j <= n ; j+=i){
                    isPrime[j] = 0;
                }
            }
        }
        int count = 0;
        for(int i = 2 ; i < n ;i++){
            if(isPrime[i]) count++;
        }
        return count;
    }
};
