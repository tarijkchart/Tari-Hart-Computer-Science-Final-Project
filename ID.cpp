#include "ID.h"
#include <iostream>
#include <string>

using namespace std;

ID::ID(std::string id) : ID_number(id) {}

string ID::getIDNumber() const {
    return ID_number;
}

 