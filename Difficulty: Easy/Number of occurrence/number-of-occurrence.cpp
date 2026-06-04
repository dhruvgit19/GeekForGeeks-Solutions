class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        int first = 0;
        int count = 0;
        int n = arr.size();
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(arr[mid]==target){
                first = mid;
                high = mid-1;
            }
            else if(arr[mid] < target){
                low = mid+1;
            }
            else high = mid-1;
        }
        
        for(int i=first;i<n;i++){
            if(arr[i]==target) count++;
        }
        
        return count;
    }
};
