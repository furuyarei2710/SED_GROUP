//
// Created by Nguyen Hoang Minh Khoi on 12/15/22.
//

#ifndef SED_GROUP_OWNER_H
#define SED_GROUP_OWNER_H


class Owner {
private:
    House * house;
public:
    void registerHouse() {

    }

    House *getHouse() const {
        return house;
    }

    void setHouse(House *house) {
        Owner::house = house;
    }
};


#endif //SED_GROUP_OWNER_H
