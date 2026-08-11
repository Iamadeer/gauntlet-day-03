#include "Enemy.hpp"

Enemy::Enemy(std::string name, int hp): Entity(std::move(name),std::move(hp)){};

std::string Enemy::describe() const {
    std::string e = "Enemy " + m_name + " (hp " + std::to_string(currenthp()) + "/" + std::to_string(maxHp()) + ") ";
    if (!Enemy::isAlive()){
        e = e + "[Dead]";
    }
    return e;
}