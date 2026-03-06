/*
Problem: Check if Binary String Has at Most One Segment of Ones
Platform: LeetCode
Approach 1: Count segments
Approach 2: Check if "01" exists
Time Complexity: O(n)
Space Complexity: O(1)
*/
#include<bits/stdc++.h>
using namespace std;
//APPROACH 1
class Solution {
public:
    bool checkOnesSegment(string str) {
        int n=str.size();
        int seg=0;
        int x=0;
        for(int i=0;i<n;i++){
            char ele=str[i];
            if(ele=='1'){
                x++;

            }
            else{
                if(x){
                    seg++;
                    x=0;
                    if(seg>1){
                        return false;
                    }
                }
                
                
            }


        }
        if(x){
            seg++;
        }
        if(seg==0||seg>1){
            return false;
        }
        return true;

       

    }
};
//APPROACH 2
class Solution2 {
public:
    bool checkOnesSegment(string str) {
        
        if(str.find("01")==string::npos){
            return true;
        }
        return false;

       

    }
};
int main(){
    return 0;
}

