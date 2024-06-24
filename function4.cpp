#include<iostream>
using namespace std;

void sum(int x, int y){
   int c = x + y;

   x = 10;
   y = 20;

   cout<<c;
}

int main(){
    int a = 3;
    int b = 4;

    sum(a,b);
}