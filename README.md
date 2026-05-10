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

## Structure du fichier CSV

```text
GROUPE;CAPITAL;BANQUE;TAUX;DUREE;RESULTAT
```

---

## Compilation

```bash
g++ main.cpp -o programme
```

---

## Exécution

```bash
.\programme.exe
```

---

## Technologies utilisées

- C++
- Git / GitHub
- OpenOffice Calc
