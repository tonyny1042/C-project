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
    printf("�w��ϥΥ��t��!! \n");
    
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
     printf("�s��    ����    ���M$   �j�M$\n");
     printf("====== ======== ======= =======\n"); 
     printf("  1      ����     15      20\n");
     printf("  2      ���     15      20\n");
     printf("  3      �C��     15      20\n");
     printf("  4      ����     15      20\n");
     printf("  5      ����     20      25\n\n");  
     //printf("�Ƶ�: +�i�Q�B�ï]�B�P��� ��+5��\n");  
     //printf("      +���B�B���G ��+10��\n");
}

void order()
{
     int num;
     int count1=0;
     int count2=0;

     printf("��J���ƽs��: ");
     scanf("%d", &num);
     if(num == 1){
        printf("�������M�ݭn�X�M: ");
        scanf("%d", &count1);
        printf("�����j�M�ݭn�X�M: "); 
        scanf("%d", &count2);
        printf("�`�@ %d �M���M������ %d �M�j�M����\n", count1, count2);
        sum1 = count1*15 + count2*20;
        printf("�����@ %d ��\n\n", sum1);
        printf("�ٻݭn�I���Ƕ��ơA�Y���Ϋh��J 0 �Y�n�h");
        order();
     }
     else if(num == 2){
        printf("������M�ݭn�X�M: ");
        scanf("%d", &count1);
        printf("����j�M�ݭn�X�M: "); 
        scanf("%d", &count2);
        printf("�`�@ %d �M���M����� %d �M�j�M���\n", count1, count2);
        sum2 = count1*15 + count2*20;
        printf("����@ %d ��\n\n", sum2); 
        printf("�ٻݭn�I���Ƕ��ơA�Y���Ϋh��J 0 �Y�n�h");
        order();
     }
     else if(num == 3){
        printf("�C�����M�ݭn�X�M: ");
        scanf("%d", &count1);
        printf("�C���j�M�ݭn�X�M: "); 
        scanf("%d", &count2);
        printf("�`�@ %d �M���M�C���� %d �M�j�M�C��\n", count1, count2);
        sum3 = count1*15 + count2*20;
        printf("�C���@ %d ��\n\n", sum3); 
        printf("�ٻݭn�I���Ƕ��ơA�Y���Ϋh��J 0 �Y�n�h");
        order();
     } 
     else if(num == 4){
        printf("�������M�ݭn�X�M: ");
        scanf("%d", &count1);
        printf("�����j�M�ݭn�X�M: "); 
        scanf("%d", &count2);
        printf("�`�@ %d �M���M������ %d �M�j�M����\n", count1, count2);
        sum4 = count1*15 + count2*20;
        printf("�����@ %d ��\n\n", sum4);
        printf("�ٻݭn�I���Ƕ��ơA�Y���Ϋh��J 0 �Y�n�h");
        order(); 
     } 
     else if(num == 5){
        printf("�������M�ݭn�X�M: ");
        scanf("%d", &count1);
        printf("�����j�M�ݭn�X�M: "); 
        scanf("%d", &count2);
        printf("�`�@%d�M���M������%d�M�j�M����\n", count1, count2);
        sum5 = count1*20 + count2*25;
        printf("�����@%d��\n\n", sum5); 
        printf("�ٻݭn�I���Ƕ��ơA�Y���Ϋh��J 0 �Y�n�h");
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
     
     printf("�����q���`�X�� %d ��\n", sumall);
}

void end()
{
     printf("���¨ϥΥ��t�ΡA�T�T!!");  
      
}
    
    

