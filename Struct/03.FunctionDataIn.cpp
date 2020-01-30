
#include <iostream>
#include <string>

using namespace std;

/*
typedef struct{
	int id;
	char key;
}HELLOSTRUCT;
*/

typedef struct STUDENT{
	int id;
	string name;
	string surname;
	double grade;	
};

/*
void getStudent(){

}

*/

STUDENT getStudent(){
	STUDENT student;
	student.id=115256;
	student.name="Kamil";
	student.surname="KAYA";
	student.grade=3.36;
	return student;	
}

int main(void){

	STUDENT myStudent=getStudent();
		
	cout<<"Student Id "<<myStudent.id<<" Name "<<myStudent.name<<" Surname "<<myStudent.surname<<" Grade "<<myStudent.grade<<endl;
	
}
