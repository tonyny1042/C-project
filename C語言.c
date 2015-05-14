#include <stdio.h>
#include <string.h>

enum state {EXIT, RUN, WRONG_NAME, WRONG_CODE};

int main()
{
    // 宣告預設的帳號及密碼
    char userID[20] = "tonyny1042";
    char userCODE[20] = "123456";
    // 宣告暫存使用者輸入的帳號及密碼
    char inputName[20];
    char inputCode[20];
    // 宣告暫存成功登入的帳號及密碼
    char whoName[20];
    char whoCode[20];
    // 宣告儲存目前狀態
    int state;
    state = RUN;
    printf("Welcome to the Beverage ordering system!!\n");
    
    while (1) 
    {
        printf("請輸入帳號: ");    
        scanf("%s", inputName);
         
        //"exit" 為內建指令，用來離開迴圈
        if (!strcmp(inputName, "exit")) 
        {
            state = EXIT;
            printf("\n您將要離開本登入程式....\n\n");
            break;
        }
         
        // 判斷使用者輸入的帳號是否相同，若相同才再繼續要求輸入密碼
        if (!strcmp(inputName, userID)) 
        {
            printf("請輸入密碼: ");
            scanf("%s", inputCode);
             
            if (!strcmp(inputCode, userCODE))
            {
                strcpy(whoName, inputName);
                strcpy(whoCode, inputCode);
                 
                printf("\n\n哈囉， %s ， 歡迎使用本登入程式...\n\n", whoName);
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
         
        // 判斷目前狀態，顯示提示訊息
        if (state == RUN) {
            continue;
        }
        else if (state == WRONG_NAME) {
            printf("\n\n沒有這名使用者喔！請重新登入....\n\n");
            continue;
        }
        else if (state == WRONG_CODE) {
            printf("\n\n密碼錯誤，請重新登入....\n\n");
            continue;
        }
    }
     
    printf("\n\n系統即將關閉，歡迎下次繼續使用 BYE BYE\n");
    
    system("pause"); 
    return 0;
}
    
    

