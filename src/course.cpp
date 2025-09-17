#include "course.h"

void Course::addToEnrolledStudents(Student* s) {
    enrolledStudents.push_back(s);
}

void Course::removeFromEnrolledStudent(size_t studentIndex) {
    if (studentIndex < enrolledStudents.size()) {
        enrolledStudents.erase(enrolledStudents.begin() + studentIndex);
    }
}

void Course::displayEnrolledStudents() const {
    if (enrolledStudents.empty()) {
        std::cout << "No students enrolled.\n";
        return;
    }

    std::cout << "Enrolled students:\n";
    for (size_t i = 0; i < enrolledStudents.size(); i++) {
        std::cout << i + 1 << ". " << enrolledStudents[i]->getName() << std::endl;
    }
}

Course::~Course() {
    // Ratata... Annihilated the class
}
