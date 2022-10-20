#ifndef STUDENT_H_
#define STUDENT_H_

#include <set>
#include <vector>
#include <string>
#include <list>
#include <queue>
#include "ClassCourse.h"
#include "Request.h"

using namespace std;

class Student {

private:
    int number;
    string name;
    set<ClassCourse*> enrolledClasses;

public:
    Student(int number, string name);

    int getNumber() const;
    string getName() const;
    set<ClassCourse*> getEnrolledClasses() const;

    void addClass(ClassCourse* newClass);
    void removeClass(ClassCourse* classToRemove);
    void clearClasses();

};


#endif