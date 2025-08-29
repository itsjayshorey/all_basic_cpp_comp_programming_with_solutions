#include <vector>
using namespace std;

class MyStack {
  private:
  vector<int> ans;
  public:
    void push(int x) {
        // code here
        ans.push_back(x);
    }

    int pop() {
        int n = -1;
        if(!ans.empty())
            n = ans.back();
            ans.erase(ans.end()-1);
        // code here
        return n;
    }
};