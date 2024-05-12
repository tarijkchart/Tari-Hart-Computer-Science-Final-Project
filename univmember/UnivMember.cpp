#include "UnivMember.h"
#include <iostream>
#include <string>

using namespace std;

UnivMember::UnivMember(string id, string fullName, string role) : UnivID(id), UnivName(fullName), Role(role) {
}

void UnivMember::printInfo() const {
    cout << role << ": " << UnivName.printName() << endl;
    cout << "ID: " << UnivID.getIDNumber() << endl;
}

ostream& operator<<(ostream& os, const UnivMember& rhs) {
    os << rhs.UnivID.getID() << " " << rhs.univName.printName() << " " << rhs.Role;
    return os;
}

istream& operator>>(istream& is, UnivMember& rhs) {
    std::string id, fullName, role;
    is >> id >> fullName >> role;
    rhs.UnivID = ID(id);
    rhs.UnivName = Name(fullName);
    rhs.Role = role;
    return is;
}

