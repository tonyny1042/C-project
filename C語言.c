#include <stdio.h>
#include <string.h>

enum state {EXIT, RUN, WRONG_NAME, WRONG_CODE};

int main()
{
    // �ŧi�w�]���b���αK�X
    char userID[20] = "tonyny1042";
    char userCODE[20] = "123456";
    // �ŧi�Ȧs�ϥΪ̿�J���b���αK�X
    char inputName[20];
    char inputCode[20];
    // �ŧi�Ȧs���\�n�J���b���αK�X
    char whoName[20];
    char whoCode[20];
    // �ŧi�x�s�ثe���A
    int state;
    state = RUN;
    printf("Welcome to the Beverage ordering system!!\n");
    
    while (1) 
    {
        printf("�п�J�b��: ");    
        scanf("%s", inputName);
         
        //"exit" �����ث��O�A�Ψ����}�j��
        if (!strcmp(inputName, "exit")) 
        {
            state = EXIT;
            printf("\n�z�N�n���}���n�J�{��....\n\n");
            break;
        }
         
        // �P�_�ϥΪ̿�J���b���O�_�ۦP�A�Y�ۦP�~�A�~��n�D��J�K�X
        if (!strcmp(inputName, userID)) 
        {
            printf("�п�J�K�X: ");
            scanf("%s", inputCode);
             
            if (!strcmp(inputCode, userCODE))
            {
                strcpy(whoName, inputName);
                strcpy(whoCode, inputCode);
                 
                printf("\n\n���o�A %s �A �w��ϥΥ��n�J�{��...\n\n", whoName);
                state = RUN;
            }
            else 
            {
                state = WRONG_CODE;
            }
        }
        else
        {
            state = WRONG_NAME;
        }
         
        // �P�_�ثe���A�A��ܴ��ܰT��
        if (state == RUN) {
            continue;
        }
        else if (state == WRONG_NAME) {
            printf("\n\n�S���o�W�ϥΪ̳�I�Э��s�n�J....\n\n");
            continue;
        }
        else if (state == WRONG_CODE) {
            printf("\n\n�K�X���~�A�Э��s�n�J....\n\n");
            continue;
        }
    }
     
    printf("\n\n�t�ΧY�N�����A�w��U���~��ϥ� BYE BYE\n");
    
    system("pause"); 
    return 0;
}
    
    

