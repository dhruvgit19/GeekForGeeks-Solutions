class Solution {
  public:
  
    int lowerbound(vector<int> &arr, int n, int a){
        int low=0;
        int high = n-1;
        int ans = n;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(arr[mid]>=a){
                ans=mid;
                high=mid-1;
            }
            else low = mid+1;
        }
        return ans;
    } 
  
    int rowWithMax1s(vector<vector<int>> &arr) {
        int n = arr.size();
        int m = arr[0].size();
        int cntmax = 0;
        int index = -1;
        for(int i=0;i<n;i++){
            int ones = m - lowerbound(arr[i], m, 1);
            if(ones>cntmax){
                cntmax = ones;
                index = i;
            }
        }
        return index;
    }
};