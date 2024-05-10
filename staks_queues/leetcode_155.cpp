// 155. Min Stack

class MinStack {
public:
    stack<int> stk,min;
    MinStack() {
        
    }
    
    void push(int val) {
        if(min.empty() || val<=min.top())
        min.push(val);
        stk.push(val);
    }
    
    void pop() {
        if(stk.top()==min.top())
        min.pop();
        stk.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return min.top();
    }
};