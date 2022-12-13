//
// Created by Nguyen Hoang Minh Khoi on 12/12/22.
//

#ifndef SED_GROUP_MEMBER_H
#define SED_GROUP_MEMBER_H
#include <iostream>
#include "string"


//username, full name, phone number
class Member {
private:
    int memberID;
    string userName;
    string fullName;
    string phoneNum;

public:
    Member(string userName = "", string fullName = "", string phoneNum = "") {
        this->memberID += 1;
        this->userName = userName;
        this->fullName = fullName;
        this->phoneNum = phoneNum;
    }

    Member() {};

    int getMemberId() const {
        return memberID;
    }

    void setMemberId(int memberId) {
        memberID = memberId;
    }

    const string &getUserName() const {
        return userName;
    }

    void setUserName(const string &userName) {
        Member::userName = userName;
    }

    const string &getFullName() const {
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


    virtual ~Member() {

    }
};


#endif //SED_GROUP_MEMBER_H
