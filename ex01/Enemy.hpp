#pragma once


#include "Entity.hpp"
#include "Inventory.hpp"

#include "Inventory.hpp"

class Enemy : public Entity{

public:
    Enemy(std::string name, int hp,std::initializer_list<std::string> loot);
    ~Enemy();
    std::string describe() const override;

private:
    int m_hp;
    Inventory m_bag;
};