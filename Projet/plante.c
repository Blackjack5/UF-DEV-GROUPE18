#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "plante.h"

int accueil()
{
    system("color A0");
    int choixmenu;
    printf("1.Choisir une plante\n");
    printf("2.Ajouter une plante\n");
    printf("3.Info sur ma plante\n");
    scanf("%d", &choixmenu);
    switch(choixmenu)
    {
    case 1:
        listecategorie();
        break;
    case 2:
        printf("En cours de développement\n");
        accueil();
        break;
    case 3:
        maplante();
        break;
    default:
        printf("Choix indisponible \n");
        accueil();
        break;
    }
}
int maplante()
{
    int choixmaplante;
    printf("Que voulez vous savoir sur la plante ?\n");
    printf("1.Etat de la plante\n");
    printf("2.Recommandation\n");
    printf("3.Plannification de plantation \n");
    printf("4.Retour a l'accueil\n");
    scanf("%d", &choixmaplante);
    switch(choixmaplante)
    {
    case 1:
        printf("Plante en bonne sante\n");
        maplante();
        break;
    case 2:
        printf("exposer la plante au soleil le plus souvent possible\n");
        maplante();
        break;
    case 3:
        printf("arroser la plante 2 fois par jours, matin et soir\n");
        maplante();
        break;
    case 4:
        accueil();
        break;
    default:
        printf("Choix Indisponible \n");
        maplante();
        break;
    }
}
int listecategorie()
{
    int choixcategorie;
    printf("Choisissez un type de plante\n");
    printf("1.Categorie 1\n");
    printf("2.Categorie 2\n");
    printf("3.Categorie 3\n");
    printf("4.Retour ->\n");
    scanf("%d", &choixcategorie);
    switch(choixcategorie)
    {
    case 1:
        plantetype1();
        break;
    case 2:
        plantetype2();
        break;
    case 3:
        plantetype3();
        break;
    case 4:
        accueil();
        break;
    default:
        printf("Choix Indisponible \n");
        listecategorie();
        break;
    }
}
int plantetype1()
{
    int choixplante;
    printf("Choisissez une plante\n");
    printf("1.Plante 1\n");
    printf("2.Plante 2\n");
    printf("3.Retour au choix des categories\n");
    scanf("%d", &choixplante);
    switch(choixplante)
    {
    case 1:;
        plante1T1();
        break;
    case 2:
        plante2T1();
        break;
    case 3:
        listecategorie();
        break;
    default:
        printf("Ce choix n'est pas disponible \n");
        plantetype1();
        break;
    }
}
int plantetype2()
{
    int choixplante;
    printf("Choisissez une plante\n");
    printf("1.Plante 1\n");
    printf("2.Plante 2\n");
    printf("3.Retour au choix des categories\n");
    scanf("%d", &choixplante);
    switch(choixplante)
    {
    case 1:
        plante1T2();
        break;
    case 2:
        plante2T2();
        break;
    case 3:
        listecategorie();
        break;
    default:
        printf("Choix indisponible \n");
        plantetype2();
        break;
    }
}
int plantetype3()
{
    int choixplante;
    printf("Choisissez une plante\n");
    printf("1.Plante 1\n");
    printf("2.Plante 2\n");
    printf("3.Retour au choix des categories\n");
    scanf("%d", &choixplante);
    switch(choixplante)
    {
    case 1:
        plante1T3();
        break;
    case 2:
        plante2T3();
        break;
    case 3:
        listecategorie();
        break;
    default:
        printf("Choix Indisponible \n");
        plantetype3();
        break;
    }
}
int plante1T1()
{

    int choixinfo;
    printf("Que voulez vous savoir sur cette plante ?\n");
    printf("1.Recommandation\n");
    printf("2.Humidite\n");
    printf("3.Ensoleillement \n");
    printf("4.Retour aux choix des plantes\n");
    scanf("%d", &choixinfo);
    switch(choixinfo)
    {
    case 1:
        printf("Voici les recommandation pour la plante 1\n");
        plante1T1();
    case 2:
        printf("Le taux d'humidite est de : \n\n");
        plante1T1();
    case 3:
        printf("Le taux d'ensoleillement est de : \n\n");
        plante1T1();
    case 4:
        plantetype1();
        break;
    default:
        printf("Choix indisponible \n");
        plante1T1();
        break;
    }
}
int plante2T1()
{
    int choixinfo;
    printf("Que voulez vous savoir sur cette plante ?\n");
    printf("1.Recommandation\n");
    printf("2.Humidite\n");
    printf("3.Ensoleillement\n;");
    printf("4.Retour aux choix des plantes\n");
    scanf("%d", &choixinfo);
    switch(choixinfo)
    {
    case 1:
        printf("Voici les recommandation pour la plante :\n");
        plante2T1();
        break;
    case 2:
        printf("Le taux d'humidite est de : \n\n");
        plante2T1();
        break;
    case 3:
        printf("Le taux d'ensoleillement est de : \n\n");
        plante2T1();
        break;
    case 4:
        plantetype1();
        break;
    default:
        printf("Choix indisponible\n");
        plante2T1();
        break;
    }
}
int plante1T2()
{
    int choixinfo;
    printf("Que voulez vous savoir sur cette plante ?\n");
    printf("1.Recommandation\n");
    printf("2.Humidite\n");
    printf("3.Ensoleillement \n");
    printf("4.Retour aux choix des plantes\n");
    scanf("%d", &choixinfo);
    switch(choixinfo)
    {
    case 1:
        printf("Voici les recommandation pour la plante :\n");
        plante1T2();
        break;
    case 2:
        printf("Le taux d'humidite est de : \n\n");
        plante1T2();
        break;
    case 3:
        printf("Le taux d'Ensoleillement est de : \n\n");
        plante1T2();
        break;
    case 4:
        plantetype2();
        break;
    default:
        printf("Choix Indisponible \n");
        plante1T2();
        break;
    }
}
int plante2T2()
{
    int choixinfo;
    printf("Que voulez vous savoir sur cette plante ?\n");
    printf("1.Recommandation\n");
    printf("2.Humidite\n");
    printf("3.Ensoleillement \n");
    printf("4.Retour aux choix des plantes\n");
    scanf("%d", &choixinfo);
    switch(choixinfo)
    {
    case 1:
        printf("Voici les recommandation pour la plante 4\n");
        plante2T2();
        break;
    case 2:
        printf("Le Taux d'humidite est de : \n\n");
        plante2T2();
        break;
    case 3:
        printf("Le taux d'Ensoleillement est de : \n\n");
        plante2T2();
        break;
    case 4:
        plantetype2();
        break;
    default:
        printf("Choix Indisponible \n");
        plante2T2();
        break;
    }
}
int plante1T3()
{
    int choixinfo;
    printf("Que voulez vous savoir sur cette plante ?\n");
    printf("1.Recommandation\n");
    printf("2.Humidite\n");
    printf("3.Ensoleillement\n");
    printf("4.Retour aux choix des plantes\n");
    scanf("%d", &choixinfo);
    switch(choixinfo)
    {
    case 1:
        printf("Voici les recommandation pour la plante \n");
        plante1T3();
        break;
    case 2:
        printf("Le taux d'humidite est de :\n\n");
        plante1T3();
        break;
    case 3:
        printf("Le taux d'Ensoleillement est de : \n\n");
        plante1T3();
        break;
    case 4:
        plantetype3();
        break;
    default:
        printf("Choix Indisponible \n");
        plante1T3();
        break;
    }
}
int plante2T3()
{
    int choixinfo;
    printf("Que voulez vous savoir sur cette plante ?\n");
    printf("1.Recommandation\n");
    printf("2.Humidite\n");
    printf("3.Ensoleillement\n");
    printf("4.Retour aux choix des plantes\n");
    scanf("%d", &choixinfo);
    switch(choixinfo)
    {
    case 1:
        printf("Voici les recommandation pour la plante \n");
        plante2T3();
        break;
    case 2:
        printf("Le taux d'humidite est de : \n\n");
        plante2T3();
        break;
    case 3:
        printf("Le taux d'Ensoleillement est de : \n\n");
        plante2T3();
        break;
    case 4:
        system("cls");
        plantetype3();
        break;
    default:
        printf("Choix Indisponible \n");
        plante2T3();
        break;
    }
}
