#include <queue>
using namespace std;

class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};


void QueueStack ::push(int x) {
    // code here
    q1.push(x);
}

int QueueStack ::pop() {

    while(q1.size()>1)
    {
        q2.push(q1.front());
        q1.pop();
    }
    if(q1.empty())
    {
        return -1;
    }
    int ans = q1.front();
    q1.pop();
    swap(q1,q2);
    return (ans);
    // code here
}