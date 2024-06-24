#include<iostream>
using namespace std;

void swap(int a, int b){
    int c = a;
    a = b;
    b = c;

    cout<<"value after swap: "<<a<<" "<<b<<endl;
}
int main(){
    int a = 5;
    int b = 10;

    swap(a,b);
}