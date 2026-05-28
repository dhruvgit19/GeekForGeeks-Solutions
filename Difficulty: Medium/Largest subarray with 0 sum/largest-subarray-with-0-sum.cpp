class Solution {
  public:
    int maxLength(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int> mpp;
        int sum=0;
        int maxcount=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            
            if(sum==0){
                maxcount=i+1;
            }
            
            else{
                if(mpp.find(sum)!=mpp.end()){
                    maxcount = max(maxcount,i-mpp[sum]);
                }
                else{
                    mpp[sum]=i;
                }
            }
        }
        return maxcount;
    }
};