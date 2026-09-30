class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26,0) ;
        int low = 0 ;
        int high = 0 ;
        int ans =0;
        int maxi = 0;
    int n  = s.size() ;
    for(int high = 0 ;high<n;high++){
        freq[s[high]-'A']++ ;
         maxi = max(maxi,freq[s[high]-'A']);
        while(high-low+1-(maxi) > k){
            freq[s[low]-'A']--;
            low++ ;
        }
    ans =max(ans,high-low+1);
    }

    return ans;
    }
};