#ifndef UNIVMEMBER_H
#define UNIVMEMBER_H

    #include "Name.h"
    #include "ID.h"
    #include <iostream>
    #include <string>

    using namespace std;

    class UnivMember {
        public:
            UnivMember(string id, string fullName, string role);
            friend ostream& operator<<(ostream& os, const UnivMember& rhs);
            friend istream& operator>>(istream& is, UnivMember& rhs);

        private:
            ID UnivID;
            Name UnivName;
            string Role;
    };


#endif