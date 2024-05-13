#ifndef PROF_H
#define PROF_H

    #include "UnivMember.h"
    #include <iostream>
    #include <string>

    using namespace std;

    class Prof : public UnivMember {
        public:
            Prof(string id, string fullName);
            friend ostream& operator<<(ostream& os, const Prof& rhs);
            friend istream& operator>>(istream& is, Prof& rhs);
    };

#endif // PROF_H