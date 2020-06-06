#ifndef PERSON_H
#define PERSON_H
#include <string>

using std::string;

class Person
{
protected:
    enum eGender {NA = 0, M = 'M', F = 'F'};
private:
    string m_name;
    unsigned int m_age;
    eGender m_gender;
    unsigned int m_weight;
public:
    Person();
    Person(string name, unsigned int age, eGender gender, unsigned int weight);

    void setName(string name);
    void setAge(unsigned int age);
    void setGender(eGender gender);
    void setWeight(unsigned int weight);
};

#endif // PERSON_H
