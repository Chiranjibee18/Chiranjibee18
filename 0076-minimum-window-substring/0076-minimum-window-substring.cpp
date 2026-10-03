class Solution {
public:
bool func(vector<int>&have,vector<int>&need){

    for(int i = 0 ;i<256;i++){
        if(have[i]<need[i]){
            return false;
        }
       
    }
     return true;
}
    string minWindow(string s, string t) {
        int low = 0;
        int high=0;
        int ans=INT_MAX;
        int start =-1 ;
        vector<int>need(256,0);
        vector<int>have(256,0);

        for(char c:t){
            need[c]++ ;
        }

        for(int high = 0 ;high<s.size();high++){
            have[s[high]]++;
            while(func(have,need)){
                int len = high-low+1 ;
                if(len<ans){
                    ans = len ;
                    start=low ;
                }
                have[s[low]]--;
                low++;
            }
        }

        if(start==-1){
            return "";
        }

        return s.substr(start,ans);
    }

};