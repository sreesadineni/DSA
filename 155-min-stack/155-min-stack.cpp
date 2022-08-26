class MinStack {
public:
     stack<int> st,temp;
    void push(int val) {
    st.push(val);    
        if(temp.empty()){
           temp.push(val);
        } 
        else if(val<temp.top()){
            temp.push(val);
        }
        else{
            temp.push(temp.top());
        }
    }
    
    void pop() {
        st.pop();temp.pop();
    }
    
    int top() {
       return  st.top();
    }
    
    int getMin() {
        return temp.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */