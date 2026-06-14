class Solution {
  public:
  
    int result(int a, int b){
        int num = 1;
        for(int i=1;i<=b;i++){
            num = a*num;
        }
        return num;
    }
    
    int nthRoot(int n, int m) {
        int low = 0;
        int high = m;
        int ans=-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(result(mid,n) == m) return mid;
            if(result(mid,n) > m) high=mid-1;
            else low=mid+1;
        }
        return -1;
    }
};