#ifndef PERSONNEL_H
#define PERSONNEL_H
#include "employe.h"
#include <vector>
using namespace std;

class Personnel
{
    vector<Employe*> TabEmploye;
public:
    void embaucher(Employe* newbie);
    void licensie(Employe* newbie);
    void licensie();
    void afficher_salaires();
    double salaire_moyen();
    
    
};

#endif // PERSONNEL_H

