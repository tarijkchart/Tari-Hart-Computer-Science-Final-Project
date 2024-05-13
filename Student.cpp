#include "Student.h"

using namespace std;

Student::Student(string id, string fullName, string roll) : UnivMember(id, fullName, "Student") {}

ostream& operator<<(std::ostream& os, const Student& rhs) {
    os << rhs.UnivID.getID() << " " << rhs.UnivName.printName();
    return os;
}

istream& operator>>(istream& is, Student& rhs) {
    string id, fullName;
    is >> id >> fullName;
    rhs.UnivID = ID(id);
    rhs.UnivName = Name(fullName);
    return is;
}