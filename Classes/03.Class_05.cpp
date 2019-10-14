#include <iostream>
#include <string>
using namespace std;



class screen{
	public:
	void pixel();
};

class speaker{
	public:
	void sound();
};

void screen::pixel(){
	cout<<"pixel"<<endl;
}

void speaker::sound(){
	cout<<"sound"<<endl;
}

class PORT: public screen, public speaker{
	public:
	void write(string data);
};

void PORT::write(string data){
	cout<<" serial no "<<data<<endl;
}

int main(){

	PORT COM2;
	COM2.write(" 1.2 ");
	COM2.pixel();
	COM2.sound();	
	
	return 0;
}

