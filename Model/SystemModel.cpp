//
// Created by Nguyen Hoang Minh Khoi on 12/12/22.
//


#include "SystemModel.h"
Member::Member(string userName, string fullName, string phoneNum, string passWord)
    : userName(userName), fullName(fullName), phoneNum(phoneNum), password(passWord) {};

void Member::showInfo() {
    cout << "Username: " << this->userName <<"\n";
    cout << "Full name: " << this->fullName <<"\n";
    cout << "Phone number: " << this->phoneNum <<"\n";
    cout << "Credit point: " << this->creditP << std::endl;
}

// Getter and setter function


Member::~Member() {

}

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

void Member::setId(const string &id) {
    Member::id = id;
}

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


//House class
House::House(string location, string description, int pricePerDay, Member *owner)
    : location(location), description(description), pricePerDay(pricePerDay), owner(owner),
    occupierRating(0.0), available(true){}
//Getter and setter
//Getter
const string &House::getLocation() const {
    return location;
}

const string &House::getDescription() const {
    return description;
}

bool House::isAvailable() const {
    return available;
}

int House::getPricePerDay() const {
    return pricePerDay;
}

double House::getOccupierRating() const {
    return occupierRating;
}

Member *House::getOwner() const {
    return owner;
}

//Setter
void House::setLocation(const string &location) {
    House::location = location;
}

void House::setDescription(const string &description) {
    House::description = description;
}

void House::setAvailable(bool available) {
    House::available = available;
}

void House::setPricePerDay(int pricePerDay) {
    House::pricePerDay = pricePerDay;
}

void House::setOccupierRating(double occupierRating) {
    House::occupierRating = occupierRating;
}

void House::setOwner(Member *owner) {
    House::owner = owner;
}

House::~House() {

}

Guest::Guest() {}



Guest::~Guest() {}
