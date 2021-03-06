#include "exercise8.hpp"

#ifndef ROOM_H
#define ROOM_H

class Room {
    private:
        string building;
        int number;
    public:
        Room(string, int);
        friend ostream& operator<<(ostream&, const Room&);
};

#endif
