//
// Created by Nguyen Hoang Minh Khoi on 12/13/22.
//

#ifndef SED_GROUP_SYSTEMCONTROLLER_H
#define SED_GROUP_SYSTEMCONTROLLER_H

#include "../Model/SystemModel.h"

//prototype
class GuestController;
class MemberController;
class HouseController;


class GuestController {
public:
    Member* registerNewMember(vector<Member> &memberList);

    Member* login(vector<Member> &memberList);
};

class MemberController : public GuestController{
public:

    explicit MemberController();



    bool logout();

    bool verifyPassword(string password);
    bool changePassword();

    bool updateInfo();
    bool deleteProfile();
//    {
//        Member * member;
//        string username;
//        string password;
//
//        cout << "Please enter your username and password to login \n";
//
//        int count = 0;
//        bool userNotFound = true;
//        bool loginSuccess = false;
//
//        while (userNotFound) {
//            cout << "Username: ";
//            getline(cin, username);
//            for (auto & i : memberList) {
//                if (i.getUserName() == username) {
//                    userNotFound = false;
//                    member = &i;
//                }
//            }
//            if (userNotFound) {
//                cout << "This username does not exist \n";
//            }
//        }
//
//        while (count < 4) {
//            cout << "Password: ";
//            getline(cin, password);
//            if (member->getPassword() ==  password) {
//                loginSuccess = true;
//                break;
//            }
//            else {
//                cout << "Password does not match, please try again \n";
//                count += 1;
//            }
//        }
//
//        if (loginSuccess) {
//            cout << "Login successfully! \n";
//            return member;
//
//        } else {
//            cout << "You have failed 4 times, please try again later \n";
//            member = nullptr;
//            return member;
//        }
//
//    }

//    House* registerHouse(vector<House> &houseList, auto &member) {
//
//        string location;
//        string description;
//        cout << "Enter your house's location: ";
//        getline(cin, location);
//        if (member.getHouse()->getLocation() == location) {
//            cout << "You have already add this location \n";
//            return nullptr;
//        }
//
//        cout << "Enter description: ";
//        getline(cin, description);
//
//        auto *house = new House(location, description);
//        houseList.push_back(*house);
//        member.setHouse(house);
//        house->setOwner(member);
//        cout << "Registered house successfully \n";
//
//        return house;
//    }


    virtual ~MemberController() {

    }

};


#endif //SED_GROUP_SYSTEMCONTROLLER_H
