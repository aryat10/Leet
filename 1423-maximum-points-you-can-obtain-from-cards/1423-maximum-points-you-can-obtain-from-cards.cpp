class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int lsum = 0, rsum = 0, mSum = 0; // Initialize variables
        
        // Calculate the left sum and initial max sum
        for (int i = 0; i < k; i++) {
            lsum += cardPoints[i];
        }
        mSum = lsum;

        int rInd = cardPoints.size() - 1;

        // Adjust left sum and calculate right sum
        for (int i = k - 1; i >= 0; i--) {
            lsum -= cardPoints[i];
            rsum += cardPoints[rInd];
            rInd--;
            mSum = max(mSum, lsum + rsum); // Update max sum
        }

        return mSum;
    }
};
