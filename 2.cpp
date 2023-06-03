//Q2 - Given an integer array and its size, find the sum of the greatest and the smallest integer present
//in the array. Here 1< size <101
#include<iostream>
using namespace std;

int main(){
    int n,max=0,min=100000;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    for(int i=0;i<n;i++){
        if(array[i]<min){
            min=array[i];
        }
    }
    for(int i=0;i<n;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    cout<<"sum of max and min element is: "<<(max+min)<<endl;
    return 0;
}