//
// Created by Yaroslav! on 06/06/2024.
//

#include "Person.h"

Person::Person() {
    name = "undefined";
    birthYear = 0;

}

Person::Person(string name, int birthYear) {
    this->name = name;
    this->birthYear = birthYear;
}

void Person::showInfo() const {
    cout << "Name: " << name << endl;
    cout << "Year of birth: " << birthYear << endl;
}




