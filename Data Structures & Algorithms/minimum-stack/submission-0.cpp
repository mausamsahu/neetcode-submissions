class MinStack {
public:
stack<int>st;
stack<int>minStack;

    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);

        if(minStack.empty()){
            minStack.push(val);
        }
        else{
            minStack.push(min(val, minStack.top()));
            //to get the min value from the inerted val and from the stack existed val
        }
    }
    
    void pop() {
        st.pop();
        minStack.pop();
    }
    
    int top() {
       return st.top();
    }
    
    int getMin() {
       return minStack.top();
    }
};
