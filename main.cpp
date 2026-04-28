#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void ajouterResultat(ofstream& file, string banque, double taux, int duree, double resultat) {
    file << banque << ";" << taux << ";" << duree << ";" << resultat << "\n"; 
}

int main() {
    ofstream file("banques.csv"); 

    if (!file) { // vérifie si l'ouverture du fichier a échoué
        cerr << "Erreur : impossible d'ouvrir le fichier." << endl;
        return 1;
    }

    file << "BANQUE;TAUX;DUREE;RESULTAT\n";

    // exemples de données de Lucas et Ines avec capital = 250000
    ajouterResultat(file, "BP", 3, 10, 2414.02);
    ajouterResultat(file, "BP", 3, 15, 1726.45);
    ajouterResultat(file, "BP", 3, 20, 1386.49);

    ajouterResultat(file, "BP", 4, 10, 2531.13);
    ajouterResultat(file, "BP", 4, 15, 1849.22);
    ajouterResultat(file, "BP", 4, 20, 1514.95);

    ajouterResultat(file, "LCL", 3, 10, 2414.02);
    ajouterResultat(file, "LCL", 3, 15, 1726.45);
    ajouterResultat(file, "LCL", 3, 20, 1386.49);

    ajouterResultat(file, "CA", 3, 10, 2414.02);
    ajouterResultat(file, "CA", 3, 15, 1726.45);
    ajouterResultat(file, "CA", 3, 20, 1386.49);

    ajouterResultat(file, "BNP", 3, 10, 2414.02);
    ajouterResultat(file, "BNP", 3, 15, 1726.45);
    ajouterResultat(file, "BNP", 3, 20, 1386.49);

    file.close(); 

    cout << "Fichier banques.csv créé avec succès." << endl; // message utilisateur
    return 0;
}