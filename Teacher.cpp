//
// Created by Yaroslav! on 06/06/2024.
//

#include "Teacher.h"

Teacher::Teacher() {
    position = "undefined";
    department = "undefined";
}

Teacher::Teacher(string name, int birthYear, string position, string department) : Person(name, birthYear) {
    this->position = position;
    this->department = department;

}

void Teacher::showInfo() const {
    Person::showInfo();
    cout << "Position: " << position << endl;
    cout << "Department: " << department << endl << endl;
}
