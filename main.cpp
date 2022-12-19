#include <iostream>

#include "string"
using std::string;
using std::cout;
using std::cin;
using std::vector;
#include <vector>

//#include "Model/Member.h"
//#include "Model/Owner.h"
//#include "Model/House.h"
#include "Controller/MemberController.h"
#include "View/MemberView.h"

int main() {

    vector<Member> memberVector;
//    Member *member;
    MemberController *memberController;
    MemberView *memberview;
//    Member * member = new Member("khoi", "khoi nguyen", "0123123", "khoi123");
//    MemberController::

    memberController->registerNewMember(memberVector);
    Member* member  = memberController->login(memberVector);
    memberview->showMemberInfo(*member);
    return 0;
}
