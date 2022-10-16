#include<stdio.h>
void menu();
void menu1();
void switchs();
void add();
void multi();
void sub();
void div();
void close();
struct menu1{
    int d;
};

int main(){
    menu();

    return 0;
}
void menu(){
    printf("\n1.Addition");
    printf("\n2.Subtrction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\n5.Exit");
    printf("\n\nCHOOSE:");
    switchs();
}
void switchs(){
    int choose;
    scanf("%d", &choose);
    switch(choose){
        case 1:add();
        break;
        case 2:sub();
        break;
        case 3:multi();
        break;
        case 4:div();
        break;
        case 5:close();
        break;
        default:printf("\nplease choose correct!!!");
    }
}
void add(){
    int a,b,c,i,ds;
    printf("\n\nEnter First Number:");
    scanf("%d", &a);
    printf("\nEnter Second Number:");
    scanf("%d", &b);
    c=a+b;
    printf("\nAddition:%d\n\n",c);
    for(i=0;i<=100;i++){
    printf("*");
    }
    printf("\n\n1.Continue\n2.Menu\n3.Exit\n\nChoose:");
    scanf("%d", &ds);
    if(ds==1){
        add();
    }
    else if(ds==2){
        menu();
    }
    else if (ds==3){
        close();
    }
    else{
        printf("\nSOMETHING WENT WRONG........!\n");

    }
}
void close(){
    printf("\n\nCALCULATOR PROJECT DEVELOPED BY TUSHAR GADE\t\n\n\n");
}
void multi(){
    int q,w,e,r,t;
    printf("\n\nEnter First Number:");
    scanf("%d", &q);
    printf("\nEnter Second Number:");
    scanf("%d", &w);
    e=q*w;
    printf("\nMultiplication:%d\n\n",e);
    for(r=0;r<=100;r++){
    printf("*");
    }
    printf("\n\n1.Continue\n2.Menu\n3.Exit\n\nChoose:");
    scanf("%d", &t);
    if(t==1){
        multi();
    }
    else if(t==2){
        menu();
    }
    else if (t==3){
        close();
    }
    else{
        printf("\nSOMETHING WENT WRONG........!\n");
    }
}
void sub(){
    int q,w,e,r,t;
    printf("\n\nEnter First Number:");
    scanf("%d", &q);
    printf("\nEnter Second Number:");
    scanf("%d", &w);
    e=q-w;
    printf("\nSubtraction:%d\n\n",e);
    for(r=0;r<=100;r++){
    printf("*");
    }
    printf("\n\n1.Continue\n2.Menu\n3.Exit\n\nChoose:");
    scanf("%d", &t);
    if(t==1){
        sub();
    }
    else if(t==2){
        menu();
    }
    else if (t==3){
        close();
    }
    else{
        printf("\nSOMETHING WENT WRONG........!\n");
    }
}
void div(){
    float q,w,e;
    int t,r;
    printf("\n\nEnter First Number:");
    scanf("%f", &q);
    printf("\nEnter Second Number:");
    scanf("%f", &w);
    e=q/w;
    printf("\nDivision:%f\n\n",e);
    for(r=0;r<=100;r++){
    printf("*");
    }
    printf("\n\n1.Continue\n2.Menu\n3.Exit\n\nChoose:");
    scanf("%d", &t);
    if(t==1){
        div();
    }
    else if(t==2){
        menu();
    }
    else if (t==3){
        close();
    }
    else{
        printf("\nSOMETHING WENT WRONG........!\n");
    }
}
