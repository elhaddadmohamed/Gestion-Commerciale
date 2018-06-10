//
//  Personnel.cpp
//  HERITAGE
//
//  Created by EL HADDAD  on 25/05/2018.
//  Copyright © 2018 EL HADDAD MOHAMMED. All rights reserved.
//
#include "Personnel.hpp"
#include <iostream>
using namespace std;

void Personnel::embaucher(Employe* newbie){
    TabEmploye.push_back(newbie);
}

void Personnel::licensie(Employe* newbie){
    vector<Employe*>::iterator it;
    for( it = TabEmploye.begin() ; it!=TabEmploye.end(); it++){
        if( (*(*it)) ==(*newbie) )
    {
        TabEmploye.erase(it);
        cout << "Suppression Reussie."<<endl; return ;
    }
    }
        cout << "Suppression Echouee. Employe Introuvable" << endl;
    }


void Personnel::licensie(){
    TabEmploye.clear();
    cout <<"Suppression Reussie. Tous les EmployÈs ont ÈtÈ supprimÈs!" << endl;
}

void Personnel::afficher_salaires(){
    for( vector<Employe*>::iterator it= TabEmploye.begin() ; it!=TabEmploye.end(); it++){
        (*it)->Afficher();
        cout << "Le Salaire est : " << (*it)->calculer_salaire() <<endl;
        cout << "##################################################################"<<endl;
    }
}

double Personnel::salaire_moyen(){
    double sal_moyen=0;
    for( vector<Employe*>::iterator it= TabEmploye.begin() ; it!=TabEmploye.end(); it++){
        sal_moyen+=(*it)->calculer_salaire();
    }
    sal_moyen=sal_moyen/TabEmploye.size();
    return sal_moyen;
}

