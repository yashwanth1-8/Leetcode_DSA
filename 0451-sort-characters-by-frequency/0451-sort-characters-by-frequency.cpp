class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mpp;

        for(char c:s){
          mpp[c]++;
        }
        
        vector<pair<char, int>> freqVec(mpp.begin(), mpp.end());

        sort(freqVec.begin(), freqVec.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
            return a.second > b.second;
        });

        s="";

        for(auto& p : freqVec){
            s.append(p.second,p.first);
        }

        return s;
  
    }
};