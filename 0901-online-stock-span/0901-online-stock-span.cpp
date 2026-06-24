class StockSpanner {
public:
    vector<int> v;
    vector<int> index;
    int PrevGreaterIndex(int i ){
        if(v[i-1] > v[i]){
            return i-1;
        }
        int j = index[i-1] ;
        while(j>=0 and v[j] <=  v[i] ){
            j= index[j];
        }
        return j;
    }
    StockSpanner() {
        
    }
    
    int next(int price) {
        v.push_back(price);int newindex;
        if(v.size()==1) {
            index.push_back(-1);
            return 1 ;
        }
        else{
            newindex = PrevGreaterIndex(v.size()-1);
            index.push_back(newindex);
            
        }
        if(newindex == -1 ) return v.size();
        else return v.size() -1 - newindex ;
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */