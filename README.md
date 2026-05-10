# Projet-CPP-banques

## Description du projet 

Ce projet en C++ permet de simuler des prêts bancaires selon plusieurs paramètres :

- banque
- taux d’intérêt
- durée du prêt
- capital emprunté

Le programme calcule les mensualités associées aux différentes simulations et exporte automatiquement les résultats dans un fichier CSV.

---

## Objectif

L’objectif principal du projet est de :

- comparer différentes offres de prêts bancaires
- centraliser les résultats des différents groupes
- générer automatiquement un fichier CSV exploitable dans Excel / OpenOffice

---

## Fonctionnement

Chaque groupe possède son propre programme de simulation.

Une fonction commune :

```cpp
ajouterResultatCSV(...)
```

permet d’ajouter automatiquement les résultats dans le fichier :

```text
banques.csv
```

à chaque exécution d’une simulation.

---

## Fonction CSV utilisée

```cpp
void ajouterResultatCSV(string groupe,
                        double capital,
                        string banque,
                        double taux,
                        int duree,
                        double resultat)
```

Cette fonction :

- vérifie si le fichier CSV existe
- crée automatiquement le fichier si nécessaire
- ajoute les nouvelles données sans supprimer les anciennes
- écrit l’en-tête une seule fois

---

## Structure du fichier CSV

```text
GROUPE;CAPITAL;BANQUE;TAUX;DUREE;RESULTAT
```

Exemple :

```text
Lucas_Ines;250000.00;BP;3.00;10;2414.02
Gregan_Nermine;50000.00;CA;4.00;20;605.98
```

---

## Compilation

Compiler le programme avec :

```bash
g++ main.cpp -o programme
```

---

## Exécution

Lancer le programme :

```bash
.\programme.exe
```

Le fichier `banques.csv` est automatiquement créé ou mis à jour.

---

## Technologies utilisées

- C++
- Git / GitHub
- Excel / OpenOffice Calc

---

## Organisation du projet

Chaque groupe réalise ses propres calculs de mensualités.

Le rôle du système CSV est de :

- standardiser les données
- centraliser les résultats
- permettre la comparaison des simulations

Chaque groupe doit appeler :

```cpp
ajouterResultatCSV(...)
```

après chaque calcul de mensualité.
