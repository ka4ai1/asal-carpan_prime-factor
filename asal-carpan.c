/*                 c0d3d by 'k4rnel'                 */
#include<stdio.h>
int main()
{		//sayi=number
int sayi,olc;
printf("hangi sayinin asal carpanlari bulunsun >");
scanf("%d",&sayi);
printf("%d:",sayi);

for(int a=2;a<=sayi;a++){ //Tüm çarpanları getirir
    if(sayi%a==0){	 // Show all elements
        olc=1;
        for(int b=2;b<=a/2;b++){ //Asal çarpanları seçtirir 
            if(a%b==0){		// Show only prime factor elements
                olc=0; //eğer bu kısmı silersen 1 hariç tüm pozitif çarpanları bulur
            }
            }
            if(olc==1){ 
                printf("%d ",a);
            }
    }

}

}
