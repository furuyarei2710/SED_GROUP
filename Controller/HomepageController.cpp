//
// Created by Macbook Pro Silver on 27/12/2022.
//

#include "HomepageController.h"
#include "../Model/G"

//
// Created by Macbook Pro Silver on 27/12/2022.
//


#include <iostream>
#include "string"

using std::string;
using std::cout;
using std::cin;

using namespace HomepageComponent;

namespace HomepageComponent{
    int optionInput() {
        string option;
        cout << ("Enter the option: ");
        getline(cin, option);

        return std::stoi(option);
    }

    void displayGuestHomepage(){
            cout << "\n—----------------- Guest Homepage —-----------------\n"
                    "This is your menu:\n"
                    "\t0.  Exit\n"
                    "\t1.  Regisger\n"
                    "\t2.  Login\n"
                    "\t3.  View house details.\n";
            int option = optionInput();

            switch (option){
                case 0:
                    exit(1);
                    break;
                case 1:
                    /// view Information
                    cout << "Register\n";
                    break;
                case 2:
                    /// Unlist current house
                    cout << "Login\n";

                    break;
                case 3:
                    /// Search available house
                    cout << "View available houses \n";
                    break;
                default:
                    cout << "Invalid option, please try again....\n";
                    displayGuestHomepage();
            }
        }

    void displayMemberHomepage(){
        cout << "\n—----------------- Homepage —-----------------\n"
                "This is your menu:\n"
                "\t0.  Exit\n"
                "\t1.  View Information\n"
                "\t2.  List available houses.\n"
                "\t3.  Unlist current house\n"
                "\t4.  Search available house.\n";
        int option = optionInput();

        switch (option){
            case 0:
                exit(1);
                break;
            case 1:
                /// view Information
                cout << "View information\n";
                break;
            case 2:
                /// List available house
                cout << "List available house \n";
                break;
            case 3:
                /// Unlist current house
                cout << "Unlist current house \n";
                break;
            case 4:
                /// Search available house
                cout << "Search available house\n";
                break;
            default:
                cout << "Invalid option, please try again....\n";
                displayMemberHomepage();
        }
    }

    void displayAdminHomepage(){
        cout << "\n—----------------- Admin Homepage —-----------------\n"
                "\t0.  Exit\n"
                "\t1.  Add new account\n"
                "\t2.  Add new house\n"
                "\t3.  View all accounts\n"
                "\t4.  View all houses\n";

        int option = optionInput();

        switch (option){
            case 0:
                exit(1);
                break;
            case 1:
                /// view Information
                cout << "Add new account\n";
                break;
            case 2:
                /// List available house
                cout << "Add new house \n";
                break;
            case 3:
                /// Unlist current house
                cout << "View all accounts \n";
                break;
            case 4:
                /// Search available house
                cout << "View all houses\n";
                break;
            default:
                cout << "Invalid option, please try again....\n";
                displayAdminHomepage();
        }
    }

    void displayAppHomepage(){
        cout << "EEET2482/COSC2082 ASSIGNMENT \n"
                "VACATION HOUSE EXCHANGE APPLICATION\n"
                "\n"
                "Instructors: Mr. Linh Tran & Phong Ngo\n"
                "Group: Group Name\n"
                "sXXXXXXX, Student Name\n"
                "sXXXXXXX, Student Name\n"
                "sXXXXXXX, Student Name\n"
                "\n"
                "Use the app as 1. Guest   2. Member   3. Admin\n";
        int option = optionInput();

        switch (option){
            case 0:
                exit(1);
            case 1:
                displayGuestHomepage();
                break;
            case 2:
                displayMemberHomepage();
                break;
            case 3:
                displayAdminHomepage();
                break;
            default:
                cout << "Invalid option, please try again....\n";
                displayMemberHomepage();
        }
    }

}

