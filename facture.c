#include <stdio.h>
int a = 7;
int     main()
{
int qte; // reservation espace dun nombre enter dans la memoire RAM//
float pu, mht, tva, mtva, mttc;

printf("donner le prix unitaire :");
scanf("%f", &pu);

printf("donner la quantite :");
scanf("%d", &qte);

printf("donner le taux de TVA :");
scanf("%f", &tva);

//traitement//
mht = pu * qte;
mtva = mht *(tva/100);
mttc = mht + mtva;

// afficher les resultat //
printf("le montant hors taxe est : %f", mht);
printf("\nle montant de la TVA est : %f", mtva);
printf("\nle montant TTC est  : %f", mttc);

}