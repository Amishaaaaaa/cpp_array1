//Q4 - Given two arrays a[] and b[] of same size.Your task is to find the minimum sum of two elements such
//that they belong to different arrays and are not at the same index. Here 1<size<101

#include<iostream>
using namespace std;

int main(){
    int n,min=10000;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cout<<"a: ";
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<"b: ";
        cin>>b[i];
    }

    for(int i=0;i<n;i++){
        if((a[i]+b[i])<min){
            min=a[i]+b[i];
        }
    }
    cout<<min;
    return 0;
}
