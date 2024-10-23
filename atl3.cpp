#include <iostream>
#include <string> 
using namespace std;

class Voiture {
public:
    string marque, modele;
    int annee, kilometrage, vitesse ;

    Voiture() : marque("any"), modele("anym"), annee(2000), kilometrage(0), vitesse(100) {}


    Voiture(const string& marque, const string& modele, int annee, int kilometrage, int vitesse) :
        marque(marque), modele(modele), annee(annee), kilometrage(kilometrage), vitesse(vitesse) {}
    
    void acceler(float incresse){
        vitesse += incresse ; 
    }
    void freiner(float decresse){
        vitesse -= decresse ; 
    }
    void afficherInfo(){
        cout << "Marque: " << marque << endl;
        cout << "Modele: " << modele << endl;
        cout << "Annee: " << annee << endl;
        cout << "Kilometrage: " << kilometrage << endl;
        cout << "Vitesse: " << vitesse << endl;
    }
    void avancer(float distance){
        kilometrage += distance;
    }
    ~Voiture() { cout << "La voiture " << marque << " " << modele << " a été Destructe." << endl;}
};