//
// Created by Yaroslav! on 06/06/2024.
//

#ifndef UNTITLED_2_STUDENT_H
#define UNTITLED_2_STUDENT_H

#include "Person.h"
#include "iostream"
using namespace std;

class Student : public Person {
private:
    int year;
    int group;
    string faculty;

public:
    Student();
    Student(string name, int birthYear, int year, int group, string faculty);
    void showInfo() const;
};


#endif //UNTITLED_2_STUDENT_H
