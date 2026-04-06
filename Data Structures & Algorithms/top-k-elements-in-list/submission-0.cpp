class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        for(int n : nums){
            map[n]++;
        }

        int size = nums.size();
        vector<vector<int>> bucket(size+1);
            for(auto& [val,freq] : map){
                bucket[freq].push_back(val);
            }   

        vector<int> res;
        for(int i = size; i>=0 && res.size()<k; i--){
            for(int j: bucket[i]){
                res.push_back(j);

                if(res.size() == k ){
                    return res;
                }
            }      
        }
        return res;
    }
};
