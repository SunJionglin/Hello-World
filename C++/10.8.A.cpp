#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    if(x>0){
        if(y>0){
            cout<<"第一象限"<<endl;
        }
        else if(y<0){
            cout<<"第四象限"<<endl;
        }
        else{
            cout<<"x轴上"<<endl;
        }
    }
    else if(x<0){
        if(y>0){
            cout<<"第二象限"<<endl;
        }
        else if(y<0){
            cout<<"第三象限"<<endl;
        }
        else{
            cout<<"x轴上"<<endl;
        }
    }
    else{
        if(y!=0){
            cout<<"y轴上"<<endl;
        }
        else{
            cout<<"原点"<<endl;
        }
    }
    return 0;
}
