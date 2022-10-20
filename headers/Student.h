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
    unsigned int id;
    string name;
    list<ClassCourse> classes;
    queue<Request> requests;

public:
	Student();

};

#endif