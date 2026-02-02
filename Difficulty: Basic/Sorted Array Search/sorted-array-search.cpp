class Solution {
  public:
    bool searchInSorted(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        bool result;
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==k){
                count++;
            }
        }
        if(count>=1){
            result=true;
        }
        else result=false;
        return result;
    }
};