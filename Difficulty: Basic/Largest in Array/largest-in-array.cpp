class Solution {
  public:
    int largest(vector<int> &arr) {
        int n=arr.size();
        int maxelement = arr[0];
        for(int i=0;i<n;i++){
            maxelement=max(maxelement,arr[i]);
        }
        return maxelement;
    }
};
