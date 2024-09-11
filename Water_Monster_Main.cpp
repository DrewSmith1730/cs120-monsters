#include "Lake_Monster.h"
#include "Sea_Monster.h"
#include <ctime>
#include <iostream>
#include <memory>
#include <vector>
using namespace std;

int get_int_input(string prompt, string invalid, int low, int high);
void monster_mode();
void player_mode();

int main() {
    int choice = get_int_input("Enter 1 to play as a water monster or 2 to play as a person: ",
                             "Invalid choice. Enter 1 or 2: ",
                             1,
                             2);

    if (choice == 1) {
        cout << "You monster!" << endl;
        monster_mode();
    } else {
        cout << "Get ready to face the water monsters!" << endl;
        player_mode();
    }
    return 0;
}

int get_int_input(string prompt, string invalid, int low, int high) {
    cout << prompt;
    int choice = 0;
    string junk;
    while (!(cin >> choice) || choice < low || choice > high) {
        cout << invalid;
        cin.clear();
        getline(cin, junk);
    }
    return choice;
}

void monster_mode() {
    Lake_Monster champ(0);
    // Print welcome message that includes the name Champ the Lake Monster
    cout << "Welcome to water monsters Monster mode." << endl;
    cout << "Champ the lake monster welcomes you." << endl;
    // Create a vector of unique pointers to Water Monsters and name it "friends"
    vector<unique_ptr<Water_Monster>> friends;
    // Populate the vector with 10 monsters, choosing Lake vs Sea randomly
    for(int i = 0; i < 10; i++){
        // random number to pick lake or sea
        int random = rand() % 2;
        if (random == 1){
            // add a sea monster
            friends.push_back(make_unique<Sea_Monster>());
        } else {
            // add a lake monster
            friends.push_back(make_unique<Lake_Monster>());
        }
    }
    // Call get_int_input to prompt the user to choose 1 for meal time, 2 for scare time, or 3 to exit.
    int input = get_int_input("Enter an input 1 for meal time, 2 for scare time, and 3 to exit: ", "Invalid enter a value between 1 and 3: ", 1, 3);
    // Create a loop that runs until the user chooses option 3:
    while (input != 3) {
        //      - If 1 is chosen, loop through populated vector and call eat_person on each.
        if (input == 1) {
            for (unique_ptr<Water_Monster> &w : friends) {
                //          - This is NOT an example of polymorphism. Why? Answer in your README file.
                w->eat_person();
            }
        //      - If 2 is chosen, print message saying "This is how my friends scare:"
        } else if(input == 2) {
            cout << "This is how my friends scare: " << endl;
            //          - Loop through the populated vector and call the scare method on each, printing the return values
            for (unique_ptr<Water_Monster> &w : friends) {
                //          - This IS an example of polymorphism. Why? Answer in your README file.
                string s = w->scare();
                cout << s << endl;
            }
            //          - Print a message saying "This is how Champ scares:", then call and print the scare method on champ.
            cout << "This is how Champ scares: " << endl;
            string s = champ.scare();
            cout << s << endl;
        }
        //      - Call get_int_input again with the same options as before.
        input = get_int_input("Enter an input 1 for meal time, 2 for scare time, and 3 to exit: ", "Invalid enter a value between 1 and 3: ", 1, 3);
    }
}

void player_mode() {
    vector<unique_ptr<Water_Monster>> monsters;
    srand(time(NULL));
    for (int i = 0; i < 10; ++i) {
        if (rand() % 2) {
            monsters.push_back(make_unique<Lake_Monster>());
        } else {
            monsters.push_back(make_unique<Sea_Monster>());
        }
    }
    int index = get_int_input("Enter a number from 0 to " + to_string(monsters.size()-1) + ": ",
                            "Invalid input. Try again: ",
                            0,
                            monsters.size()-1);
    cout << "The monster approaches: " << monsters[index]->scare() << endl;
    int choice = get_int_input("Choose a number between 1 and 3: ",
                             "Invalid input. Pick a number from 1 to 3: ",
                             1,
                             3);
    if (rand() % 3 + 1 == choice) {
        cout << "You were lucky and beat the monster!" << endl;
        monsters.erase(monsters.begin() + index);
    } else {
        cout << "The monster ate you!" << endl;
        monsters[index]->eat_person();
    }
}