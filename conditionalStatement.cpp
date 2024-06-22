#include<iostream>
using namespace std;

//and ,or oprator
int main(){
    int a,b,c,d;

    cout<<"Enter the value of a,b,c or d : ";
    cin>>a>>b>>c>>d;

    cout<< (a>b && b>d)<<endl;
    cout<< (a>b || b>d)<<endl;
    
    return 0;
}