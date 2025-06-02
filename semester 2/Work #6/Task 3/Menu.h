// Menu.h
#ifndef MENU_H
#define MENU_H

#include <vector>
#include "AString.h"
#include "Action.h"

class Factory;

typedef enum { AddObj, DelObj, WorkWithObj, Exit } JobMode;

class Menu {
public:
    Menu(std::vector<Action*>);
    JobMode SelectJob() const;
    AString* SelectObject(const Factory&) const;
    Action* SelectAction(const AString*) const;
    static int SelectItem(int);
    
private:
    std::vector<Action*> pAct;
};

#endif // MENU_H