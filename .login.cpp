#include<bits/stdc++.h>
using namespace std;
#include<string.h>
#include<conio.h>
#include<stdlib.h>

void reg(void);
void login(void);
int count1=0;

struct login{
char fname[100];
char lname[20];
char username[20];
char password[20];
};

void reg()
{
    FILE *log;
    log=fopen("login12.txt","w");
    struct login l;
    printf("enter first name:");scanf("%s",l.fname);
    printf("enter last name:");scanf("%s",l.lname);
    printf("enter user name:");scanf("%s",l.username);
    printf("enter password:");scanf("%s",l.password);

    fwrite(&l,sizeof(l),1,log);

    fclose(log);

    printf("\n\nyour name is userID\n");
    printf("\n\nnow log in with userID & password\n");
    printf("\n\npress any key to continue.........\n");
    getchar();
    system("CLS");
    login();

}

void login()
{
    char user_name[200],pass[20];
    FILE *log;
    log=fopen("login12.txt","r");
    struct login l;
    printf("enter userID: ");
    scanf("%s",&user_name);
    printf("enter password: ");
    scanf("%s",&pass);

    while(fread(&l,sizeof(l),1,log))
    {
        if(strcmp(user_name,l.username)==0&&strcmp(pass,l.password)==0)
        {
            printf("succesful login\n");count1=1;

        }
        else
        {
            printf("please enter correct userID and password");
        }

        //if(count1!=0)break;
    }

    fclose(log);


}


int main(void)
{
  int choice;
  printf("\npress '1' for register\npress '2' for login\n\n");
  scanf("%d",&choice);

  if(choice==1){
    system("CLS");
    reg();
  }

  else if(choice==2)
  {
   system("CLS");
    login();
  }

}
