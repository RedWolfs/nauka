#include <stdio.h>

int main(){
  int calkowita, suma, licznik;
  suma = 0;
  calkowita = 3;

  //blok odpowiedzialny za sczytywanie liczby z klawiatury
  do{
    if (calkowita <= 2){
      printf("Podales liczbe mniejsza lub rowna 2! ");
    }
    
    printf("Podaj liczbe calkowita wieksza od 2 \n");
    scanf("%d", &calkowita);
    printf("-------- \n");
  }while(calkowita <= 2);

  //blok odpowiedzialny za sumowanie i wypisywanie
  for(licznik = 1; licznik<=calkowita; licznik++){
    suma = suma+licznik;
    printf("%d \n", licznik);
  }
  printf("-------- \n = %d \n", suma);

  return 0;
}
