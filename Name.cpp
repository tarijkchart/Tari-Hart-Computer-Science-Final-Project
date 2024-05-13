#include "Name.h"
#include <iostream>
#include <string>

using namespace std;

Name::Name(){
    fname = "First";
    lname = "Last";
}

Name::Name(string name){
    int split = name.find(',');

    fname = name.substr(split+1, name.length());
    lname = name.substr(0, split-1);
}

void Name::printName(){
    cout << fname << " " << lname << endl;
}

void Name::removeTrailingBlanks(string str){
    int pos = str.find_last_not_of(" ");
    if (pos != string::npos) {
        str.erase(pos + 1);
    }
}