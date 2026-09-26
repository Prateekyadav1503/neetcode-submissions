class Solution {
public:
    int maxProfit(vector<int>& a) {
        int n=a.size();
        int maxp=0;
        int bestb=a[0];

        for ( int i=0;i<n;i++){
            if(a[i]>bestb){
                maxp=max(maxp,a[i]-bestb);
            }
            bestb=min(bestb,a[i]);
        }
        return maxp;
    }
};
