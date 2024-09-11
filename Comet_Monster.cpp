#include "Comet_Monster.h"
using namespace std;

Comet_Monster::Comet_Monster() : Sky_Monster() {
}

Comet_Monster::Comet_Monster(int now) : Sky_Monster(now) {
}

string Comet_Monster::scare() {
    if (rand() % 2 == 0) {
        return "*Barreling down at you*";
    }
    return "*" + to_string(number_of_wings) + " wings encompassing you*";
}

void Comet_Monster::growth_spurt() {
    if(number_of_wings < MAX_NUMBER_WINGS - 1){
        ++++number_of_wings;
    }
}