#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(!(a+b>c||a+c>b||b+c>a)){
        cout<<"不是三角形"<<endl;
    }
    else if(a==b&&b==c){
        cout<<"等边三角形"<<endl;
    }
    else if(a==b||a==c||b==c){
        cout<<"等腰三角形"<<endl;
    }
    else{
        cout<<"普通三角形"<<endl;
    }
    return 0;
}