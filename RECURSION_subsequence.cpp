#include<iostream>
using namespace std;
void perm(string input,string output){
	if(input.length()==0){
		cout<<output<<endl;
		return ;
	}
	for(int i=0;i<input.length();i++){
		char ch=input[i];
	    string	lpart=input.substr(0,i);
		string rpart=input.substr(i+1);
		string roq=lpart+rpart;
		perm(roq,output+ch);
	}
	
}
int main(){
	string input;
	cin>>input;
	string output="";
	perm(input,output);
	return 0;
}
