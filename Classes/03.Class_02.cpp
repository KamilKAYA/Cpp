#include <iostream>
#include <string>

using namespace std;

struct programing{
	public:
		string name;
		string type;
		string version;
};


class program{
	public:
	programing Info;
	void print();
};

void program::print(){
	cout<<"My program is "<<Info.name<<", type is "<<Info.type<<", version is "<<Info.version<<endl;
}


int main(){
	program keil;
	keil.Info.name="keil";
	keil.Info.type="electronic";
	keil.Info.version="v2.3";	
	keil.print();
	
	return 0;
}

