#include "student.h"

Student::Student(int n) {
    size = n;
    numCourses = n;
    gpa = 0.0;
    grades = new double[n];
    for (int i = 0; i < n; i++) {
        grades[i] = 0.0;
    }
}

Student::Student(const Student& Data) {
    size = Data.size;
    numCourses = Data.numCourses;
    gpa = Data.gpa;
    grades = new double[size];
    for (int i = 0; i < size; i++) {
        grades[i] = Data.grades[i];
    }
}

Student::~Student() {
    delete[] grades;
}

double Student::calculateGPA() {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += grades[i];
    }
    gpa = (size > 0) ? (sum / size) : 0.0;
    return gpa;
}

void Student::addGrade(int courseIndex, double grade) {
    if (courseIndex >= 0 && courseIndex < size) {
        grades[courseIndex] = grade;
    }
}
