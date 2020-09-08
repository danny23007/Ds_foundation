#include<iostream>
using namespace std;
	void print_maze(int sr,int sc,int dr,int dc,string output){
	if(sr>dr || sc>dc){
		return ;
	}
	if(sr==dr &&sc==dc){
		cout<<output<<endl;
		return;
	}
	
		print_maze(sr,sc+1,dr,dc,output+"h");
	
	
		print_maze(sr+1,sc,dr,dc,output+"v");
	
}
int main(){
	int dr,dc;
	
	cin>>dr>>dc;
	string output=" ";
	print_maze(1,1,dr,dc,output);
	return 0;
}
