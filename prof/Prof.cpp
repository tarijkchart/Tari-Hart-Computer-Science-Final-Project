#include "Prof.h"

using namespace std;

Prof::Prof(string id, string fullName, string roll) : UniversityMember(id, fullName, "Prof") {}

ostream& operator<<(ostream& os, const Prof& rhs) {
    os << rhs.UnivID.getID() << " " << rhs.UnivName.printName();
    return os;
}

istream& operator>>(istream& is, Prof& rhs) {
    std::string id, fullName;
    is >> id >> fullName;
    rhs.UnivID = ID(id);
    rhs.UnivName = Name(fullName);
    return is;
}