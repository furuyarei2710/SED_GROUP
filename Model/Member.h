//
// Created by Nguyen Hoang Minh Khoi on 12/12/22.
//

#ifndef SED_GROUP_MEMBER_H
#define SED_GROUP_MEMBER_H
#include <iostream>
#include "string"
#include "House.h"
#include "Owner.h"
#include "Occupier.h"


//username, full name, phone number
class Member : public Owner, public Occupier{
private:
    string userName;
    string fullName;
    string phoneNum;
    string password;
    int creditP = 500;

public:
    Member() {};

    Member(string userName = "", string fullName = "", string phoneNum = "", string password = "") {
        this->userName = userName;
        this->fullName = fullName;
        this->phoneNum = phoneNum;
        this->password = password;
    }



    void showInfo() {
        cout << "Username: " << this->getUserName() << ", full name: " << this->getFullName() << "\n";
    }

    [[nodiscard]] const string &getUserName() const {
        return userName;
    }

    void setUserName(const string &userName) {
        Member::userName = userName;
    }

    [[nodiscard]] const string &getFullName() const {
        return fullName;
    }

    void setFullName(const string &fullName) {
        Member::fullName = fullName;
    }

    [[nodiscard]] const string &getPhoneNum() const {
        return phoneNum;
    }

    void setPhoneNum(const string &phoneNum) {
        Member::phoneNum = phoneNum;
    }

    [[nodiscard]] const string &getPassword() const {
        return password;
    }

    void setPassword(const string &password) {
        Member::password = password;
    }

    [[nodiscard]] int getCreditP() const {
        return creditP;
    }

    void setCreditP(int creditP) {
        Member::creditP = creditP;
    }

    virtual ~Member() {
    }
};


#endif //SED_GROUP_MEMBER_H
