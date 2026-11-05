#include<iostream>
using namespace std;
int main(){
    int sum=0;
    for(int i=5;i<=100;i+=5){
        if(i%7==0) sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}