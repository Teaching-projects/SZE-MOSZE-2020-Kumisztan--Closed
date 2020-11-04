#ifndef FIGHTERS_H
#define FIGHTERS_H

//#include <iostream> 
//#include <fstream>
#include "json.h"
class Fighters
{
    const std::string ID;
    const int maxhp; 
    int hp;
    const int dmg;
public:
    Fighters(std::string _ID, int _maxhp, int _dmg): ID(_ID), maxhp(_maxhp), hp(_maxhp), dmg(_dmg)
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

    void Fight(Fighters &enemy);
};

#endif