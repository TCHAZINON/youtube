#include <stdio.h>
#include <stdlib.h>

int main()
{ float TTC, TVA, HT,Re,Rj,R, P_R;
int j;

printf("Entrez le numero du jour de la semaine (1 pour lundi, 2 pour mardi ect...: ",j);
scanf("%d", &j);
if (j == 1){
    printf("lundi\n");
}else if (j==2){
     printf("mardi\n");
}  else if (j==3){
     printf("mercredi\n");
} else if (j==4){
     printf("jeudi\n");
}  else if (j==5){
     printf("vendredi\n");
}  else if (j==6){
     printf("samedi\n");
}  else if (j==7){
     printf("dimanche\n");
} else{
  printf("Numero invalide");
  };

    printf("===================================");

       printf("\n ||    RECAP DES ACHATS    ||");

    printf("\n==================================");

    printf("\n Entrez votre prix ors taxe du produit :", HT);
    scanf("%f", &HT);
       if (HT < 50000){
        Re = 5;
       } else if (HT > 50000 && HT < 100000){
        Re = 10;
       } else if ( HT > 100000){
        Re = 15;
       };

       //remise le jour

          if (j ==6 || j ==7){
            Rj= 2;
          }else {
          Rj = 0;
          };
    printf("\nEntrez votre TVA :", TVA);
    scanf("%f", &TVA);


    //calcul
    R = (Rj + Re);

    P_R = HT - (HT * R/100);

    TTC = P_R + (P_R * TVA/100);


printf("Votre prix initial est %.2f\n", HT);
printf("Votre remise totale est de %.2f%%\n", R);
printf("Votre prix final est %.2f\n", TTC);




    return 0;
}
