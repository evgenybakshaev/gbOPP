#include "person.h"

Person::Person()
{
    m_name = "";
    m_age = 0;
    m_gender = NA;
    m_weight = 0;
}

Person::Person(std::string name, unsigned int age, eGender gender, unsigned int weight)
{
    m_name = name;
    m_age = age;
    m_gender = gender;
    m_weight = weight;
}

void Person::setName(std::string name)
{
    m_name = name;
}

void Person::setAge(unsigned int age)
{
    m_age = age;
}

void Person::setGender(eGender gender)
{
    m_gender = gender;
}

void Person::setWeight(unsigned int weight)
{
    m_weight = weight;
}
