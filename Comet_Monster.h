#ifndef PROJECT5ALTERNATE_COMET_MONSTER_H
#define PROJECT5ALTERNATE_COMET_MONSTER_H

#include "Sky_Monster.h"

class Comet_Monster : public Sky_Monster {
public:
    /**
     * Requires: nothing
     * Modifies: number_of_wings 
     * Effects: calls parent default constructor
     */
    Comet_Monster();

    /**
     * Requires: nothing
     * Modifies: number_of_wings 
     * Effects: calls parent non-default constructor
     */
    explicit Comet_Monster(int now);

    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects: randomly returns either "barreling down at you" or "[number_of_wings] wings encompassing you".
     */
    std::string scare() override;

    void growth_spurt();
};


#endif //PROJECT5ALTERNATE_COMET_MONSTER_H
