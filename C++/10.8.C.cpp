#include<iostream>
#include<vector>
using namespace std;
int qusu(int  i){
    int sum=0;
    sum=i%10+i%100/10+i/100;
    return sum;
}
int main(){
    int x;
    cin>>x;
    if(x<=0||x>27){
        cout<<"错误"<<endl;
        return 0;
    }
    vector<int> v;
    int count=0;
    for(int i=100;i<=999;i++){
        if(qusu(i)==x) {
            count++;
            v.push_back(i);
        }
    }
    cout<<count<<endl;
    for(int & i:v){
        cout<<i<<" ";
    }
    return 0;
}