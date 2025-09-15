class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int max = INT_MIN;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]>max){
                max = arr[i];
            }
        }
        int smax = -1;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]>smax && arr[i]!=max){
                smax = arr[i];
            }
        }
        return smax;
    }
};