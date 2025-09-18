#include "person.h"

void Person::setName(std::string n) { name = n; }
std::string Person::getName() const { return name; }

void Person::setAge(int a) { age = a; }
int Person::getAge() const { return age; }

void Person::setId(std::string i) { id = i; }
std::string Person::getId() const { return id; }

void Person::setEmail(std::string e) { email = e; }
std::string Person::getEmail() const { return email; }

Person::Person() 
    : name(""), age(0), id(""), email("") {}

Person::Person(std::string n, int a, std::string i, std::string e)
    : name(n), age(a), id(i), email(e) {}

Person::Person(const Person& Data)
    : name(Data.name), age(Data.age), id(Data.id), email(Data.email) {}

Person::~Person() {}
