#ifndef STUDENT_H
#define STUDENT_H

    #include "UnivMember.h"
    #include <iostream>
    #include <string>

    using namespace std;

    class Student : public UnivMember {
        public:
            Student(string id, string fullName);
            friend ostream& operator<<(ostream& os, const Student& rhs);
            friend istream& operator>>(istream& is, Student& rhs);
    };

#endif