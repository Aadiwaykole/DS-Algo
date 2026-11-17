class Solution {
public:
    void sortColors(vector<int>& nums) {
        //national flag algorithm 

        int n = nums.size();

        int low = 0, mid=0, high =n-1; 

        while(mid <=high){
            if(nums[mid]==0){

             swap(nums[low],nums[mid]);
            low++;
            mid++; 

            }
           
        
            else if(nums[mid]==1){
                mid++; 
            }
            else {
                swap (nums[mid], nums[high]);
                high--;
            }

        }
    }

    //first approach is sort (nlogn)
    //second approach is count 0 1 2 and put it inot them in the array
};