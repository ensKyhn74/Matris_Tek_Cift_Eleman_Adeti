#include <stdio.h>
// 2 boyutlu dizinin satır ve sütun sayısı klavyeden girilir.
// tek ve çift elemanların adetini bulunur.

int main() 

{
    
 int i,j;
 int m,n;
 int TekSayaci = 0,CiftSayaci = 0;
 
 printf("dizinin satir sayisini girin: ");
 scanf("%d",&m);
 
 printf("dizinin sutun sayisini girin: ");
 scanf("%d",&n);
 
 int dizi[m][n]; 
 
 for(i = 0 ; i < m ; i++)
 {
  for(j = 0 ; j < n ; j++)
  {
   printf("dizi[%d][%d]: ",i,j);
   scanf("%d",&dizi[i][j]);
  }
 }
 
 printf("\n");
 
 for(i = 0 ; i < m ; i++)
 {
  for(j = 0 ; j < n ; j++)
  {
   if(dizi[i][j] % 2 == 0)
   {
    CiftSayaci++;
   }
   
   else
   {
    TekSayaci++;
   }
  }
 }
 
 printf("dizinin %d tane elemani cift\n",CiftSayaci);
 printf("dizinin %d tane elemani tek\n",TekSayaci);

 return 0;
  
}