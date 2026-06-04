class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int low = 0;
    	int high = n-1;
    	int ans = -1;
    	int bns = -1;
    	while(low<=high){
    		int mid = low + (high-low)/2;
    		if(arr[mid]==x){
    			ans = arr[mid];
    			bns = arr[mid];
    			break;
    		}
    		else if(arr[mid]>=x){
    			bns = arr[mid];
    			high = mid-1;
    		}
    		else{
    		    ans = arr[mid];
    		    low = mid+1;
    		}
    	}
    	return {ans,bns};
    }
};