#include<iostream>
using namespace std;
 void print_jumps(int sr,int sc,int dr,int dc,string output){
	if(sr==dr &&  sc==dc){
		cout<<output<<endl;
		return;
	}
	// for row
	for(int mes=1;mes<=dr-sr;mes++){
		
		print_jumps(sr+1,sc,dr,dc,output+"h");   // "h"+mes is not applicable in c++
	}
	for(int mes=1;mes<=dc-sc;mes++){
		print_jumps(sr,sc+1,dr,dc,output+"v");    // "v"+mes is not applicable in c++
	}
	for(int mes=1;mes<=dc-sc && mes<=dr-sr;mes++){
		print_jumps(sr+1,sc+1,dr,dc,output+"d");   // "d"+mes is not applicable in c++
	}  
	
}
int main(){
	int dc,dr;
	cin>>dr>>dc;
	string input =" ";
	print_jumps(1,1,dr,dc,input );
	return 0;
}
	
