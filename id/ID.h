#ifndef ID_H
#define ID_H

    #include <iostream>
    #include <string>

    using namespace std;

    class ID {
        public:
            ID(string id);
            int getIDNumber() const;

        private:
            int ID_number;

    };


#endif