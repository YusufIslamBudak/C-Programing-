/* 2 	1 	 3 	 1 	 4
   2 	1 	 6 	-4 	 1
   -1 	5 	-3 	 4 	 2 
   -3 	2 	 1 	-5 	 1
   2   -2 	-4 	 2 	 5
   */



#include<stdio.h>
int i,j,a[20][20],b[20],ek,s,t,eb,k;
main()
{

for(i=1;i<=5;i++){
		
		for(j=1;j<=5;j++){
			printf("%d.satirin %d.sayisini degerini girin..",i,j);scanf("%d",&a[i][j]);
			
			
		}
	}
	ek=a[1][1]; eb=a[1][5];
	for(i=1;i<=5;i++){
		if(ek>a[i][i]) ek=a[i][i];
		if(eb<a[i][6-i]) eb=a[i][6-i];
	}
	
	t=eb+ek;k=0;
	
	for(i=1;i<=5;i++){
	
		for(j=1;j<=5;j++){
			if(t==a[i][j]){
			printf("%d den %d. satir %d. sutunda var\n",t,i,j); k=1;} 
			
		}
		}
		if(k==0) printf("%d den matriste yok",t);
	}
