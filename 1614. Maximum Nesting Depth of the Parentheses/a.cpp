class Solution {
public:
    int maxDepth(string s) {
        int maxi = 0;int n = s.size();
        int curr =0;
        for(int i =0;i<n;i++){
            
            if(s[i]=='(') {curr++;maxi = max(maxi,curr);}
            else if(s[i]==')') {curr--;}

        }
        return maxi;
    }
};