class RandomizedSet {
public:
    unordered_map<int,int>mp;
    vector<int>v;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp.count(val)==0){
            v.push_back(val);
            mp[val]=v.size()-1;
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
       if(mp.count(val)!=0){
            int idx = mp[val];
            int last = v.back();
            v[idx] = last;
            mp[last] = idx;
            v.pop_back();
            mp.erase(val);
            return true;
       }
       return false;
    }
    
    int getRandom() {
        int x = random() % v.size();
        return v[x];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */