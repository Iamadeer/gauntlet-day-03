#include "Player.hpp"

Player::Player(std::string name,int maxHp, int armor) : Entity(std::move(name),std::move(maxHp)), m_armor(std::move(armor)){};

void Player::takeDamage(int amount){
    int reduced = std::max(1, amount - m_armor);
    std::cout << m_name << "'s armor soaks " << (amount - reduced) << '\n';
    Entity::takeDamage(reduced);
}

std::string Player::describe() const{
    return "Player " + m_name+ " (hp " + std::to_string(currenthp()) + "/" + std::to_string(maxHp()) + ", armor " + std::to_string(m_armor) + ")";
}