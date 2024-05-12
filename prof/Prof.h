#ifndef PROF_H
#define PROF_H

    #include "../univmember/UnivMember.h"

    using namespace std;

    class Prof : public UnivMember {
        public:
            Prof(string id, string fullName);
            friend ostream& operator<<(ostream& os, const Prof& rhs);
            friend istream& operator>>(istream& is, Prof& rhs);
    };

#endif // PROF_H