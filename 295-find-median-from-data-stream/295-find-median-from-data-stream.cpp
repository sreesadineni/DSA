class MedianFinder {
public:
    priority_queue<int>pmax; //max queue
	priority_queue<int,vector<int>,std :: greater<int>>pmin; //min queue

    void addNum(int num) {
           if(pmax.empty() || (pmax.top()>num)) {
               pmax.push(num);
           }
        else{
            pmin.push(num); 
        } 
        if(pmax.size() > (pmin.size()+1))
        {
            pmin.push(pmax.top());
            pmax.pop();
        }
        else if(pmax.size()+1<pmin.size())
        {
            pmax.push(pmin.top());
            pmin.pop();
        }
    }
    double findMedian() {
        double ans=0.0;
		if(pmax.size() == pmin.size()){
			 ans=(pmax.top()+pmin.top())/2.0;
		}
		else if(pmax.size() > pmin.size()){
			return pmax.top();
		}
		else{
			return pmin.top();
		}
		 return ans;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */