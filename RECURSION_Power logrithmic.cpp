#include<iostream>
using namespace std;
int power(int x,int m){
    if(m==0){
        return 1;
    }
    int xbn2=power(x,m/2);
    int xn=xbn2*xbn2;
    if(m%2==1){
        xn=xn*x;
    }
    return xn;
}

int main(){
    int x,m,ans;
    cin>>x>>m;
    ans=power(x,m);
    cout<<ans;
    return 0;
}
