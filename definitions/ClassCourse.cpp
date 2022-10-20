#include "../headers/ClassCourse.h"

ClassCourse::ClassCourse(string courseCode, string classCode){
    this->courseCode = courseCode;
    this->classCode = classCode;
    schedules = vector<set<ClassSchedule*>>(7);
}

string ClassCourse::getClassCode() const{
    return classCode;
}

string ClassCourse::getCourseCode() const{
    return courseCode;
}

vector<set<ClassSchedule*>>& ClassCourse::getSchedules(){
    return schedules;
}

bool ClassCourse::operator<(ClassCourse uc) const{
    return classCode < uc.classCode;
}