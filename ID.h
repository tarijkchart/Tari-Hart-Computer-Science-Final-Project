#ifndef ID_H
#define ID_H

    #include <iostream>
    #include <string>

    using namespace std;

    class ID {
        public:
            ID(string id);
            string getIDNumber() const;

        private:
            string ID_number;

    };


#endif