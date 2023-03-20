
#include<graphics.h>
#include<bits/stdc++.h>
using namespace std;
#include<conio.h>
#include<dos.h>
#include<stdlib.h>

int count3=0,x,y,rad=15,ans=0;
char ch;

struct node
{
    int parda;
    int qanna;
};

void tostring(char str[],int num)
{
    int rem,len=0,n;
    n=num;

    while(n!=0)
    {
        len++;
        n/=10;
    }

    for(int jal=0; jal<len; jal++)
    {
        rem=num%10;
        num=num/10;
        str[len-(jal+1)]=rem+'0';
    }

    str[len]='\0';
}


void changeColor(int x,int y,int co)
{

    setfillstyle(SOLID_FILL,co);
    circle(x,y,rad);
    floodfill(x,y,WHITE);

}


void game_part()
{

    //qn1


   char q1;

   cout<<"1. Topological sort can be applied to which of the following graphs?"<<"\n"<<" a. Undirected Cyclic Graphs"<<"\n"<<" b. Undirected Acyclic Graphs"<<"\n"<<" c. Directed Cyclic Graphs"<<"\n"<<" d. Directed Acyclic Graphs"<<"\n";

   cin>>q1;

   if(q1=='d'||q1=='D'){cout<<"congratulation!! the answer is right"<<"\n";ans++;}

   else{
    cout<<"The answer is wrong"<<"\n"<<"The right answer is 'd'"<<"\n";
   }


   scanf("%c",&ch);

   cout<<"2. Most Efficient Time Complexity of Topological Sorting is? ?"<<"\n"<<" a.O(V)"<<"\n"<<" b. O(E*V)"<<"\n"<<" c. O(|V|+|E|)"<<"\n"<<" d. O(E)"<<"\n";

   cin>>q1;

   if(q1=='c'||q1=='C'){cout<<"congratulation!! the answer is right"<<"\n";ans++;}

   else{
    cout<<"The answer is wrong"<<"\n"<<"The right answer is 'c'"<<"\n";
   }


   scanf("%c",&ch);
   scanf("%c",&ch);

    char strans[10],fixed_ans[10];
    struct node pos3[6];
     int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"");

    //for qn1
         while(count3<6)
         {
            char str[20];
         count3++;
         tostring(str,count3);
         if(count3==1){x=200;y=100;}
         if(count3==2){x=400;y=100;}
         if(count3==3){x=200;y=300;}
         if(count3==4){x=400;y=300;}
         if(count3==5){x=100;y=200;}
         if(count3==6){x=500;y=200;}
         //if(count3==7){x=100;y=400;}
         //if(count3==8){x=250;y=400;}
         //if(count3==9){x=400;y=400;}
         //setcolor(RED);
         outtextxy(x,y-30,str);
         //setcolor(WHITE);
        circle(x,y,rad);

       if(count3==2)
       {
          setfillstyle(SOLID_FILL,WHITE);
          floodfill(x,y,WHITE);
       }

       else{
       setfillstyle(SOLID_FILL,WHITE);
       floodfill(x,y,WHITE);

       }


      pos3[count3].parda=x;
      pos3[count3].qanna=y;

         }

         setcolor(RED);
         outtextxy((pos3[1].parda+pos3[2].parda)/2,((pos3[1].qanna+pos3[2].qanna)/2)-10,">");
          outtextxy((pos3[2].parda+pos3[6].parda)/2+1,((pos3[2].qanna+pos3[6].qanna)/2)-5,"4");
          outtextxy((pos3[4].parda+pos3[6].parda)/2,((pos3[4].qanna+pos3[6].qanna)/2)-10,"L");
          outtextxy((pos3[3].parda+pos3[4].parda)/2,((pos3[3].qanna+pos3[4].qanna)/2)-10,"<");
          outtextxy((pos3[3].parda+pos3[5].parda)/2+1,((pos3[3].qanna+pos3[5].qanna)/2)-2,"4");
          outtextxy((pos3[1].parda+pos3[5].parda)/2-2,((pos3[1].qanna+pos3[5].qanna)/2)-7,"7");
          //outtextxy((pos3[1].parda+pos3[3].parda)/2-3,((pos3[1].qanna+pos3[3].qanna)/2),"V");
          //outtextxy((pos3[2].parda+pos3[4].parda)/2-3,((pos3[2].qanna+pos3[4].qanna)/2),"V");
          //outtextxy((pos3[2].parda+pos3[3].parda)/2-2,((pos3[2].qanna+pos3[3].qanna)/2)-7,"7");



          setcolor(WHITE);


         line(pos3[1].parda,pos3[1].qanna,pos3[2].parda,pos3[2].qanna);
         line(pos3[6].parda,pos3[6].qanna,pos3[2].parda,pos3[2].qanna);

         line(pos3[1].parda,pos3[1].qanna,pos3[5].parda,pos3[5].qanna);
         line(pos3[4].parda,pos3[4].qanna,pos3[3].parda,pos3[3].qanna);
         line(pos3[4].parda,pos3[4].qanna,pos3[6].parda,pos3[6].qanna);

         line(pos3[5].parda,pos3[5].qanna,pos3[3].parda,pos3[3].qanna);


       cout<<"3. Topological Sorting will start with vertex..."<<"\n"<<" a. 5"<<"\n"<<" b. 2"<<"\n"<<" c. 3"<<"\n"<<" d. 1"<<"\n";

    cin>>q1;

    if(q1=='a'||q1=='A'){cout<<"congratulation!! the answer is right"<<"\n";ans++;}

   else{
    cout<<"The answer is wrong"<<"\n"<<"The right answer is 'a'"<<"\n";
   }


   scanf("%c",&ch);


       cout<<"4. If the edge 5 -> 3 is redirected to 3 -> 5 for the given graph, then which of the following topological sortings will be possible?"<<"\n"<<" a. 5 -> 1 -> 2 -> 6 -> 4 -> 3"<<"\n"<<" b. 5 -> 3 -> 4 -> 6 -> 2 -> 1"<<"\n"<<" c. 4 -> 3 -> 2 -> 1 -> 6 -> 5"<<"\n"<<" d. None"<<"\n";

    cin>>q1;

    if(q1=='d'||q1=='D'){cout<<"congratulation!! the answer is right"<<"\n";ans++;}

   else{
    cout<<"The answer is wrong"<<"\n"<<"The right answer is 'd'"<<"\n";
   }


   scanf("%c",&ch);


   cout<<"5. Which of the following topological sortings will be possible for the given graph??"<<"\n"<<" a. 5 -> 1 -> 2 -> 6 -> 4 -> 3"<<"\n"<<" b. 5 -> 3 -> 2 -> 6 -> 4 -> 1"<<"\n"<<" c. Both a & b"<<"\n"<<" d. None"<<"\n";

   cin>>q1;

   if(q1=='a'||q1=='A'){cout<<"congratulation!! the answer is right"<<"\n";ans++;}

   else{
    cout<<"The answer is wrong"<<"\n"<<"The right answer is 'a'"<<"\n";
   }


   scanf("%c",&ch);




      getch();
      closegraph();

}

int main(void)
{
    game_part();
}


