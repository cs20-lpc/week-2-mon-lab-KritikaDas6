#include "Student.hpp"
#include <iostream>
using namespace std;

Student::Student() {
    cout << "Student object created!" << endl;
    name = "";
    age = 0;
}

Student::~Student() {
 cout << "Student object destroyed!" << endl;
}

void Student::setName(const string& s) {
name = s;
}

void Student::setAge(int i) {
 age = i;
}
string Student::getName() const {
    return name;
}
int Student::getAge() const {
    return age;
}
