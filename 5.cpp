//Q5 - Given an array containing n distinct integers in the range [0,n] (inclusive of both 0 and n) (inclusive of
//both 0 and n). Find and return the only number of the range that is not present in the array. Here 1<n<101.

#include<iostream>
using namespace std;

int main(){
    int n,flag=1;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=array[j]){
                flag=0;
            }
            else{
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<i;
        }
    }
    return 0;
}