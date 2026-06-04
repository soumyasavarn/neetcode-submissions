class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.length()==0) return 0;
        unordered_set <char> seen;
        seen.insert(s[0]);
        int ans  = 1;
        int l=0;

        for (int i=1;i<s.length();i++){
            int prev_size = seen.size();
            seen.insert(s[i]);
        if (prev_size==seen.size()){
            while (s[l]!=s[i]) 
            {
                seen.erase(s[l]);l++;
            }
            seen.erase(s[l]);l++;

            seen.insert(s[i]);
        }
            ans = std::max(ans,static_cast<int> (seen.size()));
        }
        return ans;
    }
};
