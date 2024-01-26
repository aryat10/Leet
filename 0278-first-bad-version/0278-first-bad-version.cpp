// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    //This question is same as finding lower bound of a duplicate number
    int firstBadVersion(int n) {
        int s=1, e = n, mid;
        while(s<e){
            mid = s +(e-s)/2;
            if(isBadVersion(mid)) e = mid;// If true then move to Left
            else s = mid+1; // else move to Right
        }
        return e;
    }
};