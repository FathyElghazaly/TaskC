#include<stdio.h>
#include<string.h>
struct account
{
   char Email[20];
   char Password[20];
};

int main(){
    struct account acc1 , acc2 ;
    char checkEmail[20];
    char checkPassword[20] ;

    strcpy(acc1.Email, "Fathy@yahoo.com");
    strcpy(acc1.Password , "55555") ;
    strcpy(acc2.Email, "Elghazaly@yahoo.com");
    strcpy(acc2.Password , "88888") ;
    
    printf("\n Enter your username : ");
    scanf("%s", &checkEmail);
    printf("\n Enter your password : ");
    scanf("%s", &checkPassword);
    if (strcmp(checkEmail,acc1.Email)==0 && strcmp(checkPassword,acc1.Password)==0){
        printf("\n Succesful ");
    }else if (strcmp(checkEmail,acc2.Email)==0 && strcmp(checkPassword,acc2.Password)==0)
    {
     printf("\n Succesful ");
    }else{
        printf("\n Unsuccessfil ");
    }
    
    
    return 0;
}