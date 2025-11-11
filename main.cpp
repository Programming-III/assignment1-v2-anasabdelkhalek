#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================

public Person(string n,int i){
    this->name=n;
    this->id=i;
};
void Display(){
    cout<<"Name: "<<name<<endl;
    cout<<"ID: "<<id<<endl;
}
// ==================== Student Class Implementation ====================
int student::Person(string m,int y){
    this->major=m;
    this->yearLevel=y;
    this->name=n;
    this->id=i;
}
void DisplayS::Person(){
    cout<<"Name: "<<name<<endl;
    cout<<"Year :"<<yearLevel<<endl;
    cout<<"Major:"<<major<<endl;
    cout<<"ID: "<<id<<endl;
}
// ==================== Instructor Class Implementation ====================

int Instructor::Person(string d,int e){
    this->department=d;
    this->experienceYears=e;
    this->name=n;
    this->id=i;
}
void displayI::Person(){
    cout<<"Name: "<<name<<endl;
    cout<<"Department:"<<department<<endl;
    cout<<"Experience Years:"<<experienceYears<<endl;
    cout<<"ID: "<<id<<endl;
}
// ==================== Course Class Implementation ====================
Public Course(string co,string cn,int mx,int cs){
    this->courseCode=co;
    this->courseName=cn;
    this->maxStudents=mx;
    this->currentStudents=cs;
    this.students=new Student[maxStudents];
}
addStudent(const Student& s){
    if(currentStudents<maxStudents){
        students[currentStudents]=s;
        currentStudents++;
    }
}
void displayCourseInfo(){
    cout<<"Course Code: "<<courseCode<<endl;
    cout<<"Course Name: "<<courseName<<endl;
    cout<<"Max Students: "<<maxStudents<<endl;
    cout<<"Current Students: "<<currentStudents<<endl;
}
// ==================== Main Function ====================
int main() {
   Course course("CS101", "Introduction to Programming", 3, 1);
    cout<<"Course:";
    course.displayCourseInfo();
    cout<<"currently enrolled: "<<endl;
    Student s("Omar Nabil", 1);
    s.DisplayS();
    cout<<"instructor Info:"<<endl;
    Instructor inst("Computer Science", 5);
    inst.displayI();
    cout<<"Student Info:"<<endl;
    s.DisplayS();

    return 0;
}
