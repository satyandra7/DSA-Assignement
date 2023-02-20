#include <bits/stdc++.h>
using namespace std;

bool pairWiseConsecutive(stack<int> s)
{
    if(s.size() % 2 != 0){
        s.pop();
    }
    int n1;
    while(!s.empty()){
        n1 = s.top();
        s.pop();
        if(abs(n1 - s.top()) == 1){
            s.pop();
        }
        else{
            return false;
        }
    }
    return true;
    
}

int main()
{
    int t;
    cout<<"Enter the Number of Test Cases = ";
    cin>>t;
    
    while(t--)
    {
        stack<int> s;
        int n, tmp;
        cout<<"Enter the size of Stack = ";
        cin>>n;
        cout<<"Enter Elements of Stack = ";
        while(n--){
            cin>>tmp;
          s.push(tmp);
      }
      if (pairWiseConsecutive(s))
            cout << "Yes" << endl;
      else 
            cout << "No" << endl;
    }
  return 0;
}
