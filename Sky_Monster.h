//
// Created by drews on 3/18/2021.
//

#ifndef MONSTERS_SKY_MONSTER_H
#define MONSTERS_SKY_MONSTER_H

#include <string>

class Sky_Monster {
public:
    /**
     * Requires: nothing
     * Modifies: number of eyes
     * Effects: sets number of eyes to a random int in range 2-100
     */
    Sky_Monster();

    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects: does nothing
     */
    virtual ~Sky_Monster() = default;

    /**
     * Requires: number of eyes
     * Modifies: number of eyes
     * Effects: calls set_number_of_eyes with noe
     */
     explicit Sky_Monster(int noe);

     /**
      * Requires: nothing
      * Modifies: nothing
      * Effects: returns number_of_eyes
      */
     virtual int get_number_of_wings() const;

     /**
      * Requires: nothing
      * Modifies: number_of_eyes 
      * Effects: sets number_of_eyes to noe if noe is in range 2-100.
      *          otherwise sets number_of_eyes to 100.
      */
      void set_number_of_wings(int now);

      // growth spurt method
      virtual void growth_spurt();

      // pure virtual method to return a scary string
      virtual std::string scare() = 0;

    static const int MAX_NUMBER_WINGS = 100;
protected:
    int number_of_wings;
};

#endif //MONSTERS_SKY_MONSTER_H
