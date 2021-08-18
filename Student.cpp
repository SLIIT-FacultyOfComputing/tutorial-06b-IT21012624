#include "Student.h"
#include <iostream>
#include<cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int Sid, char Sname[20]){

  studentId=Sid;
  strcpy(name, Sname);
}

// Display StudentId and Name
void Student::display() {
  
  cout<<"Student ID : "<<studentId<<endl;
  cout<<"Student name : "<<name<<endl;
}
