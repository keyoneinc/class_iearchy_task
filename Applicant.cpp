//
// Created by Yaroslav! on 06/06/2024.
//

#include "Applicant.h"

Applicant::Applicant() {
    score = 0;
}

Applicant::Applicant(string name, int birthYear, int score) : Person(name, birthYear) {
    this->score = score;
}

void Applicant::showInfo() const {
    Person::showInfo();
    cout << "Score: " << score << endl << endl;

}
