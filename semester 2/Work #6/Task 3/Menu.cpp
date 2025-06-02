// Menu.cpp
#include <iostream>
#include <limits>
#include "Menu.h"
#include "Factory.h"
using namespace std;

Menu::Menu(vector<Action*> _pAct) : pAct(_pAct) {}

JobMode Menu::SelectJob() const {
    cout << "======================================\n";
    cout << "Select one of the following job modes:\n";
    cout << "1. Add object" << endl;
    cout << "2. Delete object" << endl;
    cout << "3. Work with object" << endl;
    cout << "4. Exit" << endl;
    
    int item = SelectItem(4);
    return static_cast<JobMode>(item - 1);
}

AString* Menu::SelectObject(const Factory& fctry) const {
    int nItem = static_cast<int>(fctry.pObj.size());
    if (!nItem) {
        cout << "There are no objects." << endl;
        cin.get();
        return nullptr;
    }
    
    cout << "\n";
    cout << "Select one of the following Object:\n";
    for (int i = 0; i < nItem; ++i) {
        cout << i + 1 << ". " << fctry.pObj[i]->GetName() << endl;
    }
    
    int item = SelectItem(nItem);
    return fctry.pObj[item - 1];
}

Action* Menu::SelectAction(const AString* pObj) const {
    if (!pObj) return nullptr;
    
    int nItem = static_cast<int>(pAct.size());
    cout << "\n";
    cout << "Select one of the following Actions:\n";
    for (int i = 0; i < nItem; ++i) {
        cout << i + 1 << ". " << pAct[i]->GetName() << endl;
    }
    
    int item = SelectItem(nItem);
    return pAct[item - 1];
}

int Menu::SelectItem(int nItem) {
    cout << "\n";
    int item;
    while (true) {
        cin >> item;
        if ((item > 0) && (item <= nItem) && (cin.peek() == '\n')) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            break;
        }
        else {
            cout << "Error (must be number from 1 to " << nItem << "): " << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    return item;
}