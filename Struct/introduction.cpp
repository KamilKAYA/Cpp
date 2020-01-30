
#include <iostream>

using namespace std;

typedef struct{
	int id;
	char key;
}HELLOSTRUCT;

int main(void){
	
	HELLOSTRUCT myStruct;
	myStruct.id=12;
	myStruct.key='A';
	
	cout<<"Struct id is "<<myStruct.id<<" and char is "<<myStruct.key<<endl;
	
}
