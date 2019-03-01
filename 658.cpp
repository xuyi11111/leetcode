class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int len=arr.size();
        for(int i=0;i<len;i++){
            arr[i]-=x;
        }
        int min=0,max=len-1;
        int mid=(min+max)/2;
        while(min<max){
            if(arr[mid]<0){
                min=mid++;
            }
            else{
                max=mid--;
            }
            mid=(min+max)/2;
        }
        int count=0;
        int left=min;
        int right=min;
        while(count<k){
            if(abs(arr[left])<abs(arr[right])){
                left--;
            }
            else if(abs(arr[left])>abs(arr[right])){
                right++;
            }
            else if(abs(arr[left-1])>abs(arr[right+1])){
                right++;
            }
            else if(abs(arr[left-1])<abs(arr[right+1])){
                left--;
            }
            count++;
        }
        vector<int> ans;
        for(int i=left;i<left+k;i++){
            ans.push_back(arr[i]+x);
        }
        return ans;
    }
};