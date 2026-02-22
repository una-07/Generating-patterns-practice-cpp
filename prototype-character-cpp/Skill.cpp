#include "Skill.h"

Skill::Skill(const std::string& n, int p) : name(n), power(p) {}

Skill::Skill(const Skill& other) : name(other.name), power(other.power) {}

Skill* Skill::Clone() const {
    return new Skill(*this);
}

std::string Skill::GetName() const {
    return name;
}

int Skill::GetPower() const {
    return power;
}
