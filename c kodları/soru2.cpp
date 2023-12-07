#include<stdio.h>
 #include<math.h>
 int a,b,toplam,d,ortalama,c,p,k,g;
 main()
 {
 	printf("sayiyi giriniz..\n"); scanf("%d",&a);
 	toplam=0; c=a;
 	while(a!=0){
 		b=a-int(a/10)*10;
 		a=int(a/10);
 		toplam=toplam+b;
	 }
	 printf("toplam=%d\n",toplam);
	 {
	 	ortalama=int(toplam)/2;
	 	d=(ortalama*2);
	 	if(toplam==d) printf ("ortalama=%d\n",ortalama); else printf("ortalama tam sayi degil\n"); 	
	 }
	    k=0;
	 while(c!=0){
	 	g=c-int(c/10)*10;
	 	p=pow(10,k);
	 	if (ortalama==g) printf("%d ler hanesinde var\n",p);
	 	c=int(c/10); 
	 	k++;
	 	
	 	
	 }
	 
	 
 }
