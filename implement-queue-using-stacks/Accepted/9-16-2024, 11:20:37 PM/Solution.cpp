// https://leetcode.com/problems/implement-queue-using-stacks

class MyQueue {
public:
    stack<int> stack1;
    stack<int> stack2;

    MyQueue() {

    }

    void push(int x) {
        while(!stack1.empty()) {
            int temp = stack1.top();
            stack2.push(temp);
            stack1.pop();
        }

        stack1.push(x);

        while(!stack2.empty()) {
            int temp = stack2.top();
            stack1.push(temp);
            stack2.pop();
        }
    }

    int pop() {
        int temp = stack1.top();
        stack1.pop();
        return temp;
    }

    int peek() {
        return stack1.top();
    }

    bool empty() {
        return stack1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */