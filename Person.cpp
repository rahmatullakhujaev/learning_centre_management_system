#include "Person.h"
using namespace std;
Person::Person(string name, string birthday, int gender)
    : name(name), birthday(birthday), gender(gender) {}

string Person::getName() const {
    return name;
}

void Person::setName(string name) {
    this->name = name;
}

string Person::getBirthday() const {
    return birthday;
}

void Person::setBirthday(string birthday) {
    this->birthday = birthday;
}

int Person::getGender() const {
    return gender;
}

void Person::setGender(int gender) {
    this->gender = gender;
}
