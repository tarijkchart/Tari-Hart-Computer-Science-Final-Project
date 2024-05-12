#ifndef UNIVMEMBER_H
#define UNIVMEMBER_H

    #include "../name/Name.h"
    #include "../id/ID.h"
    #include <iostream>
    #include <string>

    using namespace std;

    class UnivMember {
        public:
            UnivMember(string id, string fullName, string role);
            void printDetails() const;
            friend ostream& operator<<(ostream& os, const UnivMember& rhs);
            friend istream& operator>>(istream& is, UnivMember& rhs);

        private:
            ID UnivID;
            Name UnivName;
            string Role;
    };


#endif