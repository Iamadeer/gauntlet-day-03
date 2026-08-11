#pragma once

#include <string>
#include <iostream>
class Entity {
public:
    explicit Entity(std::string name, int maxHp);
    virtual void takeDamage(int amount);
    void heal (int amount);
    bool isAlive() const;
    int currenthp() const;
    int maxHp() const;
    virtual std::string describe() const= 0;   
    virtual ~Entity();                          
protected:
    std::string m_name;

private:
    int m_maxHp;
    int m_currentHp;
};