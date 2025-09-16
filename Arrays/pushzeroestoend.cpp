class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int i = 0;
        int pos = 0;
        int n = arr.size();
        for(int i=0; i<n; i++){
            if(arr[i]!=0){
                arr[pos] = arr[i];
                pos++;
            }
        }
        while(pos<n){
            arr[pos] = 0;
            pos++;
        }
    }
};