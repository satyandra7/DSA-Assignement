//1. Given an array of elements, replace every element with nearest greater element on the 
//right of that element.

#include<iostream>
#include<limits.h>
using namespace std;

void change(int a[], int n){
    int d,x,y;
    for(x=0;x<n-1;x++){
        d=INT_MAX;
        for(y=x+1;y<n;y++){
            if((d > (a[y] - a[x])) && ((a[y] - a[x]) > 0)){
                d=a[y] - a[x];
            }
        }
        if(d!=INT_MAX){
        a[x]=a[x]+d;
        }
    }
}

int main(){
    int n;
    cout<<"Size of array = ";
    cin>>n;
    int *a=new int[n];
    cout<<"Enter array = ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    change(a,n);
    cout<<"\n";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}
