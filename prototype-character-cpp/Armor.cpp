#include "Armor.h"

Armor::Armor(const std::string& n, int d) : name(n), defense(d) {}

Armor::Armor(const Armor& other) : name(other.name), defense(other.defense) {}

Armor* Armor::Clone() const {
    return new Armor(*this);
}

std::string Armor::GetName() const {
    return name;
}

int Armor::GetDefense() const {
    return defense;
}
