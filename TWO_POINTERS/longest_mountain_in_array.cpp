class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n=arr.size();
        int ans=0;
        for(int i=1;i<n-1;i++){
            int ele=arr[i];
            int prev=arr[i-1];
            int next=arr[i+1];
            if(ele>prev&&ele>next){
                int l=i;
                int r=i;
                while(l-1>=0&&arr[l]>arr[l-1]){
                    l--;
                }
                while(r+1<n&&arr[r]>arr[r+1]){
                    r++;

                }
                ans=max(r-l+1,ans);

            }

        }
        return ans;

        
    }
};
