#include <bits/stdc++.h>
using namespace std;

// Function to reverse first k elements of a queue.
void modifyQueue(queue<int> &q, int k) {
    stack<int> s;
    int i = k;
    while(i--){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    i = q.size() - k;
    int n;
    while(i--){
        n = q.front();
        q.pop();
        q.push(n);
    }
}

void Print(queue<int> Queue)
{
    while (!Queue.empty()) {
        cout << Queue.front() << " ";
        Queue.pop();
    }
    cout<<endl;
}

int main() {
    int t;
    cout<<"Enter the Number of Testcases = ";
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cout<<"Enter the size of Queue = ";
        cin >> n;
        cout<<"Enter the Value of K = ";
        cin>>k;
        queue<int> q;
        cout<<"Enter the Queue Elements = ";
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        cout<<"Original Queue = ";
        Print(q);
        modifyQueue(q, k);
        cout<<"Reversed Queue = ";
        Print(q);
        cout << endl;
    }
}
