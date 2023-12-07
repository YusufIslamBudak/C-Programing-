/*1	5 6 7 2
5 8 4 2 1 
1 3 4 5 1
2 1 1 1 4
3 2 1 5 2 */

// 5x5 lik bir kare matrisin esas köşegeninin ortalaması bir tam sayı#include<stdio.h>
#include<stdio.h>
#include<math.h>
int i,j,a[20][20],b[20],eb,s,f,p;
float ortalama,toplam;
main()
{
toplam=0;
ortalama=0;
for(i=1;i<=5;i++){
		
		for(j=1;j<=5;j++){
			printf("%d.satirin %d.sayisini degerini girin..",i,j);scanf("%d",&a[i][j]);
			if(i==j){
			 b[i]=a[i][j];
			toplam=toplam+b[i];
		}
		}
	}
	printf("Toplam=%2.1f\n",toplam);
	
	f=sqrt(toplam);
	p=pow(f,2);
	if(toplam==p) printf("esas kosegen toplami tam kare sayidir.\n");
	else printf("esas kosegen toplami tam kare degildir ");
}