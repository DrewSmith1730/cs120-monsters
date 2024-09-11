//
// Created by drews on 3/18/2021.
//
#include "Sky_Monster.h"

Sky_Monster::Sky_Monster() {
    number_of_wings = rand() % (MAX_NUMBER_WINGS - 1) + 2;
}

Sky_Monster::Sky_Monster(int noe) {
    set_number_of_wings(noe);
}

int Sky_Monster::get_number_of_wings() const {
    return number_of_wings;
}

void Sky_Monster::set_number_of_wings(int now) {
    if (now < 2 || now > MAX_NUMBER_WINGS) {
        now = MAX_NUMBER_WINGS;
    }
    if (now % 2 == 0) {
        number_of_wings = now;
    } else {
        number_of_wings = MAX_NUMBER_WINGS;
    }
}

void Sky_Monster::growth_spurt() {
    if(number_of_wings < MAX_NUMBER_WINGS-1){
        ++++number_of_wings;
    }
}