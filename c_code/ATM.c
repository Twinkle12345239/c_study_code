#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// ��ʼ���롢���
char password[7] = "123456";
float balance = 1000.0;

//��������
int YZ_Password();  // ��֤���뺯��
void Change_Password();// �޸����뺯��
void Check_Balance();// ��ѯ����
void Withdraw_Money();// ȡ���
void Deposit_Money();// ����
void Transfer_Money();// ת�˺���

int main() 
{
    int choice;

    // ������֤
    if (!YZ_Password()) 
    {
        printf("������֤ʧ�ܣ������˳���\n");
        return 0;
    }
    else
        printf("������֤�ɹ������������棡\n");

    // ���˵�ѭ��
    while (1) 
    {
        printf("\n=== ������ ===\n");
        printf("1���޸�����   2����ѯ���   3��ȡ��\n");
        printf("4�����       5��ת��       0���˳�\n");
        printf("���������ָ�");
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
            printf("�˳����򣬸�лʹ�ã�\n");
            return 0;
        default:
            printf("��Чָ����������룡\n");
        }
    }

    return 0;
}

// ��֤���뺯��
int YZ_Password()
{
    char inputPwd[7];
    printf("���������룺");
    scanf("%s", inputPwd);
    // �ж�������ȷ��
    return  strcmp(inputPwd, password) == 0;
}

// �޸����뺯��
void Change_Password()
{
    char oldPwd[7], newPwd_1[7], newPwd_2[7];
    printf("������ԭ���룺");
    scanf("%s", oldPwd);

    if (strcmp(oldPwd, password) == 0)
    {
        printf("�����������루6 λ����");
        scanf("%s", newPwd_1);
        if (strlen(newPwd_1) == 6)
        {
            printf("���ٴ����������룡\n");
            scanf("%s", newPwd_2);
            if (strcmp(newPwd_1, newPwd_2) == 0)
            {
                strcpy(password, newPwd_1);
                printf("�����޸ĳɹ���\n");
            }
            else
                printf("�����������벻һ�£������²�����\n");
        }
        else
            printf("���������Ϊ 6 λ�������²�����\n");

    }
    else
        printf("ԭ������������²�����\n");
}

// ��ѯ����
void Check_Balance()
{
    printf("��ǰ�˻���%.2f Ԫ\n", balance);
}

// ȡ���
void Withdraw_Money()
{
    float amount;
    printf("������ȡ���");
    scanf("%f", &amount);

    if (amount > 0 && amount <= balance)
    {
        balance -= amount;
        printf("ȡ��ɹ�������\n");
    }
    else
        printf("�������ȡ����ܳ��������������롣\n");
}

void Deposit_Money()
{
    float amount;
    printf("���������");
    scanf("%f", &amount);

    if (amount > 0)
    {
        balance += amount;
        printf("���ɹ���\n");
    }
    else
    {
        printf("������󣡴�����ȷ�����������롣\n");
    }
}

// ת�˺���
void Transfer_Money()
{
    char account[17];//�Է��˺�
    float amount;

    printf("������Է� 16 λ�˺ţ�");
    scanf("%s/n", account);
    printf("������ת�˽�");
    scanf("%f", &amount);

    if (amount > 0 && amount <= balance)
    {
        balance -= amount;
        printf("ת�˳ɹ���\n");
    }
    else
    {
        printf("�������ת�˽��ܳ��������������롣\n");
    }
}