class Solution {
public:
    void mysieve(int prime[], int n) {
        for (int i = 1; i <= n; i++) {
            prime[i] = i;
        }
        for (int i = 2; i * i <= n; i++) {
            if (prime[i] == i) {
                for (int j = i * i; j <= n; j += i) {
                    if (prime[j] == j) prime[j] = i;
                }
            }
        }
    }

    vector<int> findPrimeFactors(int n) {
        int prime[n + 1];
        vector<int> ans;
        mysieve(prime, n);

        while (n != 1) {
            ans.push_back(prime[n]);
            n = n / prime[n];
        }
        return ans;
    }
};
