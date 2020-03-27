#include "Person.h"


using namespace std;

Person::Person(){
name = NULL;
setName("noName");
surname = NULL;
setSurname("noSurname");
year = 1900;
}

Person::Person(const char* name, const char* surname, int year){
this->name = NULL;
setName(name);
this->surname = NULL;
setSurname(surname);
this->year=1900;
setYear(year);
}

Person::Person(const Person &P){
name = NULL;
setName(P.name);
surname = NULL;
setSurname(P.surname);
year = P.year;
}

Person::~Person(){
delete [] this->name;
delete [] this->surname;
}

void Person::setName(const char* name){
delete [] this->name;
int len = strlen(name) + 1;
this->name = new char[len];
strcpy(this->name, name);
}

void Person::setSurname(const char* surname){
delete [] this -> surname;
int len = strlen(surname) + 1;
this->surname = new char[len];
strcpy(this->surname, surname);
}

bool Person::setYear(int yearROM){
struct tm *t;
time_t z = time(NULL);
t = localtime(&z);
if (yearROM >= t->tm_year+1780 && yearROM <= t->tm_year+1900){
year = yearROM;
return true;
}
return false;
}

void const Person::print(){
cout << name << " " << surname << " " << year <<"\n" << endl;
}

char* const Person::getName(char* name){
strcpy(name, this->name);
return name;
}

char* const Person::getSurname(char* surname){
strcpy(surname, this->surname);
return surname;
}

int Person::getYear(){
return year;
}

//2 лабораторная
// инициализация операторов

Person&Person::operator=(Person &p){
        this->name = NULL;
        setName(p.name);
        this->surname = NULL;
        setSurname(p.surname);
        this->year = p.year;
        return *this;
    }
    int Person::operator==(const Person &p)const{
        return this->year == p.year && strcmp(name, p.name) && strcmp(surname,p.surname);
    }
    bool Person::operator!=(const Person &p)const{
        return !(this->year == p.year && strcmp(name, p.name) && strcmp(surname,p.surname));
    }
    bool Person::operator>=(const Person &p)const{
        return !(*this < p);

    }
    bool Person:: operator<=(const Person &p)const{
        return !(*this > p);
        }
    bool Person::operator>(const Person &p)const{
        return (this->year > p.year);
    }
    bool Person::operator<(const Person &p)const{
        return (this->year < p.year);
    }
    ostream& operator<< (ostream &out, const Person &p){
        out << " year: " << p.year << " name: " << p.name << " surname: " << p.surname;
        return out;
    }
    istream& operator>> (istream &in, Person &p){
        in >> p.name;
        in >> p.surname;
        in >> p.year;
        return  in;
    }



