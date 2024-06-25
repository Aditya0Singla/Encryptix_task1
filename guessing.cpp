#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void HowClose(int a,int b){
    if(b>=a-2 && b<=a+2 && b!=a){
        cout<<"Too Close"<<endl;
    }
    else if(b<a-2 && b>=a-5){
        cout<<"Close(Increment Required)"<<endl;
    }
    else if(b>a+2 && b<=a+5){
        cout<<"Close(Decrement Required)"<<endl;
    }
    else if(b<a-5 && b>=a-10){
        cout<<"Far(Increment Required)"<<endl;
    }
    else if(b>a+5 && b<=a+10){
        cout<<"Far(Decrement Required)"<<endl;
    }
    else if(b<a-10){
        cout<<"Too Low"<<endl;
    }
    else if(b>a+10){
        cout<<"Too High"<<endl;
    }
}
int main(){
    srand((unsigned int)time(NULL));
    int a=(rand()%100)+1;
    int n=-1;
    cout<<"Enter a number 1-100"<<endl;
    while(n!=a){
        int b;
        cin>>b;
        n=b;
        if(n>0 && n<=100){
            HowClose(a,n);
        }
        else{
            cout<<"Invalid Input"<<endl;
        }
    }
    if(n==a){
        cout<<"Correct"<<endl;
    }
}