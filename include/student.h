#pragma once
#include "person.h"

class Student : public Person {
    private:
        double* grades;
        int numCourses;
        double gpa;
        int size;

    public:
        // constructors
        Student(int n);
        Student(const Student& Data);

        // destructor
        ~Student();

        // methods
        double calculateGPA();
        void addGrade(int courseIndex, double grade);
};
