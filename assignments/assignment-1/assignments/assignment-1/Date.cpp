#include <iostream>
#include "Date.h"

using namespace std;

Date::Date()
    : day(1), month(1), year(2015) {

}

Date::Date(int m, int d, int y)
    :month(m), day(d), year(y) {
}

Date::Date (const Date& other)
    :month(other.month), day(other.day), year(other.year) {
}
Date::~Date() {}

void Date::setMonth (int m) {month = m;}
void Date::setDay (int d) {day = d;}
void Date::setYear (int y) {year = y;}

int Date::getMonth () const {return month;}
int Date::getDay () const {return day;}
int Date::getYear () const {return year;}

void Date::print() const {
    cout<< this->getDay() << "/" << this->getMonth() << "/" << this->getYear() << endl;
}

