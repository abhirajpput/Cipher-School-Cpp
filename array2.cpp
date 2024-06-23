#include<iostream>
using namespace std;

//array initialization
int main()
{
    int a[5];

    cout<<"Enter the array element : ";
    for(int i = 0; i < 5; i++){
        cin>>a[i];
    }

    cout<<"The array element : ";
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}