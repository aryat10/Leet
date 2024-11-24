class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        long long lsum = 0, rsum = 0, mSum = 0;

        // Calculate the sum of the first k cards
        for (int i = 0; i < k; i++) {
            lsum += cardPoints[i];
        }
        mSum = lsum;

        // Shift the window to include cards from the right
        int rInd = cardPoints.size() - 1;
        for (int i = k - 1; i >= 0; i--) {
            lsum -= cardPoints[i];
            rsum += cardPoints[rInd];
            rInd--;
            mSum = max(mSum, lsum + rsum);
        }

        return static_cast<int>(mSum);
    }
};
