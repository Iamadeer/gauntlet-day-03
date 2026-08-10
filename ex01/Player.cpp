#include "Player.hpp"

Player::Player(std::string name) : Entity(std::move(name)){
    std::cout << "+ Player " << m_name << '\n';
};

Player::~Player(){
    std::cout << "- PLayer  " << m_name << '\n';
}

std::string Player::describe() const{
    return "Player " + m_name;
}