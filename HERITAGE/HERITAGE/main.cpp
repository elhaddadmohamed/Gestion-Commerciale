#include <iostream>
#include "Employe.h"
#include "Commercial.h"
#include "Technicien.h"
#include "Manutentionnaire.h"
#include "Personnel.hpp"
#include <string>
using namespace std;
/*const double Commercial::BASE       =100 ;
const double Commercial::PART       =0.2 ;

const double Technicien::BASE       =2000 ;
const double Technicien::PART       =0.3 ;
const double Technicien::GAIN_UNITE = 10;

const double Manutentionnaire::BASE_SALAIRE_HORAIRE = 10;*/

int main()
{

    Personnel P;
    P.embaucher( new Commercial ("Amine","Lol",20,2,9999)  );
    P.embaucher( new Technicien ("Fatih","Kamil",28,3,50)  );
    P.embaucher( new Manutentionnaire("Hajar","topkek",35,5,8)  );
    
    P.afficher_salaires();
    cout<<endl << endl ;
    P.licensie(new Technicien("Fatih","Kamil",34,3,50));
    P.afficher_salaires();
    cout<<endl << endl ;
    
    
    //cout<<" ---> Le salaire moyen est : " << P.salaire_moyen();
    
    
    //cout<<endl << endl ;
    /*Employe* T[5] ;
     
     T[0] = new Commercial("Amine","Lol",20,2,9999);
     T[1] = new Technicien("Fatih","Kamil",28,3,50);
     T[2] = new Manutentionnaire("Hajar","topkek",35,5,8);
     
     for(int i=0; i<3 ; i++){
     T[i]->Afficher();
     cout <<"Salaire de Base    --> " << T[i]->calculer_base_salaire() <<endl;
     cout <<"Salaire Anciennete --> " << T[i]->calculer_salaire() <<endl ;
     cout <<"---------------------------------------------------------"<<endl;
     
     cout <<endl;
     
     }*/
    return 0;
}
