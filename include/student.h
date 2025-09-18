#pragma once
#include "person.h"

class Student : public Person {
    private:
        double* grades;
        int numCourses;
        double gpa;
        int size;

    public:
        Student(int n);
        Student(const Student& Data);

        ~Student();

        double calculateGPA();
        void addGrade(int courseIndex, double grade);
};
