class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low = 0;
        int high = 0;
        int n = fruits.size();
        int res =0 ;
        unordered_map<int, int> freq;
        for (int high = 0; high < n; high++) {

            freq[fruits[high]]++;

            // case1
            if (freq.size() < 2) {
                int len = high - low + 1;
                res = max(len, res);
                continue;
            }
            if (freq.size() > 2) {
                while (freq.size() > 2) {

                    freq[fruits[low]]--;
                    if (freq[fruits[low]] == 0) {
                        freq.erase(fruits[low]);
                        
                    }
                    low++;
                }
            }

            if (freq.size() == 2) {
                int len = high - low + 1;
                res = max(len, res);
            }
        }

        return res;
    }
};