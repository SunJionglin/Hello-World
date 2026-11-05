#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==0){
        cout<<0<<endl;
        cout<<0<<endl;
        return 0;
    };
    int temp=n;
    vector<int> Q;
        while(true){
            Q.push_back(temp%8);
            temp/=8;
            if(temp==0) break;
        }
    for(int i=Q.size()-1;i>=0;i--){
        cout<<Q[i];
        
    }
    cout<<endl;
    vector<char> H;
        while(true){
            char c=(n%16);
            if(c>=10) c=c-10+'A';
            H.push_back(c);
            n/=16;
            if(n==0) break;
        }
    for(int i=H.size()-1;i>=0;i--){
        cout<<H[i];
    }

    return 0;
}