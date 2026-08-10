#pragma once

#include "Entity.hpp"
#include <iostream>

class Player : public Entity{

public:
    explicit Player(std::string name);
    ~Player();
    std::string describe() const override;

};