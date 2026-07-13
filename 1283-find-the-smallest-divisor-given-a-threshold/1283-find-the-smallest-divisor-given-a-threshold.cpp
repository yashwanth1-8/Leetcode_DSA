class Solution {
public:
    bool check(int& middle, std::vector<int>& nums, int& threshold) {
        long long output = 0;
        for (int& num : nums) output += (1LL * num + middle - 1) / middle;
        return output <= threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int left = 1, right = 1e9;
        while (left <= right) {
            int middle = left + ((right - left) >> 1);
            if (check(middle, nums, threshold)) right = middle - 1;
            else left = middle + 1;
        }
        return left;
    }
};