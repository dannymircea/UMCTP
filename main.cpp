#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
	cout<<"Yo nigga"<<endl;
	if(argc>1) {
		for(int i=1; i<argc; i++){
			cout<<argv[i]<<endl;
		}
		return 225;
	}
	else{
		cout<<""<<endl;
		return 0;
	}
	cout<<"End of "<<arg[0]<<endl;
}
