class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n=arr.size();
        vector<int>prefix(n,1);
        vector<int>suffix(n,1);
        
        for(int i=1;i<n;i++){
            int ele=arr[i];
            int prev=arr[i-1];
            if(ele>prev){
                prefix[i]=prefix[i]+prefix[i-1];



            }
            

            


        }
        for(int i=n-1;i>=1;i--){
            int ele=arr[i];
            int pre=arr[i-1];
            if(pre>ele){
                suffix[i-1]=suffix[i-1]+suffix[i];

            }

        }
        int ans=0;

        for(int i=0;i<n;i++){
            int x=prefix[i]+suffix[i]-1;
            if(prefix[i]>1&&suffix[i]>1){

                ans=max(ans,x);

            }
            


        }
        return ans;

        
    }
};
