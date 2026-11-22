#include <stdio.h>

int main()
{
float mbrut, cnss,  
 imp, salnet; 

printf("\nDonner le salaire brut mensuel : ");
scanf("%f", &mbrut);

printf("\nDonner le taux de cotisation cnss  : ");
scanf("%f", &cnss);

printf("le taux d'impot est : ");
scanf("%f", &imp);

// traitement //
float vcnss = mbrut*(cnss/100);
float vimps = mbrut*(imp/100);
salnet= mbrut -vcnss-vimps;

// afficher//
printf("\n le salaire net a payer est  : %.2f", salnet);

}
