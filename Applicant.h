//
// Created by Yaroslav! on 06/06/2024.
//

#ifndef UNTITLED_2_APPLICANT_H
#define UNTITLED_2_APPLICANT_H

#include "Person.h"
#include "iostream"
using namespace std;

class Applicant : public Person {
private:
    int score;

public:
    Applicant();
    Applicant(string name, int birthYear, int score);
    void showInfo() const;
};


#endif //UNTITLED_2_APPLICANT_H
