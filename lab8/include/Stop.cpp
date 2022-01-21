//
// Created by user on 07.12.2021.
//

#include "Stop.h"
#include <list>
Stop::Stop(long id, const string &name, double latitude, double longitude) : id(id), name(name), latitude(latitude),
                                                                             longitude(longitude) {}

void Stop::print() {
    cout<< id << endl << name << endl << latitude << " " << longitude << endl;

}
