class Solution {
public:
    int findPermutationDifference(string s, string t) {
        
        map<char, int> mp; 

        for(int i =0; i<s.size(); i++){
            mp[s[i]]= i; 
        }

        int ans =0; 

        for(int i =0; i<t.size(); i++){

            int indexIns = mp[t[i]]; 

            int indexInt =i; 

            ans += abs(indexIns - indexInt);
        }

        return ans; 
    }
};