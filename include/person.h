#pragma once
#include <string>

class Person {
    private:
        std::string name;
        int age;
        std::string id;

    protected:
        std::string email;

    public:
        void setName(std::string n);
        std::string getName() const;

        void setAge(int a);
        int getAge() const;

        void setId(std::string i);
        std::string getId() const;

        void setEmail(std::string e);
        std::string getEmail() const;

        Person();
        Person(std::string n, int a, std::string i, std::string e);
        Person(const Person& Data);

        ~Person();
};
