#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;
class Person {
private:
    string name;
    string birthday;
    int gender; // 1 for male, 2 for female

public:
    Person(string name, string birthday, int gender);
    string getName() const;
    void setName(string name);
    string getBirthday() const;
    void setBirthday(string birthday);
    int getGender() const;
    void setGender(int gender);
};

#endif
