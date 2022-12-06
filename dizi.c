#include <stdio.h>

float ortalamabulma(int dizi[]){ // Dizinin ortalaması
  
   float toplam=0,ort;

for(int i=0;i<5;i++)
  toplam+=dizi[i];

   ort=toplam/5;
   return ort;
}

int kackeregecti(int dizi [],int aranan){ // Girilen degerin dizide kaç kez geçtiği

  int sayac;
  printf("Aranan degeri giriniz\n");
   scanf("%d",&aranan);
   for(int i=0;i<5;i++){
    if(dizi[i]==aranan)
   sayac++;
   }

return sayac;
}

int enbuyukdeger(int dizi[]){ //Dizinin en büyük değeri
int enbuyuk;

enbuyuk=dizi[0];
for(int i=1;i<5;i++)
if(dizi[i]>enbuyuk)
enbuyuk=dizi[i];

return enbuyuk;
}

int enkucukdeger(int dizi[]){ // Dizinin en küçük değeri
int enkucuk;

enkucuk=dizi[0];
for(int i=1;i<5;i++)
if(dizi[i]<enkucuk)
enkucuk=dizi[i];

return enkucuk;
}

int ikincibuyukdeger(int dizi[]){ //Dizinin 2. en büyük değeri
int enbuyuk,ikincibuyuk=dizi[0];

enbuyuk=dizi[0];
for(int i=1;i<5;i++){
if(dizi[i]>enbuyuk){
enbuyuk=dizi[i];}}


for(int a=1;a<5;a++){
if(dizi[a]>ikincibuyuk && dizi[a]<enbuyuk){
ikincibuyuk=dizi[a];
}
}
return ikincibuyuk;
}

int ortbsayisi(int dizi[]){ // Dizinin ortalamasından büyük olanların sayısı
  
   float toplam=0,ort;
   int sayac=0;
for(int i=0;i<5;i++)
  toplam+=dizi[i];
     ort=toplam/5;
   for(int a=0;a<5;a++){
   if(ort<dizi[a]){
   sayac = ++sayac;}
   }
   return sayac;
}

int ortdanksayilari(int dizi[]){  //Dizinin ortalamasından küçük olanların çıktısı
  
   float toplam=0,ort;
for(int i=0;i<5;i++)
  toplam+=dizi[i];
     ort=toplam/5;
   for(int a=0;a<5;a++){
   if(ort>dizi[a]){
    printf("%d ",dizi[a]);
      }
   }
   return 0;
}

int degerdenbuyuktoplam(int dizi[],int deger){ //Girilen değerin dizidekilerden büyük olanların toplamı
    int degertoplami=0;
    //printf("Degerinizi giriniz");
    //scanf("%d",&deger);

    for(int i=0;i<5;i++){
   if(dizi[i]>deger){
   degertoplami =  degertoplami+dizi[i];}
 } 
  return degertoplami;
}

float degerdenbuyukortalama(int dizi[],float deger){ // Girilenin dizidekilerden büyük olduğu sayıların ortalaması
    int degertoplami=0,sayac=0;
    float degerort;

    for(int i=0;i<5;i++){
   if(dizi[i]>deger){
   degertoplami =  degertoplami+dizi[i];
   sayac+=1;
   }
 } 
 degerort= degertoplami/sayac;
  return degerort;


}
main(){
 
  int dizi[5],deger;
  for(int i=0;i<5;i++)
  scanf("%d",&dizi[i]);
  printf("Belirlediginiz bir deger giriniz");
    scanf("%d",&deger);

  printf("Dizinin ortalamasi = %.2f\n",ortalamabulma(dizi));
  
  printf("En buyuk deger = %d\n",enbuyukdeger(dizi));
  
  printf("En buyuk ikinci deger = %d\n",ikincibuyukdeger(dizi));

  printf("En kucuk deger = %d\n",enkucukdeger(dizi));
  
  printf("Ortalamadan buyuklerin sayisi = %d\n",ortbsayisi(dizi));

  printf("Ortalamadan kucuk sayilar = ");
    printf(" %d\n",ortdanksayilari(dizi));

    printf("Degerden buyuk sayilarin toplami = %d\n",degerdenbuyuktoplam(dizi,deger));

    printf("Degerden buyuk sayilarin ortalamasi = %.2f",degerdenbuyukortalama(dizi,deger));
}