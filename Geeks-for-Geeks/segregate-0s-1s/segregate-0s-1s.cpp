class Solution{   
public:
    void segregate0and1(int arr[], int n) {
        // code here
        int zeroCount = 0;
        int oneCount = 0;
        for(int i=0;i<n;i++) {
            if(arr[i]==0) {
                zeroCount++;
            }
            else if(arr[i]==1){
                oneCount++;
            }
        }
        for(int i=0;i<zeroCount;i++) {
            arr[i] = 0;
        }
        for(int i=zeroCount;i<n;i++) {
            arr[i] = 1;
        }
    }
};
