#include <iostream>
#include <vector>
#include <list>
#include <fstream>
#include <string>

using namespace std;


/* Типа таск 1 */
//Родительсий класс
class Person {
public:
    string firstName;
    string lastName;


    Person(string n, string s) {
        firstName = n;
        lastName = s;

    };
};


class Builder: public Person{
public:
    list<Person*> group;
    int age = 18;

    Builder(string n1, string s1) : Person(n1, s1) {
        firstName = n1;
        lastName = s1;
    };

    Builder & visit_card(){
        cout << "Фамилия: " << lastName << endl;
        cout << "Имя: " << firstName << endl;
        cout << "Возраст: " << age << endl;
    }
};




int main(){

    Person Leo("Земцов", "Леонид");
    Person Nik("Фамильяров", "Никита");

    Builder Man("Имя", "Фамилия");


    Man.group.push_back(&Leo);
    Man.group.push_back(&Nik);

    Person * adress = &Leo;
    Person frt1 = *adress; 

    // Типа таск 2 (Запись в файл)
    string path = "data.txt";
    Person somePerson ("Имя", "Фамилия");
    ofstream fout;
    fout.open(path, ofstream::app);
    fout.write((char *) &somePerson, sizeof(Person));
    fout.close();



    return 0;
}