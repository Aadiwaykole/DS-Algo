// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
        
        // int n = nums.size(); 

        // vector<int > number (n, 1); 


        // for(int i=0; i<n; i++){

        //     int product = 1; 

        //     for(int j=0; j<n;j++){

        //         if(i!=j){
        //             product *= nums[j]; 
        //         }
        //     }

        //     number[i] = product ; 
        // }

        // return  number ; 





        
// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {

//         int n = nums.size();

//         int product = 1;

//         // Calculate total product
//         for (int i = 0; i < n; i++) {
//             product *= nums[i];
//         }

//         vector<int> answer(n);

//         // Divide total product by each element
//         for (int i = 0; i < n; i++) {
//             answer[i] = product / nums[i];
//         }

//         return answer;
//     }
// };




//     }
// };




class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();

        vector<int> answer(n, 1);

        // Step 1: Calculate prefix products
        int prefix = 1;

        for (int i = 0; i < n; i++) {

            answer[i] = prefix;

            prefix *= nums[i];
        }

        // Step 2: Calculate suffix products
        int suffix = 1;

        for (int i = n - 1; i >= 0; i--) {

            answer[i] *= suffix;

            suffix *= nums[i];
        }

        return answer;
    }
};
