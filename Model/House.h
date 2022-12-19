//
// Created by Nguyen Hoang Minh Khoi on 12/12/22.
//

#ifndef SED_GROUP_HOUSE_H
#define SED_GROUP_HOUSE_H


class House {
private:
    string location;
    string description;
    bool available = false;
    int pricePerDay;
    double occupierRating;

public:
    House(string location = "", string description = "", int pricePerDay = 0, double occupierRating = 0.0 ) {
        this->location = location;
        this->description = description;
        this->pricePerDay = pricePerDay;
        this->occupierRating = occupierRating;
    }

    House() {};

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

    virtual ~House() {

    }
};


#endif //SED_GROUP_HOUSE_H
