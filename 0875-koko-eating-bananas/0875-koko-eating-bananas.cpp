class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int high=INT_MIN, mid;
        int low=1;
        for(int i=0;i<piles.size();i++){
            high=max(high,piles[i]);
        }
        int ans=0;
        while(low<=high){
            mid= low+ (high-low)/2;
            long long hr=0;

            for(int i=0;i<piles.size();i++){
                int x= piles[i]/mid;
                int r= piles[i]%mid;
                if(r==0){
                    hr=hr+x;
                }
                else{
                hr= hr+x+1;
                }
            }
            if(hr<=h){
                ans=mid;
                high=mid-1;
            }
            else if(hr>h){
                low=mid+1;
            }
        }

        return ans;
    }
};