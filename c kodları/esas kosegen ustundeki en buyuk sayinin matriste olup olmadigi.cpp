/* 2 	1 	 5 	 1 	 4
   5 	1 	 6 	-4 	 1
   1 	5 	-3 	 4 	 2 
   5 	2 	 5 	-5 	 1
   5   -2 	-4 	 2 	 5
   */

#include<stdio.h>
int i,j,a[20][20],b[20],eb,s;
main()
{

for(i=1;i<=5;i++){
		
		for(j=1;j<=5;j++){
			printf("%d.satirin %d.sayisini degerini girin..",i,j);scanf("%d",&a[i][j]);
			if(i==j) b[i]=a[i][j];
			
		}
	}
	eb=b[1];
	for(i=1;i<=5;i++){
		if(eb<b[i]) eb=b[i];
	}
	
	for(i=1;i<=5;i++){
		s=0;
		for(j=1;j<=5;j++){
			if(a[j][i]==eb) s++;}
			if(s==0) printf("%d. sutunda esas kosegenin en buyuk elemani %d den yok\n",i,eb);
			else printf("%d. sutunda esas kosegenin en buyuk elemani %d den %d tane var\n",i,eb,s);
			
			
		}
	}
	
	
