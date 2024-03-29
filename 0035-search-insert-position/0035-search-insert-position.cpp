class Solution {
public:
    int searchInsert(vector<int>& a, int k) {
        int n=a.size();
        
        if(k>a[n-1]) return n;
        
        int l=0, r=n-1;
        
        while(l<r){
            int m=l+(r-l)/2;
            
            if(a[m]>=k){
                r=m;
            }else{
                l=m+1;
            }
        }
        return l; 
    }
};