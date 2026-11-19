class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size(); 

        // int j =-1; 

        // for(int i =0; i<n; i++){

        //     if(nums[i]== 0){
        //         j = i ; 
        //         break; 
        //     }

        // }
        // if(j == -1) return ; 

        // for(int i = j+1; i<n; i++){

        //     if(nums[i]!= 0){
        //         swap(nums[i], nums[j]); 
        //         j++; 

        //     }
        // }

        vector<int > temp ; 

        for(int i =0; i<n; i++){

            if(nums[i]!=0){
                temp.push_back(nums[i]);
            }
        }

        while(temp.size()<n){
            temp.push_back(0); 
        }

        for(int i =0; i<n; i++){

            nums[i]=temp[i]; 
        }

    }
};