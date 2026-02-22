#include <iostream>
#include "Character.h"

int main() {
    Character* warrior = new Character();
    warrior->health = 150;
    warrior->weapon = new Weapon("Sword", 50);
    warrior->armor = new Armor("Steel Armor", 40);
    warrior->AddSkill(new Skill("Slash", 30));
    warrior->AddSkill(new Skill("Shield Block", 20));

    Character* clone = warrior->Clone();
    clone->health = 200;
    clone->weapon = new Weapon("Axe", 70);

    std::cout << "Original HP: " << warrior->health << std::endl;
    std::cout << "Clone HP: " << clone->health << std::endl;

    delete warrior;
    delete clone;

    return 0;
}

