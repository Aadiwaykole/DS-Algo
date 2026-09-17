class Solution {
public:
    int firstUniqChar(string s) {

        int n = s.size();

        unordered_map<char, int> mp;
        
        // for(int i = 0; i<n; i++){

        //     int count =0; 

        //     for(int j =0; j<n; j++){

        //         if(s[i]==s[j])
        //         count++; 
        //     }

        //     if(count ==1)

        //     return i;
        // }                                // this code is not optimized n2

        for(char ch : s){
            mp[ch]++; 
        }

        for(int i=0;i <n; i++){

            if(mp[s[i]]==1)
            return i ; 


        }
        return -1; 
    }
};