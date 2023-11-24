#include <stdio.h>
#include <time.h>
typedef struct{
    char name[256];
    int Quantity;
    float unit;
    float amount;
}product;
void create();
void display();
void finish();
int main(){
    int ch;
    do{
    printf("1. Input product\n");
    printf("2. DISPLAY\n");
    printf("3. Finish\n");
    printf("0. Exit\n");
    printf("Enter your choice : ");
    scanf("%d",&ch);
    switch(ch){
        case 1: 
            create(); 
            break;
        case 2:
            display();
            break;
        case 3:
            finish();
            break;
    }
    }while (ch!=0);
return 0;
}

void create(){
    product p;
    FILE *fp = fopen("receipt.txt", "a+");
    printf("Enter Product Name : ");
    scanf("%s",&p.name);
    printf("Enter Quantity : ");
    scanf("%d",&p.Quantity);
    printf("Enter unit : ");
    scanf("%f",&p.unit);
    p.amount = p.Quantity * p.unit;
    fwrite(&p,sizeof(product),1,fp);

    fclose(fp);
}

void display(){
    product p;
    FILE *fp =fopen("receipt.txt","r");
    printf("                          RECEIPT                              \n");
    printf("-------------------------------------------------------------------\n");
    printf("%-15s%-15s%-10s%-8s\n","name","Quantity","unit","amount");
    printf("-------------------------------------------------------------------\n");
    while (fread(&p,sizeof(product),1,fp))
    {
        printf("%-15s%-15d%-10.2f%-8.2f\n",p.name,p.Quantity,p.unit,p.amount);
    }
    fclose(fp);
}

void finish(){
    int sum = 0;
    float tax = 0;
    product p;
    time_t t = time(NULL);
    struct tm date = *localtime(&t);
    FILE *fp =fopen("receipt.txt","r");
    printf("                     -----RECEIPT-----                         \n");
    printf("                      DATE %d-%02d-%02d                         \n",date.tm_year + 1900 ,date.tm_mon+1,date.tm_mday);
    printf("-------------------------------------------------------------------\n");
    printf("%-15s%-15s%-10s%-8s\n","name","Quantity","unit","amount");
    printf("-------------------------------------------------------------------\n");
    while (fread(&p,sizeof(product),1,fp))
    {
        printf("%-15s%-15d%-10.2f%-8.2f\n",p.name,p.Quantity,p.unit,p.amount);
        sum += p.amount;
    }
    tax = sum * (7.0/100.0);
    printf("-------------------------------------------------------------------\n");
    printf("%44s%.2f\n","Sub Total = ",sum+tax);
    printf("%44s%.2f\n","V.A.T = ",tax);
    printf("%44s%d\n","NETTOTAL = ",sum);
    fclose(fp);
    FILE *fw = fopen("receipt.txt","w");
    fclose(fw);
}