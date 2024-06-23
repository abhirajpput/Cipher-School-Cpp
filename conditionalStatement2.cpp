#include<iostream>
using namespace std;

//if-else statements 
int main(){
    int marks;

    cout<<"Enter the value of marks : ";
    cin>>marks;

    if(marks >= 90 && marks <= 100){
        cout<<"Grade O";
    }else if(marks >= 80 && marks <= 90){
        cout<<"Grade A";
    }else if(marks >= 60 && marks < 80){
        cout<<"Grade B";
    }else if(marks >= 40 && marks < 60){
        cout<<"Grade C";
    }else if(marks < 40 && marks >= 0){
        cout<<"Fail";
    }else{
        cout<<"Invalid Marks";
    }
    
    return 0;
}
