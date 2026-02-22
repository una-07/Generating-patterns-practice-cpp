#pragma once
#include <string>
#include "ICloneable.h"

class Skill : public ICloneable {
private:
    std::string name;
    int power;

public:
    Skill(const std::string& n, int p);
    Skill(const Skill& other);

    Skill* Clone() const override;

    std::string GetName() const;
    int GetPower() const;
};
