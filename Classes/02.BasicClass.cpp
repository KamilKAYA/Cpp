#include <iostream>
#include <string>

using namespace std;

class program{
	public:
	string name;
	string type;
	string version;	
};

int main(){
	program keil;
	keil.name="keil";
	keil.type="embedded ide";
	keil.version="v1.1";
	
	cout<<"My program is "<<keil.name<<", type is "<<keil.type<<", version is "<<keil.version<<endl;
	return 0;
}

