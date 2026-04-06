class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        
        if(arr.size() == 0){
            return 0;
        }
        sort(arr.begin(), arr.end());
        int max_count = 1;
        int count = 1;
        int n = arr.size();

        int i = 1;
        while(i<n){
        if(arr[i] == arr[i-1]+1) {
            count++;
        }
        else if( arr[i] == arr[i-1]){
            
        }
        else{
            max_count = max(count, max_count);
            count = 1;
        }
        i++;
       }
        return max(count, max_count);
    }
};
