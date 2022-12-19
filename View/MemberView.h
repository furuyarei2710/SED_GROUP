//
// Created by Nguyen Hoang Minh Khoi on 12/15/22.
//

#ifndef SED_GROUP_MEMBERVIEW_H
#define SED_GROUP_MEMBERVIEW_H


class MemberView {
public:
    void showMemberInfo(Member &member) {
        cout << "Username: " << member.getUserName() << "\n";
        cout << "Full name: " << member.getFullName() << "\n";
        cout << "Phone number: " << member.getPhoneNum() << "\n";
        cout << "Credit points: " << member.getCreditP() << "\n";
        cout << "Rating point: " << member.getRatingPoint() << "\n";
    }
};


#endif //SED_GROUP_MEMBERVIEW_H
