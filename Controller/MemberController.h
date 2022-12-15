//
// Created by Nguyen Hoang Minh Khoi on 12/13/22.
//

#ifndef SED_GROUP_MEMBERCONTROLLER_H
#define SED_GROUP_MEMBERCONTROLLER_H




class MemberController {

public:



    MemberController() {
    }

    void registerNewMember(vector<Member>& memberVect) {

        string userName;
        string fullName;
        string phoneNum;
        string password;

        cout << "Enter username: ";
        getline(cin, userName);
        cout << "Enter full name: ";
        getline(cin, fullName);
        cout << "Enter phone number: ";
        getline(cin, phoneNum);
        cout << "Enter password: ";
        getline(cin, password);

        Member * member = new Member(userName, fullName, phoneNum, password);
        memberVect.push_back(*member);
    }

    void login(vector<Member>& memberVect) {
        Member * member;
        string username;
        string password;

        cout << "Please enter your username and password to login \n";

        int count = 0;
        bool userNotFound = true;
        bool loginSuccess = false;

        while (userNotFound) {
            cout << "Username: ";
            getline(cin, username);
            for (auto & i : memberVect) {
                if (i.getUserName() == username) {
                    userNotFound = false;
                    member = &i;
                }
            }
            if (userNotFound) {
                cout << "This username does not exist \n";
            }
        }

        while (count < 4) {
            cout << "Password: ";
            getline(cin, password);
            if (member->getPassword() ==  password) {
                loginSuccess = true;
                break;
            }
            else {
                cout << "Password does not match, please try again \n";
                count += 1;
            }
        }

        if (loginSuccess) {
            cout << "Login successfully! \n";

        } else {
            cout << "You have failed 4 times, please try again later \n";
            member = nullptr;
        }
    }

    void viewInfo() {

    }

    virtual ~MemberController() {

    }

};


#endif //SED_GROUP_MEMBERCONTROLLER_H
