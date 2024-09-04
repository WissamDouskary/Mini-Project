#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(){
    char titre[20] ;
    int m=0;
    int MAX_BOOKS =100;
    int MAX_STRING = 100;
    char TITREE=100;
    int c,x,i;

    printf("Combien de livres voulez-vous ajouter ?\n");
    scanf("%d", &c);

    char T1[MAX_BOOKS][MAX_STRING];
    char T2[MAX_BOOKS][MAX_STRING];
    float T3[MAX_BOOKS];
    int T4[MAX_BOOKS];
   // char T5[titre];

    do{
        printf("====================================\n");
    printf("1. ajouter un live au stock. \n");
    printf("2 .afficher tous les livres disponible. \n");
    printf("3 .Rechercher un livre par son titre. \n");
    printf("4 .Mettre a jour la quantite d un livre. \n");
    printf("5 .supprimer un livre. \n");
    printf("====================================\n");
    scanf("%d",&x);

    switch(x){

    case 1:

    printf("Ajouter le nom des livres :\n");
    for (int i = 0; i < c; i++) {
        printf("Livre %d : ", i + 1);
        scanf(" %[^\n]", T1[i]);
    }
    printf("Ajouter le nom des auteurs :\n");
    for (int i = 0; i < c; i++) {
        printf("Auteur du livre %d : ", i + 1);
        scanf(" %[^\n]", T2[i]);
    }

    printf("Ajouter le prix des livres :\n");
    for (int i = 0; i < c; i++) {
        printf("Prix du livre %d : ", i + 1);
        scanf("%f", &T3[i]);
    }

    printf("Ajouter la quantite en stock :\n");
    for (int i = 0; i < c; i++) {
        printf("Quantité du livre %d : ", i + 1);
        scanf("%d", &T4[i]);

    }
    m++;
    break;
case 2:
        if(m<=0){
            printf("Aucun livre disponible !! \n");

        }
        else {
        printf("\nInformations sur les livres :\n");
        for (int i = 0; i < c; i++) {
        printf("Livre %d :\n", i + 1);
        printf("Nom : %s\n", T1[i]);
        printf("Auteur : %s\n", T2[i]);
        printf("Prix : %.2f\n", T3[i]);
        printf("Quantité : %d\n\n", T4[i]);
}
    }






    break;
    case 3:

        printf("saisir le titre de livre : \n");
        scanf("%s",&titre);
        for(int i=0;i<100;i++){

          if(strcmp(titre,T1[i])==0 ){
            printf("Livre %d :\n", i + 1);
        printf("Nom : %s\n", T1[i]);
        printf("Auteur : %s\n", T2[i]);
        printf("Prix : %.2f\n", T3[i]);
        printf("Quantité : %d\n\n", T4[i]);

          }

        }
        break;




    case 4 :
        printf("Tapez le nom du livre dont vous souhaitez modifier la quantité : \n");
        scanf(" %[^\n]", titre);

        int trouver = 0;
        for (int i = 0; i < m ; i++) {
        if (strcmp(titre, T1[i]) == 0) {
        printf("Tapez la quantité que vous souhaitez : \n");
        scanf("%d", &T4[i]);
        printf("\nQuantité mise à jour : %d\n", T4[i]);
        trouver = 1;

}
        else{
            printf("le livre non trouve pas ! \n");
        }



        }
break;
    case 5 :
        printf("Tapez le nom du livre dont vous souhaitez supprimer : \n");
        scanf(" %[^\n]", titre);
        int suppr = -1;
        for (int i = 0 ; i < m ; i++){
            if(strcmp(titre, T1[i])==0){
                suppr = i ;
                break;
            }
        }

      if(suppr == -1){
        printf("le livre n'est pas trouver ! ");
      } else {
      for(suppr ; i < m - 1 ; i++){
        strcpy(T1[i], T1[i+1]);
        strcpy(T2[i], T2[i+1]);
        T3[i] = T3[i+1];
        T4[i] = T4[i+1];
      }
      m--;
      break;


      }




}



}while(x!=0);

return 0;


}


