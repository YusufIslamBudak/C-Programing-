/* 2 	1 	 3 	 1 	 4
   2 	1 	 6 	-4 	 1
   1 	5 	-3 	 4 	 2 
   -3 	2 	 1 	-5 	 1
   2   -2 	-4 	 2 	 5
   */


#include<stdio.h>
int a[20][20],i,j,ek,eb,toplam;
main(){
	
	
	for(i=1;i<=5;i++){
		
		for(j=1;j<=5;j++){
			printf("%d.satirin %d.sayisini degerini girin..",i,j);scanf("%d",&a[i][j]);
			
		}
	}
	toplam=a[1][1];
	for(i=1;i<=5;i++){
		ek=a[1][i]; eb=a[i][i];
		for(j=1;j<=5;j++){
			
			if(ek>a[j][i]) ek=a[j][i];	
			if(eb<a[i][j]) eb=a[i][j];
			if(toplam>eb+ek) toplam=eb+ek;
			
		}
		
		printf("%d.sutunun en kucuk elemani=%d  ",i,ek);
		printf("%d.satirin en buyuk elemani=%d\n",i,eb);
		
		
	}
	printf("	toplamlardan en kucugu %d    ",toplam);
	
}
	
	