#ifndef NAME_H
#define NAME_H

    #include <iostream>
    #include <string>

    using namespace std;

    class Name {
        public:
            Name();
            Name(string name);
            void removeTrailingBlanks(string str);
            void printName();

        private:
            string fname;
            string lname;
    };

 
#endif