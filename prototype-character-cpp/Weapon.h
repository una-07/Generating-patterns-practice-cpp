#pragma once
#include <string>
#include "ICloneable.h"

class Weapon : public ICloneable {
private:
    std::string name;
    int damage;

public:
    Weapon(const std::string& n, int d);
    Weapon(const Weapon& other);

    Weapon* Clone() const override;

    std::string GetName() const;
    int GetDamage() const;
};
