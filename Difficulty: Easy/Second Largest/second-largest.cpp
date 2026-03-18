class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n=arr.size();
        int max=INT_MIN;
        int secmax=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                secmax=max;
                max=arr[i];
            }
            else if(arr[i]<max && arr[i]>secmax){
                secmax=arr[i];
            }
            if(secmax==INT_MIN){
                secmax=-1;
            }
        }
        return secmax;
    }
};