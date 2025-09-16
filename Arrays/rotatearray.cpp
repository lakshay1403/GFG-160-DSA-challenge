class Solution {
  public:
    void reverse(vector<int>& arr,int s,int e){
        for(int i=s,j=e; i<=j; i++,j--){
            swap(arr[i],arr[j]);
        }
    }
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        d = d % n;
        reverse(arr,0,d-1);
        reverse(arr,d,n-1);
        reverse(arr,0,n-1);
    }
};