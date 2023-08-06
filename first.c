# include<stdio.h>
// this is single line comment
/*d stand for double data type
*/
int main(){
    printf("Hello C \n");
    int age=22;
    printf("age is %d \n",age);
    float pi=3.14;
    printf("value of pi is %f \n",pi);
    printf("enter age:");
    scanf("%d",&age);
    printf("New age is %d \n",age);
    int a,b;
    printf("enter value of a:");
    scanf("%d",&a);
    printf("enter value of b:");
    scanf("%d",&b);
    int sum=a+b;
    printf("sum = %d \n",sum);
    printf("difference is %d \n",a-b);
    printf("%d \n",2*a + 3*b);
    printf("The sum of %d and %d is %d\n",a,b,sum);
    printf("FILE question::");
    printf("How many records you wnat to enter: ");
    int n;
    scanf("%d",&n);
    struct student{
        int rn;
        char name[50];
    }s[n];
    FILE *fp;
    fp=fopen("new.txt","w");
    for(int i=0;i<n;i++){
        printf("Enter roll number and name: ");
        scanf("%d %s",&s[i].rn,&s[i].name);
    }
    fwrite(&s,sizeof(s),1,fp);
    fclose(fp);
    fp=fopen("new.txt","r");
    while(!feof(fp)){
        fread(&s,sizeof(s),1,fp);
    }
    for(int i=0;i<n;i++){
        printf("%d  %s\n",s[i].rn,s[i].name);
    }
    fclose(fp);
    return 0;
}






#include<stdio.h>
#include<string.h>
int main(){
    printf("How many records you wnat to enter: ");
    int n;
    scanf("%d",&n);
    struct student{
        int rn;
        char name[50];
    }s[n];
    FILE *fp;
    fp=fopen("new.txt","w");
    for(int i=0;i<n;i++){
        printf("Enter roll number and name: ");
        scanf("%d %s",&s[i].rn,&s[i].name);
    }
    fwrite(&s,sizeof(s),1,fp);
    printf("The position of cursor is: %d\n",ftell(fp));
    fseek(fp,-4,SEEK_END);
    printf("The new position of the cursor is: %d\n",ftell(fp));
    fclose(fp);
    fp=fopen("new.txt","r");
    while(!feof(fp)){
        fread(&s,sizeof(s),1,fp);
    }
    for(int i=0;i<n;i++){
        printf("%d  %s\n",s[i].rn,s[i].name);
    }
    fclose(fp);
    return 0;
}