#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void ajouterResultat(ofstream& file,
                     string groupe,
                     string banque,
                     double taux,
                     int duree,
                     double resultat) {
    file << groupe << ";"
         << banque << ";"
         << taux << ";"
         << duree << ";"
         << resultat << "\n";
}

int main() {
    ofstream file("banques.csv");

    if (!file) {
        cerr << "Erreur : impossible d'ouvrir banques.csv" << endl;
        return 1;
    }

    file << "GROUPE;BANQUE;TAUX;DUREE;RESULTAT\n";

    // ===== Groupe Lucas et Ines =====
    ajouterResultat(file, "Lucas_Ines", "BP", 3, 10, 2414.02);
    ajouterResultat(file, "Lucas_Ines", "BP", 3, 15, 1726.45);
    ajouterResultat(file, "Lucas_Ines", "BP", 3, 20, 1386.49);

    ajouterResultat(file, "Lucas_Ines", "BP", 4, 10, 2531.13);
    ajouterResultat(file, "Lucas_Ines", "BP", 4, 15, 1849.22);
    ajouterResultat(file, "Lucas_Ines", "BP", 4, 20, 1514.95);

    ajouterResultat(file, "Lucas_Ines", "LCL", 3, 10, 2414.02);
    ajouterResultat(file, "Lucas_Ines", "LCL", 3, 15, 1726.45);
    ajouterResultat(file, "Lucas_Ines", "LCL", 3, 20, 1386.49);

    ajouterResultat(file, "Lucas_Ines", "CA", 3, 10, 2414.02);
    ajouterResultat(file, "Lucas_Ines", "CA", 3, 15, 1726.45);
    ajouterResultat(file, "Lucas_Ines", "CA", 3, 20, 1386.49);

    ajouterResultat(file, "Lucas_Ines", "BNP", 3, 10, 2414.02);
    ajouterResultat(file, "Lucas_Ines", "BNP", 3, 15, 1726.45);
    ajouterResultat(file, "Lucas_Ines", "BNP", 3, 20, 1386.49);

    // ===== Exemple test pour un autre groupe =====
    // À remplacer quand les groupes t'envoient leurs valeurs.
    ajouterResultat(file, "Groupe_Test", "BP", 3, 10, 1000.00);
    ajouterResultat(file, "Groupe_Test", "BP", 3, 15, 800.00);
    ajouterResultat(file, "Groupe_Test", "BP", 3, 20, 600.00);

    file.close();

    cout << "Fichier banques.csv cree avec succes." << endl;
    return 0;
}
