

#include<stdio.h>
int a[20][20],i,j,ek,eb,toplam,s,ds,ss;
float ortalama;
main(){
	
	toplam=0;ds=0;
	for(i=1;i<=5;i++){
		
		for(j=1;j<=5;j++){
			printf("%d.satirin %d.sayisini degerini girin..",i,j);scanf("%d",&a[i][j]);
			toplam=toplam+a[i][j];
			ds++;
	
		}
	}
	ortalama=toplam/ds; 
	if(ortalama==int(ortalama)){
	
	for(i=1;i<=5;i++){
		ss=0;
		for(j=1;j<=5;j++){
			if(ortalama==a[i][j]) ss++;}
			if(ss==0)printf("%d.satirda %2.0f ortalamasindan yok \n ",i,ortalama);
			else printf("%d. satirda %2.0f ortalamasindan %d tane var\n",i,ortalama,ss);
				
			}
		}
		else printf("ortalamaniz tam sayi degil.");
	}

	
	
	
