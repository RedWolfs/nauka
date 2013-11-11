#include<stdio.h>
main(){
int  a;
printf("Podaj liczbe\n");
scanf("%d",&a);
if(a%2==0){
printf("liczna jest parzysta\n");
}
else if (!a%2==0){
printf("liczba jest nieparzysta\n");
}

return 0;
}
