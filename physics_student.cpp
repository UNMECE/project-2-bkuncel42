#include "physics_student.h"

Physics_Student::Physics_Student() : Student() {
    concentration = "Biophysics";
}

Physics_Student::~Physics_Student() {}

void Physics_Student::setConcentration(const std::string& c) {
    concentration = c;
}

std::string Physics_Student::getInfo() const {
    return "[Physics Student] " + Student::getInfo() + ", Concentration: " + concentration;
}

