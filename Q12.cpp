#include<iostream>
using namespace std;

bool pallindrome(string s){
    if(s.length() %2 ==0)
        return false;
    else{
        int f=0;
        int i=0;
        int j=s.length() - 1;
        for( ; i<s.length()/2, j>s.length()/2; i++,j--){
            if(s[i] == s[j])
                f=0;
            else{
                f=1;
                return false;
            }
        }
    }
    return true;
}

int main(){
    string s;
    getline(cin,s);
    cout<<s<<endl;
    if(pallindrome(s))
        cout<<"Pallindrome";
    else
        cout<<"Not Pallindrome";
    return 0;
}
