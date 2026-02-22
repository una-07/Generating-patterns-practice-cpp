#include "Character.h"

Character::Character()
    : health(100), strength(10), agility(10), intelligence(10),
      weapon(nullptr), armor(nullptr) {}

Character::Character(const Character& other)
    : health(other.health),
      strength(other.strength),
      agility(other.agility),
      intelligence(other.intelligence) {

    weapon = other.weapon ? other.weapon->Clone() : nullptr;
    armor = other.armor ? other.armor->Clone() : nullptr;

    for (auto s : other.skills) {
        skills.push_back(s->Clone());
    }
}

Character::~Character() {
    delete weapon;
    delete armor;
    for (auto s : skills)
        delete s;
}

Character* Character::Clone() const {
    return new Character(*this);
}

void Character::AddSkill(Skill* skill) {
    skills.push_back(skill);
}
