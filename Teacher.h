//
// Created by Yaroslav! on 06/06/2024.
//

#ifndef UNTITLED_2_TEACHER_H
#define UNTITLED_2_TEACHER_H

#include "Person.h"
#include "iostream"
using namespace std;

class Teacher : public Person {
private:
    string position;
    string department;

public:
    Teacher();
    Teacher(string name, int birthYear, string position, string department);
    void showInfo() const;
};


#endif //UNTITLED_2_TEACHER_H
