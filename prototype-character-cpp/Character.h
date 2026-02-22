#pragma once
#include <vector>
#include "ICloneable.h"
#include "Weapon.h"
#include "Armor.h"
#include "Skill.h"

class Character : public ICloneable {
public:
    int health;
    int strength;
    int agility;
    int intelligence;

    Weapon* weapon;
    Armor* armor;
    std::vector<Skill*> skills;

    Character();
    Character(const Character& other);
    ~Character();

    Character* Clone() const override;

    void AddSkill(Skill* skill);
};
