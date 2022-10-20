#ifndef CLASSCOURSE_H_
#define CLASSCOURSE_H_

#include <set>
#include <vector>
#include <string>
#include <list>
#include <queue>

using namespace std;

class ClassSchedule;

class ClassCourse {
private:
    string classCode;
    string courseCode;
    vector<set<ClassSchedule*>> schedules;

public:
    ClassCourse(string courseCode, string classCode);
//    void addSchedule(ClassSchedule* schedule);
//    void removeSchedule(ClassSchedule* schedule);
//    void clearSchedule();

    string getClassCode() const;
    string getCourseCode() const;
    vector<set<ClassSchedule*>>& getSchedules();

    bool operator<(ClassCourse uc) const;


};

#endif