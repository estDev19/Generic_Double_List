//
// Created by esteb on 6/4/2023.
//

#include "Person.h"

const string &Person::getId() const {
    return id;
}

void Person::setId(const string &id) {
    Person::id = id;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    Person::age = age;
}

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

Person::Person(const string &name, int age, const string &id) : id(id), age(age), name(name) {}

Person::~Person() {

}

ostream &operator<<(ostream &os, const Person &person) {
    os << "<Name: " << person.name << " - Age:" << person.age << " - Id:" << person.id<<">";
    return os;
}
