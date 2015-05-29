#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu();
void signin();
void order();
void end();
void summary();

int sum1=0;
int sum2=0;
int sum3=0;
int sum4=0;
int sum5=0;


int main()
{
    printf("歡迎使用本系統!! \n");
    
    signin();
    
    menu();
    
    order();
    
    end();
    
    system("pause"); 
    return 0;
}

void signin()
{
     
}

void menu()
{
     printf("             MENU               \n");
     printf("===============================\n ");
     printf("編號    飲料    中杯$   大杯$\n");
     printf("====== ======== ======= =======\n"); 
     printf("  1      紅茶     15      20\n");
     printf("  2      綠茶     15      20\n");
     printf("  3      青茶     15      20\n");
     printf("  4      麥茶     15      20\n");
     printf("  5      奶茶     20      25\n\n");  
     //printf("備註: +波霸、珍珠、仙草凍 皆+5元\n");  
     //printf("      +布丁、椰果 皆+10元\n");
}

void order()
{
     int num;
     int count1=0;
     int count2=0;

     printf("輸入飲料編號: ");
     scanf("%d", &num);
     if(num == 1){
        printf("紅茶中杯需要幾杯: ");
        scanf("%d", &count1);
        printf("紅茶大杯需要幾杯: "); 
        scanf("%d", &count2);
        printf("總共 %d 杯中杯紅茶及 %d 杯大杯紅茶\n", count1, count2);
        sum1 = count1*15 + count2*20;
        printf("紅茶共 %d 元\n\n", sum1);
        printf("還需要點哪些飲料，若不用則輸入 0 若要則");
        order();
     }
     else if(num == 2){
        printf("綠茶中杯需要幾杯: ");
        scanf("%d", &count1);
        printf("綠茶大杯需要幾杯: "); 
        scanf("%d", &count2);
        printf("總共 %d 杯中杯綠茶及 %d 杯大杯綠茶\n", count1, count2);
        sum2 = count1*15 + count2*20;
        printf("綠茶共 %d 元\n\n", sum2); 
        printf("還需要點哪些飲料，若不用則輸入 0 若要則");
        order();
     }
     else if(num == 3){
        printf("青茶中杯需要幾杯: ");
        scanf("%d", &count1);
        printf("青茶大杯需要幾杯: "); 
        scanf("%d", &count2);
        printf("總共 %d 杯中杯青茶及 %d 杯大杯青茶\n", count1, count2);
        sum3 = count1*15 + count2*20;
        printf("青茶共 %d 元\n\n", sum3); 
        printf("還需要點哪些飲料，若不用則輸入 0 若要則");
        order();
     } 
     else if(num == 4){
        printf("麥茶中杯需要幾杯: ");
        scanf("%d", &count1);
        printf("麥茶大杯需要幾杯: "); 
        scanf("%d", &count2);
        printf("總共 %d 杯中杯麥茶及 %d 杯大杯麥茶\n", count1, count2);
        sum4 = count1*15 + count2*20;
        printf("麥茶共 %d 元\n\n", sum4);
        printf("還需要點哪些飲料，若不用則輸入 0 若要則");
        order(); 
     } 
     else if(num == 5){
        printf("奶茶中杯需要幾杯: ");
        scanf("%d", &count1);
        printf("奶茶大杯需要幾杯: "); 
        scanf("%d", &count2);
        printf("總共%d杯中杯奶茶及%d杯大杯奶茶\n", count1, count2);
        sum5 = count1*20 + count2*25;
        printf("奶茶共%d元\n\n", sum5); 
        printf("還需要點哪些飲料，若不用則輸入 0 若要則");
        order();
     }
     else if(num == 0){
        summary();
     }         
}

void summary()
{
     int sumall;
     
     sumall = sum1+sum2+sum3+sum4+sum5;
     
     printf("此次訂單總合為 %d 元\n", sumall);
}

void end()
{
     printf("謝謝使用本系統，掰掰!!");  
      
}
    
    

