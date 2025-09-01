// stack<int> s;
#include <stack>
#include <iostream>
using namespace std;
stack<int> minst;
void push(stack<int>& s, int a) {
    // Your code goes here
    if(minst.empty() || a<minst.top())
    {
        s.push(a);
        minst.push(a);
    }
    else
    {
        s.push(a);
        minst.push(minst.top());
    }
}

bool isFull(stack<int>& s, int n) {
    // Your code goes here
    if(s.size()<n)
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool isEmpty(stack<int>& s) {
    // Your code goes here
    return s.empty();
}

int pop(stack<int>& s) {
    // Your code goes here
    if(s.empty())
    {
        return -1;
    }
    int tp = s.top();
    minst.pop();
    s.pop();
    return tp;
}

int getMin(stack<int>& s) {
    // Your code goes here
    // stack<int> si = s;
    if(minst.empty())
    {
        return -1;
    }
    return minst.top();
    
}