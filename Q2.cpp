//Q2.Recursively remove all adjacent duplicates: Given a string of characters, recursively
//remove adjacent duplicate characters from the string. The output string should not 
//have any adjacent duplicates.

#include <bits/stdc++.h>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> v;
        int max_value=0;
        vector<int> sub_v(nums.begin() , nums.begin() + (k));
        for(int i=k ; i<nums.size() ; i++){
            v.push_back(*max_element(sub_v.begin(),sub_v.end()));
            sub_v.erase(sub_v.begin());
            sub_v.push_back(nums[i]);
        }
        v.push_back(*max_element(sub_v.begin(),sub_v.end()));
        return v;
    }

int main(){
    int n;
    cout<<"Enter the size of array = ";
    cin>>n;
    cout<<"Enter the Array = ";
    vector<int> a;
    int data;
    for(int i=0 ; i<n; i++){
        cin>>data;
        a.push_back(data);
    }
    int w;
    cout<<"Enter the size of Window = ";
    cin>>w;
    vector<int> max;
    max = maxSlidingWindow(a,w);
    for(int i=0;i<max.size();i++)
        cout<<max[i]<<" ";
    return 0;
}
