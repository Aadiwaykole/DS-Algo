// class NumArray {
// public:

//     vector<int> arr; 
//     NumArray(vector<int>& nums) {

//         arr = nums; 
        
//     }
    
//     int sumRange(int left, int right) {

//         int sum =0; 

//         for(int i =left; i<= right ; i++){

//             sum += arr[i]; 
//         }

//         return sum ;

        
//     }
// };




//prefix sum 

class NumArray {
public:
    vector<int> prefix;

    
    NumArray(vector<int>& nums) {

        int n = nums.size();

        
        prefix.resize(n + 1, 0);

        // Calculate cumulative sum
        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + nums[i];
        }
    }

    // Step 2: Answer range sum query
    int sumRange(int left, int right) {

        return prefix[right + 1] - prefix[left];
    }
};



/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */