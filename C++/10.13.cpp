#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x,sum=0;
    double sig=1;   
    int n=1;
    cin>>x;
    double tem = x;  
    while(fabs(tem)>1e-5){
        sum += tem;
        sig = -sig;
        tem = sig * tem * x*x / ((2*n)*(2*n+1));
        n++;
    }
    cout<<sum<<endl;
    return 0;
}