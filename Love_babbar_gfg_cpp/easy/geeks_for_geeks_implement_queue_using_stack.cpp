/* The structure of the class is
*/
#include <stack>
using namespace std;
class StackQueue{
private:
    // These are STL stacks ( http://goo.gl/LxlRZQ )
    stack<int> s1;
    stack<int> s2;
public:
    void push(int);
    int pop();
}; 
int st1 = true;
int st2 = true;
void StackQueue::push(int B) {
    s1.push(B);
}

int StackQueue::pop() {
    if(s2.empty())
    {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
            
        }
    }
    if(s2.empty())
    {
        return -1;
    }
    int ans = s2.top();
    s2.pop();
    return ans;
}