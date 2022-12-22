//
// Created by Nguyen Hoang Minh Khoi on 12/13/22.
//

#include "SystemController.h"
#define sysLog(x) cout << x;

MemberController::MemberController() {};

Member * GuestController::registerNewMember(vector<Member> &memberList) {

    string userName;
    string fullName;
    string phoneNum;
    string password;

    sysLog("Enter username: ");
    getline(cin, userName);
    sysLog("Enter full name: ");
    getline(cin, fullName);
    sysLog("Enter phone number: ");
//    cout << "Enter phone number: ";
    getline(cin, phoneNum);
    sysLog("Enter password: ")
//    cout << "Enter password: ";
    getline(cin, password);

    auto* member = new Member(userName, fullName, phoneNum, password);
    memberList.push_back( *member);
    return member;
}

Member * GuestController::login(vector<Member> &memberList) {
    Member * member;
    string username;
    string password;

    sysLog("Please enter your username and password to login \n"      )

        int count = 0;
        bool userNotFound = true;
        bool loginSuccess = false;

        while (userNotFound) {
            sysLog("Username: ");
            getline(cin, username);
            for (auto & i : memberList) {
                if (i.getUserName() == username) {
                    userNotFound = false;
                    member = &i;
                }
            }
            if (userNotFound) {
                sysLog("This username does not exist, please try again \n");
            }
        }

        while (count < 4) {
            sysLog("Password: ");
            getline(cin, password);
            if (member->getPassword() ==  password) {
                loginSuccess = true;
                break;
            }
            else {
                sysLog("Password does not match, please try again \n");
                count += 1;
            }
        }

        if (loginSuccess) {
            sysLog("Login successfully! \n");
            return member;

        } else {
            sysLog("You have failed 4 times, please try again later \n");
            member = nullptr;
            return member;
        }

    }


