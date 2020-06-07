#include <iostream>
#include <iomanip>
#include <memory>

using namespace std;

class Date {
protected:
    uint16_t m_year;
    uint16_t m_month;
    uint16_t m_day;
public:
    Date() {}
    Date(uint16_t year, uint16_t month, uint16_t day)
        : m_year(year), m_month(month), m_day(day) {}
    Date(const Date &date)
        : m_year(date.getYear()), m_month(date.getMonth()), m_day(date.getDay()) {}

    uint16_t getYear() const {
        return m_year;
    }
    uint16_t getMonth() const {
        return m_month;
    }
    uint16_t getDay() const {
        return m_day;
    }

    friend ostream& operator<< (ostream &out, const Date &date);
    friend ostream& operator<< (ostream &out, const Date *date);
};

ostream& operator<< (ostream &out, const Date &date)
{
    out << setfill('0') <<setw(2) << date.m_day << "."
        << setfill('0') <<setw(2) << date.m_month << "."
        << date.m_year;
    return out;
}

ostream& operator<< (ostream &out, const Date *date)
{
    if(date)
        out << setfill('0') <<setw(2) << date->m_day << "."
            << setfill('0') <<setw(2) << date->m_month << "."
            << date->m_year;

    return out;
}

unique_ptr<Date> getLaterDate(const unique_ptr<Date> &date1, const unique_ptr<Date> &date2){

    unique_ptr<Date> p;
    if(date1->getYear() > date2->getYear())
        return make_unique<Date>(*date1);
    else if(date1->getYear() < date2->getYear())
        return make_unique<Date>(*date2);
    if(date1->getMonth() > date2->getMonth())
        return make_unique<Date>(*date1);
    else if(date1->getMonth() < date2->getMonth())
        return make_unique<Date>(*date2);
    if(date1->getDay() > date2->getDay())
        return make_unique<Date>(*date1);
    else
        return make_unique<Date>(*date2);

}

int main(int argc, char** args){
    unique_ptr<Date> today(make_unique<Date>(2020,06,07));
    unique_ptr<Date> date;

    int day = today->getDay();
    int month = today->getMonth();
    int year = today->getYear();

    cout << "today is " << today.get() << endl;

    date = move(today);

    cout << "date is not null: " << boolalpha << (bool)date << endl;
    cout << "today is not null: " << boolalpha << (bool)today << endl;

    unique_ptr<Date> date2(make_unique<Date>(2020,07,03));
    unique_ptr<Date> date3(getLaterDate(date,date2));

    cout << "Compare date " << *date << " and date " << *date2 << endl
         << "Later date is "<< *date3 << endl;

    return 0;
}
