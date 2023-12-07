/*
Bir dosyaya öğrencilerin numarası,adı-soyadı,vize notu,final notu, varsa bütünleme
notunu kaydeden,istenildiğinde öğrencileri bulan , istenildiğinde ortalama başarı 
notundan daha yüksek not alan öğrencileri listeleyen ve istenildiğinde de başarılı
ve başarısız öğrencileri listeleyen programın hazırlık dosyasıyla birlikte oluştu-
rulması
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct OGRENCILER{
	char as[25];
	int nm,kk;
	float v,f,b;

}KAYIT;
FILE*islem;
int i,sc,scm,s,tp;
char c;
float bn,ebn,ort;
void en_basarili(){
	system("cls");
	ebn=0;
	for(i=1;i<=100;i++){
		fseek(islem,(islem,(i-1))*sizeof(struct OGRENCILER),0);
		fread(&KAYIT,sizeof(OGRENCILER),1,islem);
		if(KAYIT.kk==0){
		
		bn=(KAYIT.v*0.4)+(KAYIT.f)*0.6;
		if(bn<50) bn=(KAYIT.v*0.4)+(KAYIT.b)*0.6;
		if(bn>=50) {
			if(ebn<bn) ebn=bn;
		}	
	}
	}
	for(i=1;i<=100;i++){
		fseek(islem,(islem,(i-1))*sizeof(struct OGRENCILER),0);
		fread(&KAYIT,sizeof(OGRENCILER),1,islem);
		if(KAYIT.kk==0){
		
		bn=(KAYIT.v*0.4)+(KAYIT.f)*0.6;
		if(bn<50) bn=(KAYIT.v*0.4)+(KAYIT.b)*0.6;
		if(bn==ebn) printf("%10s %2.1f  %2.1f  %2.1f  %2.1f\n",KAYIT.as,KAYIT.v,KAYIT.f,KAYIT.b,bn);
			
	}
}	
}
void yuksek(){
	system("cls");
	tp=0;s=0;
	for(i=1;i<=100;i++){
		fseek(islem,(islem,(i-1))*sizeof(struct OGRENCILER),0);
		fread(&KAYIT,sizeof(OGRENCILER),1,islem);
		if(KAYIT.kk==0){
		bn=(KAYIT.v*0.4)+(KAYIT.f)*0.6;
		if(bn<50) bn=(KAYIT.v*0.4)+(KAYIT.b)*0.6;
		tp=tp+bn; s++;
}
}
ort=tp/s;
for(i=1;i<=100;i++){
		fseek(islem,(islem,(i-1))*sizeof(struct OGRENCILER),0);
		fread(&KAYIT,sizeof(OGRENCILER),1,islem);
		if(KAYIT.kk==0){
		bn=(KAYIT.v*0.4)+(KAYIT.f)*0.6;
		if(bn<50) bn=(KAYIT.v*0.4)+(KAYIT.b)*0.6;
		if(bn>ort) printf("%10s %2.1f  %2.1f  %2.1f  %2.1f\n",KAYIT.as,KAYIT.v,KAYIT.f,KAYIT.b,bn);
}
}
}

void basarili(){
	system("cls");
	for(i=1;i<=100;i++){
		fseek(islem,(islem,(i-1))*sizeof(struct OGRENCILER),0);
		fread(&KAYIT,sizeof(OGRENCILER),1,islem);
		if(KAYIT.kk==0){
		bn=(KAYIT.v*0.4)+(KAYIT.f)*0.6;
		if(bn<50) bn=(KAYIT.v*0.4)+(KAYIT.b)*0.6;
		if(bn>=50){
			printf("%10s %2.1f  %2.1f  %2.1f  %2.1f\n",KAYIT.as,KAYIT.v,KAYIT.f,KAYIT.b,bn);
			
		}
		
	
	
}
}
}
void basarisiz(){
	system("cls");
	for(i=1;i<=100;i++){
		fseek(islem,(islem,(i-1))*sizeof(struct OGRENCILER),0);
		fread(&KAYIT,sizeof(OGRENCILER),1,islem);
		if(KAYIT.kk==0){
		bn=(KAYIT.v*0.4)+(KAYIT.f)*0.6;
		if(bn<50) bn=(KAYIT.v*0.4)+(KAYIT.b)*0.6;
		if(bn<50){
			printf("%10s %2.1f  %2.1f  %2.1f  %2.1f\n",KAYIT.as,KAYIT.v,KAYIT.f,KAYIT.b,bn);
			
		}
		
	
	
}
}
}



void raporlar(){
system("cls");
scm=1; 
while(scm<4){
printf("1-En basarili ogrenciler\n");
printf("2-Ortalamadan daha yuksek not alan ogrenciler\n");
printf("3-Basarili olan ogrenciler\n");
printf("4-Basarisiz olan ogrenciler\n");
printf("5-Geri donus\n");
printf("Seciminiz?");scanf("%d",&scm);

	if(scm==1) en_basarili();
	if(scm==2) yuksek();
	if(scm==3) basarili();
	if(scm==4) basarisiz();
	
}

}
		
		
void hazirlik(){
	system("cls");
	KAYIT.kk=1;
	for(i=1;i<=100;i++){
		fseek(islem,(islem,(i-1))*sizeof(struct OGRENCILER),0);
		fwrite(&KAYIT,sizeof(OGRENCILER),1,islem); 
	}
	printf("100 kisi icin dosya hazirlandi.\n");	
}
void kayitlar(){
	system("cls");
	c='e';
	while(c!='h'){
		printf("Kayit numarasini giriniz..");scanf("%d",&i);
		fseek(islem,(islem,(i-1))*sizeof(struct OGRENCILER),0);
		fread(&KAYIT,sizeof(OGRENCILER),1,islem);
		if(KAYIT.kk==1){
			printf("Ogrenci numarasi giriniz..");scanf("%d",&KAYIT.nm);
			printf("Adi soyadi giriniz..");scanf("%s",&KAYIT.as);
			printf("Vize notunu giriniz..");scanf("%f",&KAYIT.v);
			printf("Final  notunu giriniz..");scanf("%f",&KAYIT.f);
			KAYIT.kk=0;
			bn=(KAYIT.v*0.4)+(KAYIT.f)*0.6;
			if((bn<50)||(KAYIT.f<40)){
			 printf("Butunleme notunu giriniz..");scanf("%f",&KAYIT.b);
			 }
		}
		
		
		else printf("Bu kayit doludur\n");
		fseek(islem,(islem,(i-1))*sizeof(struct OGRENCILER),0);
		fwrite(&KAYIT,sizeof(OGRENCILER),1,islem);
		printf("Baska kayit yapacak misiniz?(e/h)");c=getch();
		printf("\n");
	}
}

main(){
	if((islem=fopen("ogrenci.dat.","r+"))==NULL)
	islem=fopen("ogrenci.dat.","w"); 
	sc=1;
	while(sc<4){
		printf("1-Dosya Hazirlama\n");
		printf("2-Kayit yapma\n");
		printf("3-Raporlamalar\n");
		printf("4-Cikis\n");
		printf("Seciminiz?");scanf("%d",&sc);
			if(sc==1) hazirlik();
			if(sc==2) kayitlar();
			if(sc==3) raporlar();
	}
	fclose(islem);	
}


