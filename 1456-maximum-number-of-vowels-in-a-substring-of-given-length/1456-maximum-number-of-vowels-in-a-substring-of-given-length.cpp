class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size();
        int ans = INT_MIN;
        int noOfVowel=0;
        for(int i =0 ;i<k;i++){
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u'){
                noOfVowel++;
            }
        }
        ans = max(noOfVowel,ans);
        for(int i =k;i<n;i++){

            if(s[i-k]=='a' or s[i-k]=='e' or s[i-k]=='i' or s[i-k]=='o' or s[i-k]=='u'){
                noOfVowel--;
            }
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u'){
                noOfVowel++;
            }
            ans = max(noOfVowel,ans);
        }
        return ans;
    }
};