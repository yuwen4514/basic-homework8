#include<stdio.h>
#include<conio.h>

int main(void) 
{ 

int i,j,T,m=0; 

 printf("輸入 n ，求 1 ~ n 內的質數 ： "); 
 scanf("%d",&T); 

 for ( i = 2 ; i <= T ; i++) 
 { 
  m =0; 
  for ( j = 1 ; j <= T ; j++) 

  { 
  if( (i % j) == 0 ) m++; 
  if ( m > 2 ) break; 
  } 
 if ( m <= 2 ) printf("%d \t 是質數 !\n",i); 

 } 

getch(); 
return 0; 
}
