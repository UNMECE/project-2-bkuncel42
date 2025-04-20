#include "art_student.h"

Art_Student::Art_Student() : Student() {
    art_emphasis = "Art Studio";
}

Art_Student::~Art_Student() {}

void Art_Student::setArtEmphasis(const std::string& emphasis) {
    art_emphasis = emphasis;
}

std::string Art_Student::getInfo() const {
    return "[Art Student] " + Student::getInfo() + ", Emphasis: " + art_emphasis;
}

