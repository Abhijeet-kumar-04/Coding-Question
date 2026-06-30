class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int ans=0;
        int i =0;int j =0;
        int a =-1,b=-1,c=-1;
        while(j<n){
            auto ch = s[j];
            if(ch == 'a') a=j;
            if(ch == 'b') b=j;
            if(ch == 'c') c=j;
            if( a >=0 and b>=0 and c>=0) {
                ans+=(n-j);
                while(i<j and a >=0 and b>=0 and c>=0){
                    if(a==i) a=-1;
                    if(b==i) b=-1;
                    if(c==i) c=-1;
                    if( a >=0 and b>=0 and c>=0) ans+=(n-j);
                    i++;
                }
            }
            j++;
            
        }
        return ans ;
        
    }
};