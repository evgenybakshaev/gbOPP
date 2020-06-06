#ifndef STUDENT_H
#define STUDENT_H

#include "person.h"

class Student : public Person
{
private:
    unsigned int m_year;
public:
    Student();
    Student(std::string name, unsigned int age, eGender gender, unsigned int weight);
    Student(std::string name, unsigned int age, eGender gender, unsigned int weight, unsigned int year);
    void setYear(unsigned int year);
    void addYear(unsigned int year);
};

#endif // STUDENT_H
