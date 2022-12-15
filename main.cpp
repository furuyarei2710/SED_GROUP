#include <iostream>

#include "string"
using std::string;
using std::cout;
using std::cin;
using std::vector;
#include <vector>

#include "Model/Member.h"
#include "Model/House.h"
#include "Controller/MemberController.h"

int main() {

    vector<Member> memberVector;

    MemberController *memberController;
//    Member * member = new Member("khoi", "khoi nguyen", "0123123", "khoi123");
//    MemberController::

    memberController->registerNewMember(memberVector);
    memberController->login(memberVector);

    return 0;
}
