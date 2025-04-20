#include <iostream>
#include <vector>
#include <fstream>
#include "art_student.h"
#include "physics_student.h"

int main() {
    std::vector<Art_Student*> art_students;
    std::vector<Physics_Student*> physics_students;

    // Create and assign Art Students
    for (int i = 0; i < 5; ++i) {
        Art_Student* student = new Art_Student();
        student->setName("ArtFirst" + std::to_string(i), "Last" + std::to_string(i));
        student->setGPA(3.5 + 0.1 * i);
        student->setGradYear(2026);
        student->setGradSemester("Spring");
        student->setEnrolledYear(2022);
        student->setEnrolledSemester("Fall");
        student->setLevel("undergrad");
        student->setArtEmphasis((i % 3 == 0) ? "Art Studio" : (i % 3 == 1) ? "Art History" : "Art Education");
        art_students.push_back(student);
    }

    // Create and assign Physics Students
    for (int i = 0; i < 5; ++i) {
        Physics_Student* student = new Physics_Student();
        student->setName("PhysFirst" + std::to_string(i), "Last" + std::to_string(i));
        student->setGPA(3.6 + 0.05 * i);
        student->setGradYear(2027);
        student->setGradSemester("Fall");
        student->setEnrolledYear(2023);
        student->setEnrolledSemester("Spring");
        student->setLevel("grad");
        student->setConcentration((i % 2 == 0) ? "Biophysics" : "Earth and Planetary Sciences");
        physics_students.push_back(student);
    }

    // Write to file
    std::ofstream outfile("student_info.dat");
    for (auto student : art_students) {
        outfile << student->getInfo() << std::endl;
    }
    for (auto student : physics_students) {
        outfile << student->getInfo() << std::endl;
    }
    outfile.close();

    // Clean up memory
    for (auto student : art_students) delete student;
    for (auto student : physics_students) delete student;

    return 0;
}

