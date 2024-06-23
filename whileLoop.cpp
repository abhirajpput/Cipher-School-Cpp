#include<iostream>
using namespace std;

//print n numbers using while Loop
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    int i = 1;
    cout<<"n numbers are : ";
    while(i <= n){
        cout<<i<<" ";
        i++;
    }

    return 0;
}