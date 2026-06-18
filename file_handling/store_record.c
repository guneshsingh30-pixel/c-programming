#include<stdio.h>
struct student {char name[20];
     int roll_no;
    float per;
};
int main(){
    FILE *fp1;
    fp1=fopen("file.txt","w");

    struct student n[3];
    for(int i=0;i<3;i++){
        scanf("%s",n[i].name);
        scanf("%d",&n[i].roll_no);
        scanf("%f",&n[i].per);
    }
    for(int i=0;i<3;i++){
        for(int j=0;n[i].name[j]!='\0';j++){
            putc(n[i].name[j],fp1);
        }
        putc('\n',fp1);
        putw(n[i].roll_no,fp1);
        putc('\n',fp1);     
        putw(n[i].per,fp1);
        putc('\n',fp1);

    }
    fclose(fp1);    
    fp1=fopen("file.txt","r");
    struct student m[3];
    for(int i=0;i<3;i++){
        int j=0;
        char ch;
        while((ch=getc(fp1))!='\n'){
            m[i].name[j]=ch;
            j++;
        }
        m[i].name[j]='\0';
        m[i].roll_no=getw(fp1);
        getc(fp1); // to consume newline
        m[i].per=getw(fp1);
        getc(fp1); // to consume newline
    }
    for(int i=0;i<3;i++){
        printf("Name: %s\n",m[i].name);
        printf("Roll No: %d\n",m[i].roll_no);
        printf("Percentage: %.2f\n",m[i].per);
    }
    fclose(fp1);
    
    return 0;
    
}

