class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        sort(nums.begin(),nums.end(),[&](int a,int b){
            if(m[a]==m[b])return a>b;
            return m[a]<m[b];
        });
        return nums;
    }
};