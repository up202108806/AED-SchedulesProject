
#include "../headers/ClassSchedule.h"

ClassSchedule::ClassSchedule(ClassCourse* classCourse, int weekDay, float startHour, float duration, std::string type) {
    this->classCourse = classCourse;
    this->weekDay = weekDay;
    this->startHour = startHour;
    this->duration = duration;
    this->type = type;

    (classCourse -> getSchedules())[weekDay].insert(this);
}

ClassSchedule::ClassSchedule(ClassCourse* classCourse, std::string weekDay, float startHour, float duration, std::string type) :
        ClassSchedule(classCourse, weekDayToNum.at(weekDay), startHour, duration, type){}

string ClassSchedule::floatToMinutes(float hour) const {
    float lessThanOne = hour - ((int) hour);
    int minutes = lessThanOne * 60;
    return to_string((int) hour) + ':' + to_string(minutes);
}

ClassCourse* ClassSchedule::getClassCourse() const{
    return classCourse;
}

int ClassSchedule::getWeekDay() const{
    return weekDay;
}

string ClassSchedule::getWeekDayString() const{
    return numToWeekDay.at(weekDay);
}

float ClassSchedule::getStartHour() const{
    return startHour;
}

string ClassSchedule::getStartHourString() const{
    return floatToMinutes(startHour);
}

float ClassSchedule::getDuration() const{
    return duration;
}

string ClassSchedule::getDurationString() const{
    return floatToMinutes(duration);
}

string ClassSchedule::getType() const{
    return type;
}

void ClassSchedule::setWeekDay(int day){
    weekDay = day;
}

void ClassSchedule::setWeekDay(string day){
    weekDay = weekDayToNum.at(day);
}

void ClassSchedule::setStartHour(float hour){
    startHour = hour;
}

void ClassSchedule::setDuration(float time){
    duration = time;
}

void ClassSchedule::setType(string initials){
    type = initials;
}

bool ClassSchedule::operator<(ClassSchedule hour) const {
    return (weekDay < hour.weekDay) || (weekDay == hour.weekDay && startHour < hour.startHour);
}

const map<int, string> ClassSchedule::numToWeekDay = {{0, "Sunday"}, {1, "Monday"}, {2, "Tuesday"}, {3, "Wednesday"},
                                                  {4, "Thursday"}, {5, "Friday"}, {6, "Saturday"}};

const map<string, int> ClassSchedule::weekDayToNum = {{"Sunday",   0}, {"Monday", 1}, {"Tuesday", 2}, {"Wednesday", 3},
                                                      {"Thursday", 4}, {"Friday", 5}, {"Saturday", 6}};

