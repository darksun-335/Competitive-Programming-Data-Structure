class MedianFinder {
    vector<int>v; 
public:
    /** initialize your data structure here. */
    void addNum(int num) {
        if(v.empty())
        {
      v.push_back(num);
        }
        else
        {
            v.insert(lower_bound(v.begin(),v.end(),num),num);
        }
    }
    
    double findMedian() {
        int n=v.size();
        return (n&1?v[n/2]:((double)v[(n/2)-1]+v[n/2])*0.5);
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
