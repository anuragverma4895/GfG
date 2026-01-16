class Solution{
public:
    long long findNth(long long n){
        long long ans = 0, p = 1;
        while(n > 0){
            ans += (n % 9) * p;
            n /= 9;
            p *= 10;
        }
        return ans;
    }
};
