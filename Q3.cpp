//1={A1,A2,A3,……..An-1, An} with data, reorder it to {A1, An, A2, An1, …..} without using any extra space. 
#include<iostream>
using namespace std;

void change_order(int a[],int n){
    int f=0;
    for(int i=0;i<n;i+=2){
        f=a[n-1];
        for(int j=n-2;j>i;j--)
            a[j+1]=a[j];
        a[i+1]=f;
    }
}

int main(){
    int n;
    cout<<"size of array = ";
    cin>>n;
    int *a=new int[n];
    cout<<"Enter the array = ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    change_order(a,n);
    cout<<"\n change_ordered Array = ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
