#pragma once
#include "Student.h"

class Group
{
    unsigned short countStudent = 0;
    unsigned short numberOfCoure;
    string groupName;
    string specialization;
    Student** classmates = nullptr;
public:
    Group();
    Group(const Group& original);
    ~Group();

    void PrintGroup() const;

    void AddStudent(const Student& newStudent);

    void WeanStudent(unsigned short index);
    
    void Expel();

    void SetCountOfStudent(int countStudent);
    void SetGroupName(string groupName);
    void SetSpecialization(string specialization);
    void SetNumberOfCourse(int numberOfCoure);

    int GetCountOfSudent() const;
    string GetGroupName() const;
    string GetSpecialization() const;
    int GetNumberOfCourse() const;
};

