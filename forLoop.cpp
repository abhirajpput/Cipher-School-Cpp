#include<iostream>
using namespace std;

//print n numbers using for Loop
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    cout<<"n numbers are : ";
    for(int i = 1; i <= n; i++){
        cout<<i<<" ";
    }

    return 0;
}