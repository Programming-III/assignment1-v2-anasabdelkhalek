#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
//#write your code here
class Course {
    private:
    string courseCode;
    string courseName;
    int maxStudents;
    Student* students;
    int currentStudents;
    public:
    Course(string co,string cn,int mx,int cs);
    addStudent(const Student& s);
    void displayCourseInfo();
};

#endif
