#include<iostream>
using namespace std;

void printHI(){
    cout<<"HI"<<endl;
}
void sum(int x, int y){
   int c = x + y;
   cout<<c;
}

int main(){
    int a = 3;
    int b = 4;
    printHI();
    sum(a,b);

    return 0;
}