//
// Created by esteb on 6/4/2023.
//

#ifndef GENERIC_DOUBLE_LIST_PERSON_H
#define GENERIC_DOUBLE_LIST_PERSON_H

#include <iostream>
using namespace std;

class Person {
private:
    string id;
    int age;
    string name;
public:
    Person(const string &name, int age, const string &id);
    const string &getId() const;
    void setId(const string &id);
    int getAge() const;
    void setAge(int age);
    const string &getName() const;
    void setName(const string &name);
    virtual ~Person();

    friend ostream &operator<<(ostream &os, const Person &person);
};


#endif //GENERIC_DOUBLE_LIST_PERSON_H
