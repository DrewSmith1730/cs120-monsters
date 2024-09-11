#include "Under_Bed_Monster.h"
using namespace std;

Under_Bed_Monster::Under_Bed_Monster() : Darkness_Monster() {
}

Under_Bed_Monster::Under_Bed_Monster(int noe) : Darkness_Monster(noe) {
}

// implement the scare method here
string Under_Bed_Monster::scare() {
    // random number between 1 and 100
    int random = (rand() % 100) + 1;
    // less than 50
    if (random < 50){
        // grabs you
        return "*Grabs you*";
    } else {
        // number of eyes on you
        string s = "*";
        s += to_string(number_of_eyes);
        s += " eyes watching you*";
        return s;
    }
}