#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
void menu();
void menu1();
void close();
void create();
void switchs();
void details();
void deposite();
void transfar();
void check();
struct info{
    int id, pwd,newamount,amount,to,toamount;
    long int mobile;
    char fname[10],lname[10];
};
int main(){
    menu();
    return 0;
}
void menu1(){
    int a;
    printf("\n\n1.Menu\n2.Exit\nCHOOSE:");
    scanf("%d", &a);
    if(a==1){
        menu();
    }
    else if(a==2){
        close();
    }
    else {
        printf("\nSOMETHING WENT WRONG........!\n");
    }
}
void close(){
    printf("\n\t\tBANK PROJECT DEVELOPED BY TUSHAR GADE\t\t\n\n");
}
void menu(){
    printf("\n1.Create Account");
    printf("\n2.Deposite money");
    printf("\n3.Transfar money");
    printf("\n4.Details");
    printf("\n5.Check");
    printf("\n6.Exit");
    printf("\nCHOOSE:");
    switchs();
}
void switchs(){
    int choose;
    scanf("%d", &choose);
    switch(choose){
        case 1:system("cls");
        create();
        break;
        case 2:system("cls");
        deposite();
        break;
        case 3:system("cls");
        transfar();
        break;
        case 4:system("cls");
        details();
        break;
        case 5:system("cls");
        check();
        case 6:system("cls");
        close();
        break;
        default:printf("\nPLEASE CHOOSE 1 TO 6");
        switchs();
    }

}
void create(){
    struct info f1;

    FILE *money,*fp;
    money=fopen("deposite","w");
    fp=fopen("username","w");
    if(fp==NULL){
        printf("\nFile Opening ERROR!");
        menu();

    }
    printf("\nEnter First Name:");
    scanf("%s", &f1.fname);
    printf("\nEnter Last Name:");
    scanf("%s", &f1.lname);
    printf("\nEnter Mobile no:");
    scanf("%ld", &f1.mobile);
    printf("\nID(allowed only numbers):");
    scanf("%d", &f1.id);
    printf("\nPASSWORD(allowed only numbers):");
    scanf("%d", &f1.pwd);
    system("cls");
    printf("Enter Amount you want add: ");
    scanf("%d", &f1.newamount);
    if(f1.newamount>=120000){
        printf("\n\n<Tera baap chodke gaya tha ya teri ma>\n");
        printf("Add Amount Successfully Bhikari");    
       fwrite(&f1, sizeof(f1), 1, money);  
    }
    else{
        printf("\n\tAmount Add Sucessfully\n\n");
    }
    fwrite(&f1, sizeof(f1), 1, fp);
     fclose(money);
    fclose(fp);
    printf("Enter any key.....!");
    getch();
    system("cls");
    menu();

}
void details(){
    struct info f1;
    FILE *f,*money;
    money=fopen("deposite","rb");
    f=fopen("username","rb");
    if(f==NULL){
        printf("\nFile Opening ERROR1");
    }
    while(fread(&f1,sizeof(f1),1,f)==1){
    printf("\nName: %s %s",f1.fname,f1.lname);
    printf("\n\nMobile No:%ld",f1.mobile);
    printf("\n\nID:%d\n\nPASSWORD:%d",f1.id,f1.pwd);
    }
    fclose(f);
    printf("\nEnter Any Key......");
    getch();
    system("cls");
    menu();
}
void deposite(){
    struct info f1;
    long int newid;
    FILE *money, *f;
    money=fopen("deposite","w");
    f=fopen("username","rb");
    if(f==NULL){
        printf("\nFile Opening ERROR1");
    }
    if(money==NULL){
        printf("\nFile Opening ERROR!");
        menu();

    }
    while(fread(&f1,sizeof(f1),1,f)==1){
    printf("\nEnter your ID:");
    scanf("%d", &newid);
    if(f1.id==newid){
        printf("\n\nEnter Amount:");
        scanf("%d", &f1.amount);
        f1.newamount=f1.amount+f1.newamount;
        printf("%d",f1.newamount);
        printf("\n\t\t\nAmount Add Successfully...");
        fwrite(&f1, sizeof(f1), 1, money);
    
        }
    else{
        printf("\nCheck your ID....\n\n");
        menu();
    }
    }
    fclose(money);
    fclose(f);
    printf("\nEnter Any Key........");
    getch();
    system("cls");
    menu();
}
void transfar(){
    struct info f1;
    long int newid;
    FILE *money, *f;
    money=fopen("deposite","w");
    f=fopen("username","rb");
    if(f==NULL){
        printf("\nFile Opening ERROR1");
    }
    if(money==NULL){
        printf("\nFile Opening ERROR!");
        menu();

    }
    while(fread(&f1,sizeof(f1),1,f)==1){
    printf("\nEnter your ID:");
    scanf("%d", &newid);
    if(f1.id==newid){
        printf("\nEnter ID(you want send money)");
        scanf("%d", &f1.to);
        printf("\nEnter Amount:");
        scanf("%d", &f1.toamount);
        if(f1.toamount<=f1.newamount){
        f1.newamount-=f1.toamount;
        printf("\n\n\t\tAmount Transfar Successfully.......\n");
        printf("Available Balance:%d",f1.newamount);
        fwrite(&f1, sizeof(f1), 1, money);
        }
        else{
            printf("\nYou Need More money for Successful transaction\n");
            printf("\nEnter Any Key........");
    getch();
        }
    }
    else {
        printf("\nCheck Your ID......");
        system("cls");
        transfar();
    }   
    }
    fclose(money);
    fclose(f);
    printf("\nEnter Any Key........");
    getch();
    system("cls");
    menu();
}
void check(){
    struct info f1;
    FILE *money;
    money=fopen("deposite","r");
    if(money==NULL){
        printf("\nFile Opening ERROR!");
        menu();

    }
    while(fread(&f1,sizeof(f1),1,money)==1){
        printf("\n\t\t\nAvailable Balance:%d\n",f1.newamount);
    }
    fclose(money);
    printf("\nEnter Any Key........");
    getch();
    system("cls");
    menu();
}