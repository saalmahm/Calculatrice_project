#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int opt,nbr_addit,val_addit,s=0,nbr_multp,nbr_seri,i,nbr_absol,val_absolue,nbr_base,nbr_puis,Exponentiation,nbr_racn,racine;
    float val1_sous,val2_sous,sous,val_multp,multp=1,dividende,diviseur,division,val_moy,som_moy=0.0,moyenne;
do{
	printf("******MENU DE CALCULATRICE******* \n");
	printf("Merci de saisir un de ces nombres pour l'option que tu veut: \n");
	printf("1-Addition \n 2-Soustraction \n 3-Multiplication\n 4-Division \n 5-Moyenne \n 6-Valeur absolue \n 7-Exponentiation \n 8-Racine carrée \n 9-Quitter \n");
    scanf("%d",&opt);

switch(opt){
    case 1:
    printf("Entrer le nombre des valeur que tu vas ajouter: \n");
    scanf("%d",&nbr_addit);
    for(i=1;i<=nbr_addit;i++){
        printf("Ajouter la valeur %d: \n",i);
        scanf("%d",&val_addit);
        s+=val_addit;
    }
    printf("La somme des valeurs est: %d \n \n",s);
    break;
    case 2:
    do{
        printf("Entrer la premier valeur: \n ");
        scanf("%f",&val1_sous);
        printf("Entrer la deuxiéme valeur: \n ");
        scanf("%f",&val2_sous);
    }while(val1_sous<val2_sous);
    sous=val1_sous-val2_sous;
    printf("La soustraction est: %f \n",sous);
    break;
    case 3:
    printf("Entrer le nombre des valeurs que tu veut multiplier: \n");
    scanf("%d",&nbr_multp);
    for(i=1;i<=nbr_multp;i++){
        printf("Entrer le nombre %d:\n",i);
        scanf("%f",&val_multp);
        multp*=val_multp;
    }
     printf("La multiplications des nombre entrer est: %.2f \n \n",multp);
    break;
    case 4:
        printf("Entrer le dividende:\n");
        scanf("%f",&dividende);
        printf("Entrer le diviseur:\n");
        scanf("%f",&diviseur);

    if(diviseur==0 || dividende==0){
        printf("!!Impossible de deviser par 0!!");
    }else{
    division=dividende/diviseur;
    printf("La valeur de la division est:%f \n \n",division);
    }
    break;

    case 5:
    do{
        printf("Entrer le nombre de série: \n");
        scanf("%d",&nbr_seri);
    }while(nbr_seri<0);
    for(i=1;i<=nbr_seri;i++){
        printf("Entrer le nombre %d \n",i);
        scanf("%f",&val_moy);
        som_moy+=val_moy;
    }
    moyenne=som_moy/nbr_seri;
    printf("La moyenne de la série de nombres est: %.2f \n \n",moyenne);
    break;
    case 6:
    printf("Entrer le nombre : \n");
    scanf("%d",&nbr_absol);
     val_absolue=abs(nbr_absol);
    printf("La valeur absolue de %d est %d : \n \n",nbr_absol,val_absolue);
   break;
   case 7:
   printf("Entrer le nombre de base:\n");
   scanf("%d",&nbr_base);
   printf("Entrer la puissance: \n");
   scanf("%d",&nbr_puis);
   Exponentiation=pow(nbr_base,nbr_puis);
   printf("L\'Exponentiation est : %d \n \n",Exponentiation);
    break;
   case 8:
   do{
   printf("Entrer un nombre positif: \n");
   scanf("%d",&nbr_racn);}while(nbr_racn<0);
    racine=sqrt(nbr_racn);
    printf("La racine carrée de %d est %d : \n \n",nbr_racn,racine);
    break;
     default:
      break;
}
}while(opt!=9 );
    return 0;
}
