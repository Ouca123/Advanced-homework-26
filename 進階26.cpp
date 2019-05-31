#include <stdio.h> 
#include <stdlib.h> 
int main(void)
{ 
int egg; 

printf("ªü±C½æ³Jµ²ªG¦³¡G\n"); 
for (egg=0;egg<10000;egg++) 
if (egg%3==2 && egg%7==2 && egg%11==2) 
printf("%d\n",egg); 


system("pause");
return 0; 
} 

