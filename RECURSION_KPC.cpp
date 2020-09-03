#include<iostream>
using namespace std;
string codes[]={".;", "abc","def","ghi","jkl","mno","pqrs","tu","vwx" ,"yz"};
void kpc( string ques,string ans){
    if(ques.length()==0){
        cout<<ans<<endl;
        return ;
    }
    char ch=ques[0];
    string ros=ques.substr(1);
    string codeforch= codes[ch-'0'];
    
    for(int i=0;i<codeforch.length();i++){
        char cho=codeforch[i];
        kpc(ros,ans+cho);
    }
}

int main()
{
    string input;
    cin>>input;
    string output=" ";
    kpc(input,output);

    return 0;
}
