#include<stdio.h>
#include<stdlib.h>


int main() {
    char nom[50] ;
    float note1 , note2, note3 , note4 , note5 , s , m;

    printf("veuillez entrer votre nom : ");
    scanf("%s" , &nom);
    printf("veuillez entrer votre 5 notes ");
     printf("veuillez entrer votre 1er note \n ");
     scanf("%f" , &note1);
      printf("veuillez entrer votre 2eme note \n ");
      scanf("%f" , &note2);
      printf("veuillez entrer votre 3eme note \n");
      scanf("%f" , &note3);
      printf("veuillez entrer votre 4eme note \n ");
      scanf("%f" , &note4);
      printf("veuillez entrer votre 5eme note \n");
      scanf("%f" , &note5);
      if(note1 <0  || note1>100) {
        printf("entrer les notes entre 0 et 100 : \n");
        scanf("%f" , &note1);
      }

      if(note2 <0  || note2>100) {
        printf("entrer les notes entre 0 et 100 :\n ");
        scanf("%f" , &note2);
      }

      if(note3 <0  || note3>100) {
        printf("entrer les notes entre 0 et 100 :\n ");
        scanf("%f" , &note3);
      }
      if(note4 <0  || note4>100) {
        printf("entrer les notes entre 0 et 100 :\n ");
        scanf("%f" , &note4);
      }
      if(note4 <0  || note4>100) {
        printf("entrer les nptes entre 0 et 100 :\n ");
        scanf("%f" , &note4);
      }
      if(note5 <0  || note5>100) {
        printf("entrer les nptes entre 0 et 100 : \n");
        scanf("%f" , &note5);
      }
     s = note1 + note2 + note3 + note4 + note5 ;
     printf("le total des notes est : %f\n" , s) ;

     m = s / 5;

     printf("la moyenne est : %f \n" , m);

     if ( note1 > note2 && note1 > note3 && note1 > note4 && note1 > note5){
        printf("la premier note est le plus haute \n");
     }
      if ( note2 > note1 && note2 > note3 && note2 > note4 && note2 > note5){
        printf("la 2eme note est le plus haute \n");
     }
      if ( note3 > note2 && note3 > note1 && note3 > note4 && note3 > note5){
        printf("la 3eme note est le plus haute\n ");
     }
      if ( note4 > note2 && note4 > note3 && note4 > note1 && note4 > note5){
        printf("la premier note est le plus haute\n ");
     }
      if ( note5 > note2 && note5 > note3 && note5 > note4 && note5 > note1){
        printf("la 5eme note est le plus haute\n ");
     }
      if ( note5 < note2 && note5 < note3 && note5 < note4 && note5 < note1){
        printf("la 5eme note est le plus basse\n ");
     }
     if ( note4 < note2 && note4 < note3 && note4 < note1 && note4 < note5){
        printf("la premier note est le plus basse\n ");
     }
     if ( note3 < note2 && note3 < note1 && note3 < note4 && note3 < note5){
        printf("la 3eme note est le plus basse\n ");

     }
     if ( note2 < note1 && note2 < note3 && note2 < note4 && note2 < note5){
        printf("la 2eme note est le plus basse\n ");
     }
     if ( note1 < note2 && note1 < note3 && note1 < note4 && note1 < note5){
        printf("la premier note est le plus basse\n ");
     }
     if(m < 40 && m >=0 ) {
 printf(" la mention globale selon la moyenne est : F\n");


     }
     if(m > 40 && m >=60 ) {
 printf(" la mention globale selon la moyenne est : D\n");


     }
     if(m < 70 && m >=60 ) {
 printf(" la mention globale selon la moyenne est : c\n");

     } if(m < 80 && m >=60 ) {
 printf(" la mention globale selon la moyenne est : B\n");


     }
     if(m <= 100 && m >=80 ) {
 printf(" la mention globale selon la moyenne est : A\n");

     }
     if (note1 > 50)
     {
        printf("la matiere 1 est reussie\n");

     }
     if (note1 < 50)
     {
        printf("la matiere 1 est rechouee\n ");

     }
     if (note2 > 50)
     {
        printf("la matiere 2 est reussie \n");

     }
      if (note2 < 50)
     {
        printf("la matiere 2 est echouee  \n");

     }
      if (note3 > 50)
     {
        printf("la matiere 3 est reussie \n");

     }
      if (note3 < 50)
     {
        printf("la matiere 2 est echouee \n");

     }
      if (note4 > 50)
     {
        printf("la matiere 4 est reussie \n");

     }
      if (note4 < 50)
     {
        printf("la matiere 4 est echouee \n");

     }
      if (note5 > 50)
     {
        printf("la matiere 5 est reussie \n");

     }
      if (note5 < 50)
     {
        printf("la matiere 5 est echouee \n");

     }













     return 0;
    }
































