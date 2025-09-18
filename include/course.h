#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "student.h"

class Course {
    private:
        std::string courseName;
        int courseCode;
        int credits;
        std::vector<Student*> enrolledStudents;

    public:
        void addToEnrolledStudents(Student* s);
        void removeFromEnrolledStudent(size_t studentIndex);
        void displayEnrolledStudents() const;

        ~Course();
};
