#include "Person.h"

using namespace std;

int main(){
Person p("Ivan", "Ivanov", 2010);
Person p1;
Person p2(p);

p.print();
p1.print();
p2.print();

p1.setName("Max");
p1.setSurname("Payne");
p1.setYear(2000);
p1.print();


//2 лабораторная
    cout<< "2 laba"<<endl;

    p1.setName("name2");
    p1.setSurname("surname2");
    p1.setYear(2010);



    cout << "=" << endl;
    p1.print();
    p1=p;
    p1.print();





    cout << "==" << endl;
   int t1 = p == p1;
    cout << "bool is " << t1 << endl;

    cout << "!=" << endl;
    t1 = p != p1;
    cout << "bool is " << t1 << endl;

    cout <<">="<< endl;
    t1 = p >= p1;
    cout << "bool is " << t1 << endl;

    cout <<"<="<< endl;
    t1 = p <= p1;
    cout << "bool is " << t1 << endl;

    cout << "> (year) " << endl;
    t1 = p > p1;
    cout << "bool is " << t1 << endl;

    cout << "< (year) " << endl;
    t1 = p < p1;
    cout << "bool is " << t1 << endl;

    cout << "<< (p1) " << endl;
    cout << p << endl;

    cout << ">> (p1) " << endl;
    cout << "Input\n" << "name surname year" << endl;
    cin >> p;
    p.print();



return 0;
}
