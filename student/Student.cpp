#include "Student.h"

using namespace std;

Student::Student(string id, string fullName, string roll) : UniversityMember(id, fullName, "Student") {}

ostream& operator<<(std::ostream& os, const Student& rhs) {
    os << rhs.UnivID.getID() << " " << rhs.UnivName.printName();
    return os;
}

istream& operator>>(istream& is, Student& rhs) {
    string id, fullName;
    is >> id >> fullName;
    student.UnivID = ID(id);
    student.UnivName = Name(fullName);
    return is;
}