class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        int A=a;
        int B=b;
        int gcd = 0;
        while(a>0 && b>0){
            if(a>b) a=a%b;
            else b=b%a;
        }
        if(a==0) gcd = b;
        else gcd = a;
        
        int lcm = 0;
        lcm = (A*B)/gcd;
        
        return {lcm,gcd};
    }
    
};