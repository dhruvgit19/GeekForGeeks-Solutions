

class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        int n=arr.size();
        int maxi=arr[n-1];
        vector<int> temp;
        temp.push_back(arr[n-1]);
        for(int i=n-2;i>=0;i--){
            if(arr[i]>=arr[i+1]){
                maxi=max(maxi,arr[i]);
                if(arr[i]>=maxi){
                    temp.push_back(arr[i]);
                }
            }
        }
        reverse(temp.begin(),temp.end());
        return temp;
    }
};