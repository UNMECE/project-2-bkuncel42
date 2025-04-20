#include "student.h"

Student::Student() {
    first_name = "First";
    last_name = "Last";
    gpa = 0.0;
    grad_year = 0;
    grad_semester = "None";
    enrolled_year = 0;
    enrolled_semester = "None";
    level = "undergrad";
}

Student::~Student() {}

void Student::setName(const std::string& first, const std::string& last) {
    first_name = first;
    last_name = last;
}

void Student::setGPA(double g) {
    gpa = g;
}

void Student::setGradYear(int year) {
    grad_year = year;
}

void Student::setGradSemester(const std::string& sem) {
    grad_semester = sem;
}

void Student::setEnrolledYear(int year) {
    enrolled_year = year;
}

void Student::setEnrolledSemester(const std::string& sem) {
    enrolled_semester = sem;
}

void Student::setLevel(const std::string& lvl) {
    level = lvl;
}

std::string Student::getInfo() const {
    return first_name + " " + last_name + ", GPA: " + std::to_string(gpa)
        + ", Level: " + level + ", Enrolled: " + enrolled_semester + " "
        + std::to_string(enrolled_year) + ", Graduation: " + grad_semester + " "
        + std::to_string(grad_year);
}

