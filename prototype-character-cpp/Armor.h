#pragma once
#include <string>
#include "ICloneable.h"

class Armor : public ICloneable {
private:
    std::string name;
    int defense;

public:
    Armor(const std::string& n, int d);
    Armor(const Armor& other);

    Armor* Clone() const override;

    std::string GetName() const;
    int GetDefense() const;
};
