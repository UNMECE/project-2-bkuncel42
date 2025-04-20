#ifndef PHYSICS_STUDENT_H
#define PHYSICS_STUDENT_H

#include "student.h"

class Physics_Student : public Student {
private:
    std::string concentration; // Biophysics, Earth and Planetary Sciences

public:
    Physics_Student();
    ~Physics_Student();
    void setConcentration(const std::string& c);
    std::string getInfo() const override;
};

#endif

