//
// Created by Nguyen Hoang Minh Khoi on 12/12/22.
//

#ifndef SED_GROUP_SYSTEMMODEL_H
#define SED_GROUP_SYSTEMMODEL_H
#include <iostream>
#include "string"

#define CREDIT_POINT 500;

class Guest;
class Member;
class House;
class Request;

class Guest {
public:
    Guest();
    virtual ~Guest();
};

class Member : public Guest{
private:
    string id;
    string userName;
    string fullName;
    string phoneNum;
    string password;
    int creditP = CREDIT_POINT;

    House* house = nullptr;

    Request* request = nullptr;

public:
    explicit Member(string userName, string fullName, string phoneNum, string passWord);
    void showInfo();

    //getter
    const string &getId() const;
    const string &getUserName() const;
    const string &getFullName() const;
    const string &getPhoneNum() const;
    const string &getPassword() const;
    int getCreditP() const;
    House *getHouse() const;
    Request *getRequest() const;

    //Setter
    void setId(const string &id);
    void setUserName(const string &userName);
    void setFullName(const string &fullName);
    void setPhoneNum(const string &phoneNum);
    void setPassword(const string &password);
    void setCreditP(int creditP);
    void setHouse(House *house);
    void setRequest(Request *request);

    virtual ~Member();

};

class House {
private:
    string location;
    string description;
    bool available = false;
    int pricePerDay;
    double occupierRating;
    Member * owner;

public:

    House() {}

    House(string location, string description, int pricePerDay, Member * owner);

    virtual ~House();

    //Getter
    const string &getLocation() const;
    const string &getDescription() const;
    bool isAvailable() const;
    int getPricePerDay() const;
    double getOccupierRating() const;
    Member *getOwner() const;

    //Setter
    void setLocation(const string &location);
    void setDescription(const string &description);
    void setAvailable(bool available);
    void setPricePerDay(int pricePerDay);
    void setOccupierRating(double occupierRating);
    void setOwner(Member *owner);
};


#endif //SED_GROUP_SYSTEMMODEL_H
