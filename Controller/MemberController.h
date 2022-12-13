//
// Created by Nguyen Hoang Minh Khoi on 12/13/22.
//

#ifndef SED_GROUP_MEMBERCONTROLLER_H
#define SED_GROUP_MEMBERCONTROLLER_H




class MemberController {

private:

    vector<Member> memberVector{};

public:

    MemberController() {

    }

    static Member registerNewMember() {
        string userName;
        string fullName;
        string phoneNum;

        cout << "Enter username: ";
        getline(cin, userName);
        cout << "Enter full name: ";
        getline(cin, fullName);
        cout << "Enter phone number: ";
        getline(cin, phoneNum);

        auto * member = new Member(userName, fullName, phoneNum);
        return *member;
    }


    static void showInfo(const Member& member) {
        cout << "Username: " << member.getUserName() << ", full name: " << member.getFullName();
    }

    static void login() {

    }
};


#endif //SED_GROUP_MEMBERCONTROLLER_H
