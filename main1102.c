#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)) ;
    int rastgelesayi = rand() % 101 ;
    int tahmin ;
    int deneme = 0 ;
    char c ;



    printf("Sayi tahmin etme oyununa hos geldiniz \n \n");
    printf("Lutfen 0 ve 100 arasinda bir sayi tahmin ediniz \n ");

    do {
         deneme++;
         scanf("%d", &tahmin);

           if (tahmin > 100) 
	 	{
             printf(" \n Lutfen 100 ve altinda bir deger giriniz! \n");
             continue;  
        }
        
        
                 scanf ("%c",&c);
                 if ((c>= 'a' && c<= 'z' ) || (c >= 'A' && c<= 'Z'))			 
			{						
			  	  printf(" \n Yanlis deger, lutfen bir rakam giriniz!");
                  continue;	
		    }
        
        
         if (tahmin == rastgelesayi) 
		{
              printf(" \n Dogru tahmin :) \n %d sonucuna %d denemede ulastiniz", rastgelesayi, deneme);
              break;
        } 
		
		 else 
		{
            int fark = abs(tahmin - rastgelesayi);
            printf(" \n Sonuca %d uzakliktasiniz \n", fark);
        }

    } 
	while (1);

    return 0;
}
			
