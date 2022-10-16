#include<stdio.h>
#include<string.h>
struct person{
    long int mobile;
    char fname[20], lname[20];
};
void record();
void view();
void menu();
void view();

int main(){
    menu();

    return 0;
}
void record(){
    FILE *f;
    struct person a;
    f=fopen("phone","ab+");
    printf("\n\nEnter First Name:");
    scanf("%s", &a.fname);
    printf("\nEnter Last Name:");
    scanf("%s", &a.lname);
    printf("\nEnter Mobile Number:");
    scanf("%ld", &a.mobile);
    fwrite(&a,sizeof(a),1,f);
    fclose(f);
    menu();
}
void view(){
    FILE *f;
    struct person a;
    f=fopen("phone","r");
    if(f==NULL){
        printf("\nerror");
    }
    while(fread(&a,sizeof(a),1,f)==1){
        printf("\n%s %s\n %ld",a.fname,a.lname,a.mobile);
    }
    fclose(f);
    getchar();
    menu();
}
void switchs(){
    int choose;
    scanf("%d", &choose);
    switch(choose){
        case 1:record();
        break;
        case 2:view();
        break;
        default:printf("\nchoose 1 or 2");
        
    }
    
}
void menu(){
    printf("\n1.add number");
    printf("\n2.details");
    switchs();
}