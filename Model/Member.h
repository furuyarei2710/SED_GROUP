//
// Created by Nguyen Hoang Minh Khoi on 12/12/22.
//

#ifndef SED_GROUP_MEMBER_H
#define SED_GROUP_MEMBER_H
#include <iostream>
#include "string"
#include "House.h"


//username, full name, phone number
class Member {
private:
    string userName;
    string fullName;
    string phoneNum;
    string password;



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

    const string &getPhoneNum() const {
        return phoneNum;
    }

    void setPhoneNum(const string &phoneNum) {
        Member::phoneNum = phoneNum;
    }

    const string &getPassword() const {
        return password;
    }

    void setPassword(const string &password) {
        Member::password = password;
    }

    virtual ~Member() {
    }
};


#endif //SED_GROUP_MEMBER_H
