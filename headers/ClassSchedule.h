#ifndef CLASSSCHEDULE_H_
#define CLASSSCHEDULE_H_

#include <set>
#include <vector>
#include <string>
#include <list>
#include <queue>
#include "ClassCourse.h"
#include "Slot.h"

using namespace std;

class ClassSchedule {
private:
    ClassCourse classCourse;
    list<Slot> slots;

public:
	ClassSchedule();

};

#endif