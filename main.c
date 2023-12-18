#include <stdio.h>
#include <stdlib.h>


int main() {
	
   int i, secim,anahtar;
   char metin[100];

   printf("\nMetni girin:\t");
   gets(metin);
   printf("\nAnahtar girin:\t");
   scanf("%d",&anahtar);
   printf("\nYapmak istediginiz islemi secin:\n");
   printf("1 = Metni sifreler.\n");
   printf("2 = Sifrelenmis metni kirar.\n");
   scanf("%d", &secim);

   
   switch(secim)
   {
   case 1:
      for(i = 0; (i < 100 && metin[i] != '\0'); i++)
        metin[i] = metin[i] + anahtar; 

      printf("\Sifrelenmis metin: %s\n", metin);
      break;

   case 2:
      for(i = 0; (i < 100 && metin[i] != '\0'); i++)
        metin[i] = metin[i] - anahtar; 

      printf("\nKirilmis metin: %s\n", metin);
      break;

   default:
      printf("\nHata\n");
   }
   

	return 0;
}
