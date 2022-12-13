//
// Created by Nguyen Hoang Minh Khoi on 12/12/22.
//

#ifndef SED_GROUP_HOUSE_H
#define SED_GROUP_HOUSE_H


class House {
private:
    int houseID;
    string location;
    string description;
    int creditP;
    House * house;

public:
    House(string location = "", string description = "" ) {
        this->houseID += 1;
        this->location = location;
        this->description = description;
        this->creditP = 500;
    }

    House() {};

    int getHouseId() const {
        return houseID;
    }

    void setHouseId(int houseId) {
        houseID = houseId;
    }

    const string &getLocation() const {
        return location;
    }

    void setLocation(const string &location) {
        House::location = location;
    }

    const string &getDescription() const {
        return description;
    }

    void setDescription(const string &description) {
        House::description = description;
    }

    int getCreditP() const {
        return creditP;
    }

    void setCreditP(int creditP) {
        House::creditP = creditP;
    }


    virtual ~House() {

    }
};


#endif //SED_GROUP_HOUSE_H
