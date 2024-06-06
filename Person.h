//
// Created by Yaroslav! on 06/06/2024.
//

#ifndef UNTITLED_2_PERSON_H
#define UNTITLED_2_PERSON_H

#include "iostream"
#include "string"
using namespace std;

class Person {
private:
    string name;
    int birthYear;

public:
    Person();
    Person(string name, int birthYear);
    void showInfo() const;

};


#endif //UNTITLED_2_PERSON_H
