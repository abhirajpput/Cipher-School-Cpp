#include<iostream>
using namespace std;

void sum(int x, int y){
    cout<<"Enter the value of x and y : ";
    cin>>x>>y;
    cout<<"Sum of x and y : ";
    cout<<x+y<<endl;
}

int main(){
    int a;
    int b;

    sum(a,b);
}