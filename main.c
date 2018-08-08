#include <stdio.h>
#include <stdlib.h>

int main()
{
    int satranc[8][8]; //8*8 lik iki boyutlu bir matris tanýmladým
    int x,y;

    char karakter;
    int satir;
    int sutun;

    printf("satir giriniz:"); //Kullanýcýdan satir girişi
    scanf("%d",&satir);
    printf("sutun giriniz:");  //Kullanýcýdan sütun girişi
    karakter=getchar();
    scanf("%c",&karakter);


    for(x = 0; x < 8; x ++) {
      for(y = 0; y < 8; y ++) {
        satranc[x][y] = 0;
      }
    }

//a ile h arasýndaki sütunlarýmýzý bilgisayarýn anlayacaðý þekilde (0,1,2,3,4,5,6,7) olarak switch case ile dönüþümü yapýldý
     switch (karakter){
      case 'a':
       sutun = 0;
       break;
      case 'b':
       sutun = 1;
       break;
      case 'c':
       sutun = 2;
       break;
      case 'd':
       sutun = 3;
       break;
      case 'e':
       sutun = 4;
       break;
      case 'f':
       sutun = 5;
       break;
      case 'g':
       sutun = 6;
       break;
      case 'h':
       sutun = 7;
       break;
      default:
       sutun = 0;
    }

    //Atýn hareketilerinin koordinantlar ile 8*8 lik alanýn dýþýna çýkmadan hareketlerinin kontrolü
      satranc[satir][sutun]=1;

          if(satir-1>=0 && sutun+2<8)
            satranc[satir-1][sutun+2]=1;

          if(satir-1>=0 && sutun-2>=0)
            satranc[satir-1][sutun-2]=1;

          if(satir+1<8 && sutun+2<8)
            satranc[satir+1][sutun+2]=1;

          if(satir+1<8 && sutun-2>=0)
             satranc[satir+1][sutun-2]=1;

          if(satir-2>=0 && sutun+1<8)
              satranc[satir-2][sutun+1]=1;

          if(satir-2>=0 && sutun-1>=0)
             satranc[satir-2][sutun-1]=1;

          if(satir+2<8 && sutun+1<8)
            satranc[satir+2][sutun+1]=1;

          if(satir+2<8 && sutun-1>=0)
             satranc[satir+2][sutun-1]=1;


             for(x= 0; x < 8; x ++)
                {
                for(y = 0; y < 8; y ++)
                {
                 printf("%d\t",satranc[x][y]);
                }
                 printf("\n");
                }



    return 0;
}
