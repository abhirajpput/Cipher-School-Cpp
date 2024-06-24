#include <iostream>
using namespace std;

void compare(int a, int b){
    if(a > b){
        cout << "a is greater than b" << endl;
    }
    else if(a < b){
        cout << "a is less than b" << endl;
    }
    else{
        cout << "a is equal to b" << endl;
    }
}
int main(){
    int a,b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;

    compare(a,b);

    return 0;
}