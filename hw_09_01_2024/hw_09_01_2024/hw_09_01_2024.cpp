#include <iostream>
#include <ctime>
#include <string.h>
using namespace std;

#include "Student.h"
#include "Date.h"
#include "Group.h"

int main()
{
    Student studentA;
    studentA.AddExam(7);
    studentA.AddExam(12);
    studentA.AddExam(9);

    Student studentB;
    studentB.AddExam(5);
    studentB.AddExam(9);
    studentB.AddExam(12);

    Student studentС;
    studentС.AddExam(2);
    studentС.AddExam(9);
    studentС.AddExam(7);

    Group group;

    // Добавление студентов в группу
    group.AddStudent(studentA);
    group.AddStudent(studentB);
    group.AddStudent(studentС);

    // Вывод информации о группе
    cout << "Original Group:\n";
    group.PrintGroup();

    // Исключение студента из группы
    cout << "\nExpelling a student:\n";
    group.Expel();
    group.PrintGroup();

    Student copya;
    copya = studentA;

    Student copyb;
    copyb = studentB;
    Student copyс;
    copyс = studentС;

    Group copy;
    copy = group;

    cout << "\nCopied Group:\n";
    copy.PrintGroup();
}
