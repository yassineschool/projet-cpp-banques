#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

void ajouterResultatCSV(string groupe,
                        double capital,
                        string banque,
                        double taux,
                        int duree,
                        double resultat) {

    // Vérifie si le fichier existe déjà
    ifstream testFile("banques.csv");
    bool fichierExiste = testFile.good();
    testFile.close();

    // Ouvre le fichier en mode ajout
    ofstream file("banques.csv", ios::app);

    if (!file) {
        cerr << "Erreur : impossible d'ouvrir le fichier." << endl;
        return;
    }

    // Écrit l'en-tête UNE SEULE FOIS
    if (!fichierExiste) {
        file << "GROUPE;CAPITAL;BANQUE;TAUX;DUREE;RESULTAT\n";
    }

    // Ajout des données
    file << groupe << ";"
         << fixed << setprecision(2)
         << capital << ";"
         << banque << ";"
         << taux << ";"
         << duree << ";"
         << resultat << "\n";

    file.close();
}

int main() {

    ajouterResultatCSV("Lucas_Ines", 250000, "BP", 3, 10, 2414.02);

    ajouterResultatCSV("Lucas_Ines", 250000, "BP", 3, 15, 1726.45);

    ajouterResultatCSV("Gregan_Nermine", 50000, "CA", 4, 20, 605.98);

    cout << "Resultats ajoutes dans banques.csv" << endl;

    return 0;
}
