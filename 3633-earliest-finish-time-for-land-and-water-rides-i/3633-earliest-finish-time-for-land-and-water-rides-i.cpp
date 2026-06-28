class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int n= landStartTime.size();
        int m= waterStartTime.size();
        
        vector<int> sumv1;
        for(int i=0;i<n;i++){
            sumv1.push_back(landStartTime[i]+landDuration[i]);
        }
        vector<int> sumv2;
        for(int i=0;i<m;i++){
            sumv2.push_back(waterStartTime[i]+waterDuration[i]);
        }
        // going from land to water 
        int maxval =INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(sumv1[i]>=waterStartTime [j]){
                    maxval=min(maxval,sumv1[i]+waterDuration [j]);
                }
                else{
                    maxval=min(maxval,(waterStartTime[j] - sumv1[i])+waterDuration [j]+sumv1[i]);
                }
            }
        }

        // water to land 
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(sumv2[i]>=landStartTime[j]){
                    maxval=min(maxval,sumv2[i]+landDuration  [j]);
                }
                else{
                    maxval=min(maxval,(landStartTime[j]-sumv2[i])+landDuration [j]+sumv2[i]);
                }
            }
        }
        return maxval;
        
    }
};