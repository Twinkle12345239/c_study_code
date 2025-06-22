#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 初始密码、余额
char password[7] = "123456";
float balance = 1000.0;

//函数声明
int YZ_Password();  // 验证密码函数
void Change_Password();// 修改密码函数
void Check_Balance();// 查询余额函数
void Withdraw_Money();// 取款函数
void Deposit_Money();// 存款函数
void Transfer_Money();// 转账函数

int main() 
{
    int choice;

    // 密码验证
    if (!YZ_Password()) 
    {
        printf("密码验证失败，程序退出。\n");
        return 0;
    }
    else
        printf("密码验证成功，进入主界面！\n");

    // 主菜单循环
    while (1) 
    {
        printf("\n=== 主界面 ===\n");
        printf("1：修改密码   2：查询余额   3：取款\n");
        printf("4：存款       5：转账       0：退出\n");
        printf("请输入操作指令：");
        scanf("%d", &choice);

        switch (choice) 
        {
        case 1:
            Change_Password();
            break;
        case 2:
            Check_Balance();
            break;
        case 3:
            Withdraw_Money();
            break;
        case 4:
            Deposit_Money();
            break;
        case 5:
            Transfer_Money();
            break;
        case 0:
            printf("退出程序，感谢使用！\n");
            return 0;
        default:
            printf("无效指令，请重新输入！\n");
        }
    }

    return 0;
}

// 验证密码函数
int YZ_Password()
{
    char inputPwd[7];
    printf("请输入密码：");
    scanf("%s", inputPwd);
    // 判断密码正确性
    return  strcmp(inputPwd, password) == 0;
}

// 修改密码函数
void Change_Password()
{
    char oldPwd[7], newPwd_1[7], newPwd_2[7];
    printf("请输入原密码：");
    scanf("%s", oldPwd);

    if (strcmp(oldPwd, password) == 0)
    {
        printf("请输入新密码（6 位）：");
        scanf("%s", newPwd_1);
        if (strlen(newPwd_1) == 6)
        {
            printf("请再次输入新密码！\n");
            scanf("%s", newPwd_2);
            if (strcmp(newPwd_1, newPwd_2) == 0)
            {
                strcpy(password, newPwd_1);
                printf("密码修改成功！\n");
            }
            else
                printf("两次密码输入不一致，请重新操作。\n");
        }
        else
            printf("新密码必须为 6 位，请重新操作。\n");

    }
    else
        printf("原密码错误，请重新操作。\n");
}

// 查询余额函数
void Check_Balance()
{
    printf("当前账户余额：%.2f 元\n", balance);
}

// 取款函数
void Withdraw_Money()
{
    float amount;
    printf("请输入取款金额：");
    scanf("%f", &amount);

    if (amount > 0 && amount <= balance)
    {
        balance -= amount;
        printf("取款成功！！！\n");
    }
    else
        printf("输入错误！取款金额不能超过余额，请重新输入。\n");
}

void Deposit_Money()
{
    float amount;
    printf("请输入存款金额：");
    scanf("%f", &amount);

    if (amount > 0)
    {
        balance += amount;
        printf("存款成功！\n");
    }
    else
    {
        printf("输入错误！存款金额不正确，请重新输入。\n");
    }
}

// 转账函数
void Transfer_Money()
{
    char account[17];//对方账号
    float amount;

    printf("请输入对方 16 位账号：");
    scanf("%s/n", account);
    printf("请输入转账金额：");
    scanf("%f", &amount);

    if (amount > 0 && amount <= balance)
    {
        balance -= amount;
        printf("转账成功！\n");
    }
    else
    {
        printf("输入错误！转账金额不能超过余额，请重新输入。\n");
    }
}