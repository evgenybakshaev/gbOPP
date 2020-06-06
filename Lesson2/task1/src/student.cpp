#include "student.h"


Student::Student()
    : m_year(0)
{
}

Student::Student(std::string name, unsigned int age, Person::eGender gender, unsigned int weight)
    : Student(name, age, gender, weight, 0)
{
}

Student::Student(std::string name, unsigned int age, Person::eGender gender, unsigned int weight, unsigned int year)
    : Person(name, age, gender, weight), m_year(year)
{
}

void Student::setYear(unsigned int year)
{
    m_year = year;
}

void Student::addYear(unsigned int year)
{
    m_year += year;
}
