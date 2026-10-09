class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int n = cardPoints.size(); 

        int Rsum = 0, Lsum = 0 , maxsum = 0; 

        for(int i =0; i <= k-1; i++){

            Lsum = Lsum + cardPoints[i]; 
            maxsum = Lsum ; 

        }

        int random = n-1; 

        for(int i=k-1; i>=0; i--){

            Lsum = Lsum - cardPoints[i]; 
            Rsum = Rsum + cardPoints[random]; 
            random--;

            maxsum = max(maxsum , Lsum+Rsum);
        }


        return maxsum; 


    }
};