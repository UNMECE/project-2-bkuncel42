#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
protected:
    std::string first_name;
    std::string last_name;
    double gpa;
    int grad_year;
    std::string grad_semester;
    int enrolled_year;
    std::string enrolled_semester;
    std::string level; // "undergrad" or "grad"

public:
    Student();
    virtual ~Student();

    void setName(const std::string& first, const std::string& last);
    void setGPA(double g);
    void setGradYear(int year);
    void setGradSemester(const std::string& sem);
    void setEnrolledYear(int year);
    void setEnrolledSemester(const std::string& sem);
    void setLevel(const std::string& lvl);

    virtual std::string getInfo() const;
};

#endif

