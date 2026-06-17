class Solution {
  public:
    char getMaxOccuringChar(string& s) {
    int n = s.size();
    int arr[26] = {0};
    for(int i=0;i<n;i++){
        if(s[i]>='a' && s[i]<='z'){
            int temp = s[i] - 'a';
            arr[temp]++;
        }
        else{
            int temp = s[i] - 'A';   
            arr[temp]++;
        }
    }
    int maxi=-1;
    int index=-1;
    for(int i=0;i<26;i++){
        if(arr[i]>maxi){
            maxi = arr[i];
            index = i;
        }
    }
    return 'a'+index;
    }
};