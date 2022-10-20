#include <iostream>
#include "headers/ClassSchedule.h"
#include "headers/ClassCourse.h"
#include "headers/Student.h"
using namespace std;

int main() {
    ClassCourse fisica("L.EIC011", "1LEIC01");
    ClassSchedule turma1(&fisica, "Tuesday", 11.5, 1.5, "TP");

    vector<set<ClassSchedule*>> horarioDeUmaSemana = fisica.getSchedules();
    set<ClassSchedule*> horarioDeTerca = horarioDeUmaSemana[2];
    ClassSchedule* primeiraAula = *(horarioDeTerca.begin());
    string duracaoDaPrimiraAula = primeiraAula -> getDurationString();

    cout << duracaoDaPrimiraAula << endl;

    Student pedro(202108806, "Pedro");
    pedro.addClass(&fisica);
    cout << (*(pedro.getEnrolledClasses().begin()) == &fisica) << endl;

    return 0;
}
