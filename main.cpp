#include <iostream>
#include "Person.h"
#include "Applicant.h"
#include "Student.h"
#include "Teacher.h"
using namespace std;

int main() {

    Person person1("Person 1", 2001);
    Applicant person2("Person 2 Applicant", 2002, 96);
    Student person3("Person 3 Student", 2003, 2021, 3,  "IT Course");
    Teacher person4("Person 4 Teacher", 1990, "Specialist", "IT");

    person1.showInfo();
    cout << endl;
    person2.showInfo();
    person3.showInfo();
    person4.showInfo();


    return 0;
}
