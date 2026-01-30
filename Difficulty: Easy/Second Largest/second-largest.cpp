class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        int largest = 0;
        for(int i=0; i<n; i++){
            if(arr[i] > largest){
                largest = arr[i];
            }
        }
        
        int seclargest = -1;
        for(int i=0;i<n; i++){
            if(arr[i]>seclargest && arr[i]<largest){
                seclargest = arr[i];
            }
        }
        return seclargest;
    }
};