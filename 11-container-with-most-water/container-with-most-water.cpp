// class Solution {
// public:
//     int maxArea(vector<int>& height) {

//         int n = height.size();
//         int maxArea = 0;

//         for (int i = 0; i < n; i++) {

//             for (int j = i + 1; j < n; j++) {

//                 int width = j - i;

//                 int h = min(height[i], height[j]);

//                 int area = width * h;

//                 maxArea = max(maxArea, area);
//             }
//         }

//         return maxArea;
//     }
// }; 

class Solution {
public:
    int maxArea(vector<int>& height) {

        int left = 0;
        int right = height.size() - 1;

        int maxWater = 0;

        while (left < right) {

           int width = right -left; 

            
            int waterHeight = min(height[left], height[right]);

           
            int area = width * waterHeight;

          
            maxWater = max(maxWater, area);

            if (height[left] < height[right]) {
                left++;
            }
            else {
                right--;
            }
        }

        return maxWater;
    }
};