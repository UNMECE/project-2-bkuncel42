#ifndef ART_STUDENT_H
#define ART_STUDENT_H

#include "student.h"

class Art_Student : public Student {
private:
    std::string art_emphasis; // Art Studio, Art History, Art Education

public:
    Art_Student();
    ~Art_Student();
    void setArtEmphasis(const std::string& emphasis);
    std::string getInfo() const override;
};

#endif

