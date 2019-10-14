#include <iostream>
#include <string>

using namespace std;

class program{
	public:
	string name;
	string type;
	string version;	
	void print();
};

void program::print(){
	cout<<"My program is "<<this->name<<", type is "<<this->type<<", version is "<<this->version<<endl;
}


int main(){
	program keil;
	keil.name="keil";
	keil.type="embedded ide";
	keil.version="v1.1";
	
	keil.print();
	
	return 0;
}

