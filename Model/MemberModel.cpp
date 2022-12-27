//
// Created by Nguyen Hoang Minh Khoi on 12/24/22.
//

#include "SystemModel.h"
#define sysLog(x) cout << x;

Member::Member(string userName, string fullName, string phoneNum, string passWord)
        : userName(userName), fullName(fullName), phoneNum(phoneNum), password(passWord) {};
Member::Member() {};
Member::~Member() {

}

//Getter
const string &Member::getId() const {
    return id;
}

const string &Member::getUserName() const {
    return userName;
}

const string &Member::getFullName() const {
    return fullName;
}

const string &Member::getPhoneNum() const {
    return phoneNum;
}

const string &Member::getPassword() const {
    return password;
}

int Member::getCreditP() const {
    return creditP;
}

House *Member::getHouse() const {
    return house;
}

Request *Member::getRequest() const {
    return request;
}

//Setter
void Member::setUserName(const string &userName) {
    Member::userName = userName;
}

void Member::setFullName(const string &fullName) {
    Member::fullName = fullName;
}

void Member::setPhoneNum(const string &phoneNum) {
    Member::phoneNum = phoneNum;
}

void Member::setPassword(const string &password) {
    Member::password = password;
}

void Member::setCreditP(int creditP) {
    Member::creditP = creditP;
}

void Member::setHouse(House *house) {
    Member::house = house;
}

void Member::setRequest(Request *request) {
    Member::request = request;
}

void Member::setId(const string &id) {
    Member::id = id;
}

//Authentication function
Member * Member::registerNewMember() {
    sysLog("You are already logged in");
    return this;
};

Member * Member::login() {
    sysLog("You are already logged in");
    return this;
}

bool Member::logout() {
    return System::getInstance()->logout();
}