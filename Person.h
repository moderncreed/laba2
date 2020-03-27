#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include <iostream>
#include <cstring>
#include <time.h>

class Person{
private:
char* name;
char* surname;
int year;
public:

Person();
Person(const char* name, const char* surname, int year);
Person(const Person &P);
~Person();

void setName (const char* name);
void setSurname (const char* surname);
bool setYear (int year);

void const print();

char* const getName(char* name);
char* const getSurname(char* surname);
int getYear();

//2 лабораторная
// объявление опреторов
    Person &operator=(Person &person);

    int operator==(const Person &person) const;
    bool operator!=(const Person &person)const;
    bool operator>=(const Person &person)const;
    bool operator<=(const Person &person)const;
    bool operator>(const Person &person)const;
    bool operator<(const Person &person)const;

    friend std:: ostream& operator<< (std::ostream &out, const Person &person);

    friend  std:: istream& operator>> (std::istream &in,Person &person);



};




#endif // PERSON_H_INCLUDED
