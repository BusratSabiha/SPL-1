#include<bits/stdc++.h>
using namespace std;
#include<string.h>
//#include<conio.h>
#include"main_code.h"
#include<graphics.h>

char l_name[100];char password[100];char pass[100];char name[100];char email[100];char email_check[100];char check_name[100];int level=0;char check_password[100];
int result=1;
int for_indexing=0;



/*************************************************************************************/


bool isChar(char c)
{
    return ((c >= 'a' && c <= 'z')
            || (c >= 'A' && c <= 'Z'));
}

// Function to check the character
// is an digit or not
bool isDigit(const char c)
{
    return (c >= '0' && c <= '9');
}

// Function to check email id is
// valid or not
bool is_valid(string email)
{
    // Check the first character
    // is an alphabet or not
    if (!isChar(email[0])) {

        // If it's not an alphabet
        // email id is not valid
        return 0;
    }
    // Variable to store position
    // of At and Dot
    int At = -1, Dot = -1;

    // Traverse over the email id
    // string to find position of
    // Dot and At
    for (int i = 0;
         i < email.length(); i++) {

        // If the character is '@'
        if (email[i] == '@') {

            At = i;
        }

        // If character is '.'
        else if (email[i] == '.') {

            Dot = i;
        }
    }

    // If At or Dot is not present
    if (At == -1 || Dot == -1)
        return 0;

    // If Dot is present before At
    if (At > Dot)
        return 0;

    // If Dot is present at the end
    return !(Dot >= (email.length() - 1));
}




/**************************************************************************************/





void reg()
{


     FILE *fp,*fp1;

     //FILE *fp,fp1;

    fp1=fopen("spl1_demo.txt","r");

    int for_checking;




    printf("Please enter your name\n");

    scanf("%s",&l_name);


    while(1)
    {
        for_checking=-1;
        printf("please enter your email");

        scanf("%s",&email);

        bool validity=is_valid(email);

        if(validity)
        {

         while(!feof(fp1))

           {
                fscanf(fp1,"%s  %s  %s  %d\n",&check_name,&email_check,&check_password,&level);

                if(strcmp(email_check,email)==0)
                {

                    for_checking=1;

                    printf("\n SORRY DUPLICATE E-MAIL...\nTry again...\n");

                    break;
                }


           }



        }

        else
        {
            for_checking=1;
            printf("Your email address is not valid......\nPlease try again......\n");
        }


        if(for_checking==-1)break;

    }



    while(1)
    {
        printf("Please enter your password(greater than 8)\n");
    //gets(password);
     scanf("%s",&password);

     if(strlen(password)>=8)break;

     else{

         printf("\nInvalid Password......\nPlease try again...\n");
     }

    }



         cout<<"\nRegistration successfully done!\n\n";


   fp=fopen("spl1_demo.txt","a");

    result=coding(1);

    //cout<<result;


    //FILE *fp;




    fprintf(fp,"%s  %s  %s  %d\n",l_name,email,password,result);

    fclose(fp);
    fclose(fp1);

}



void log()
{


    char pqr[100],nm[100],mail[100];int num;

    FILE *ptr,*ptr2;
    ptr=fopen("spl1_demo.txt","r");

    int for_check;




    while(1)
    {
        for_check=-1;



        printf("enter your email address");
        scanf("%s",&email);


    printf("enter your password");
    scanf("%s",&pass);


    ptr2=fopen("spl1_demo_modified.txt","w");





         while(!feof(ptr))
    {

        fscanf(ptr,"%s  %s  %s  %d\n",&nm,&mail,&pqr,&num);


        if(strcmp(email,mail)!=0||strcmp(pass,pqr)!=0){


            }


        else{

            for_check=1;
    printf("\ncongrats!.....You can proceed \n");


     num=coding(num);


    }


    fprintf(ptr2,"%s  %s  %s  %d\n",nm,mail,pqr,num);


    }

    if(for_check==1)break;

    else{

    printf("\nYou haven't regestared yet...\ntry again...\n");
    }


    }

    fclose(ptr);
    fclose(ptr2);

    remove("spl1_demo.txt");


    rename("spl1_demo_modified.txt","spl1_demo.txt");





}

int main(void)
{
  int option;
  //string l_name,password;

  printf("welcome to EduGame\n");

   /*int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    //getch();

    setcolor(YELLOW);
    outtextxy(200,100,"WELCOME TO EduGame");

    getch();

    closegraph();
    return 0;*/




  printf("1:Registration\n2:log_in\n");
  scanf("%d",&option);

  if(option==1)
  {


    reg();

  }

  if(option==2)
  {


    log();

  }



}


