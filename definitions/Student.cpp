#include "../headers/Student.h"

Student::Student(int number, std::string name) {
    this->number = number;
    this->name = name;
}

int Student::getNumber() const{
    return number;
}

string Student::getName() const{
    return name;
}

set<ClassCourse*> Student::getEnrolledClasses() const{
    return enrolledClasses;
}

void Student::addClass(ClassCourse* newClass){
    // O(logN)
    enrolledClasses.insert(newClass);
}

void Student::removeClass(ClassCourse* classToRemove){
    // O(logN): erase -> O(1) && find -> O(logN)
    enrolledClasses.erase(enrolledClasses.find(classToRemove));
}

void Student::clearClasses(){
    // O(N)
    enrolledClasses.clear();
}
