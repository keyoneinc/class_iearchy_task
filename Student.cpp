//
// Created by Yaroslav! on 06/06/2024.
//

#include "Student.h"

Student::Student() {
    year = 0;
    group = 0;
    faculty = "undefined";
}

Student::Student(string name, int birthYear, int year, int group, string faculty) : Person(name, birthYear) {
    this->year = year;
    this->group = group;
    this->faculty = faculty;
}

void Student::showInfo() const {
    Person::showInfo();
    cout << "Year of study: " << year << endl;
    cout << "Group: " << group << endl;
    cout << "Facilty: " << faculty << endl << endl;

}


