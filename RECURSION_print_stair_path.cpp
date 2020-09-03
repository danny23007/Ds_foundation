#include<iostream>
using namespace std;
void path(int n,string output ){
    if(n<0){
        return;
    }
    if(n==0){
     cout<<output;   
    }
    path(n-1,output+"1");
    path(n-2,output+"2");
    path(n-3,output+"3");
    
}

int main()
{
    int n;
    cin>>n;
    string output=" ";
    path(n,output);

    return 0;
}
