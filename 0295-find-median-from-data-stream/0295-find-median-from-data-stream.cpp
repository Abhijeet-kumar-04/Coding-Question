class MedianFinder {
public:
    vector<int>v;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        auto it = lower_bound(v.begin(), v.end(), num);
        v.insert(it, num);
    }
    
    double findMedian() {
        int n = v.size();
        if(n%2 == 0){
            return (v[(n-1)/2] + v[n/2])/2.0;
        }
        else{
            return v[n/2];
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */