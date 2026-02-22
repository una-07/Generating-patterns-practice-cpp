#include "Weapon.h"

Weapon::Weapon(const std::string& n, int d) : name(n), damage(d) {}

Weapon::Weapon(const Weapon& other) : name(other.name), damage(other.damage) {}

Weapon* Weapon::Clone() const {
    return new Weapon(*this);
}

std::string Weapon::GetName() const {
    return name;
}

int Weapon::GetDamage() const {
    return damage;
}
