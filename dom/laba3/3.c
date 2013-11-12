#include <stdio.h>

 main(){
 
float wynik=3.14,r,h,obientosc;


printf("program oblicza obiętośc stożka\n");		
printf("podaj r:");scanf("%f",&r);
printf("podaj h:");scanf("%f",&h); 
obientosc=wynik*r*r*h/3;		//P=(Π*r2*h)/3  r*r oznacza r do potengi 2
 
printf("obientosc wynosi:%f\n",obientosc);  
  return 0;
}
