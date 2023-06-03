//Q1 - Given an integer array(arr) and its size(n), print the count of odd and even integers present in the array.
#include<iostream>
using namespace std;

int main(){
    int n,c_even=0,c_odd=0;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for(int i=0;i<n;i++){
        if(array[i]%2==0){
            c_even=c_even+1;
        }
        else{
            c_odd+=1;
        }
    }
    cout<<"even count: "<<c_even<<endl;
    cout<<"odd count: "<<c_odd;
    return 0;
}
