#ifndef FIGHTERS_H
#define FIGHTERS_H

#include <iostream> 
#include <fstream>

class Fighters
{
    const std::string ID;
    double maxhp; 
    double dmg;
    int hp;
    int xp = 0;
    int level = 1;
public:
    Fighters(std::string _ID, int _maxhp, int _dmg): ID(_ID), maxhp(_maxhp), dmg(_dmg), hp(_maxhp)
    {}
    ~Fighters()
    {}
    
    static Fighters parseUnit(const std::string &jsonfile);

    std::string getID() const
    { 
        return ID;
    }
   
    int getHP() const
    {
        return hp;
    }
    
    int getDmg() const
    {
        return dmg;
    }

    int getXP() const
    {
        return xp;
    }

    int getLevel() const
    {
        return level;
    }

    void Fight(Fighters &enemy);
};

#endif