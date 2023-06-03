//Q3 - Given an integer array and its size, reverse the array and print it . Here 1<size<101

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for(int i=n;i>=0;i--){
        cout<<array[i]<<endl;
    }
return 0;
}