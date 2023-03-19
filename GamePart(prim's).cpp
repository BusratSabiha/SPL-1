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

   cout<<"1. Which of the following is true?"<<"\n"<<" a. Prim's algorithm initializes with a vertex"<<"\n"<<" b. Prim's algorithm initializes with a edge"<<"\n"<<" c. Prim's algorithm initializes with a vertex which has smallest edge"<<"\n"<<" d. Prim's algorithm initializes with a forest"<<"\n";

   cin>>q1;

   if(q1=='a'||q1=='A'){cout<<"congratulation!! the answer is right"<<"\n";ans++;}

   else{
    cout<<"The answer is wrong"<<"\n"<<"The right answer is 'a'"<<"\n";
   }


   scanf("%c",&ch);

   cout<<"2. What is the worst case time complexity of Prim's algorithm if adjacency matrix is used?"<<"\n"<<" a.O(logV)"<<"\n"<<" b. O(V^2)"<<"\n"<<" c. O(E^2)"<<"\n"<<" d. O(V logE)"<<"\n";

   cin>>q1;

   if(q1=='b'||q1=='B'){cout<<"congratulation!! the answer is right"<<"\n";ans++;}

   else{
    cout<<"The answer is wrong"<<"\n"<<"The right answer is 'b'"<<"\n";
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
         /*if(count3==1){x=200;y=100;}
         if(count3==2){x=300;y=100;}
         if(count3==3){x=200;y=200;}
         if(count3==4){x=300;y=200;}
         if(count3==5){x=150;y=150;}
         if(count3==6){x=350;y=150;}*/
         //if(count3==7){x=100;y=400;}
         //if(count3==8){x=250;y=400;}
         //if(count3==9){x=400;y=400;}
         //setcolor(RED);

         if(count3==1){x=200;y=100;}
         if(count3==2){x=400;y=100;}
         if(count3==3){x=200;y=300;}
         if(count3==4){x=400;y=300;}
         if(count3==5){x=100;y=200;}
         if(count3==6){x=500;y=200;}

         outtextxy(x,y-30,str);
         //setcolor(WHITE);
        circle(x,y,rad);

       if(count3==5)
       {
          setfillstyle(SOLID_FILL,GREEN);
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
         outtextxy((pos3[1].parda+pos3[2].parda)/2,((pos3[1].qanna+pos3[2].qanna)/2)-20,"3");
          outtextxy((pos3[2].parda+pos3[6].parda)/2,((pos3[2].qanna+pos3[6].qanna)/2)-20,"2");
          outtextxy((pos3[4].parda+pos3[6].parda)/2+5,((pos3[4].qanna+pos3[6].qanna)/2)-10,"4");
          outtextxy((pos3[3].parda+pos3[4].parda)/2,((pos3[3].qanna+pos3[4].qanna)/2)+10,"5");
          outtextxy((pos3[3].parda+pos3[5].parda)/2-5,((pos3[3].qanna+pos3[5].qanna)/2)+10,"3");
          outtextxy((pos3[1].parda+pos3[5].parda)/2,((pos3[1].qanna+pos3[5].qanna)/2)-20,"5");
          outtextxy((pos3[5].parda+pos3[4].parda)/2,((pos3[5].qanna+pos3[4].qanna)/2)-20,"10");
          outtextxy((pos3[2].parda+pos3[4].parda)/2,((pos3[2].qanna+pos3[4].qanna)/2)-20,"11");
          outtextxy((pos3[1].parda+pos3[4].parda)/2,((pos3[1].qanna+pos3[4].qanna)/2)-20,"9");


          setcolor(WHITE);


         line(pos3[1].parda,pos3[1].qanna,pos3[2].parda,pos3[2].qanna);
         line(pos3[6].parda,pos3[6].qanna,pos3[2].parda,pos3[2].qanna);
         //line(pos3[1].parda,pos3[1].qanna,pos3[4].parda,pos3[4].qanna);
         line(pos3[1].parda,pos3[1].qanna,pos3[5].parda,pos3[5].qanna);
         line(pos3[4].parda,pos3[4].qanna,pos3[3].parda,pos3[3].qanna);
         line(pos3[4].parda,pos3[4].qanna,pos3[6].parda,pos3[6].qanna);
         //line(pos3[3].parda,pos3[3].qanna,pos3[6].parda,pos3[6].qanna);
         //line(pos3[2].parda,pos3[2].qanna,pos3[5].parda,pos3[5].qanna);
         line(pos3[5].parda,pos3[5].qanna,pos3[3].parda,pos3[3].qanna);
         line(pos3[4].parda,pos3[4].qanna,pos3[5].parda,pos3[5].qanna);
         line(pos3[4].parda,pos3[4].qanna,pos3[2].parda,pos3[2].qanna);
         line(pos3[4].parda,pos3[4].qanna,pos3[1].parda,pos3[1].qanna);

         /*line(pos3[8].parda,pos3[8].qanna,pos3[7].parda,pos3[7].qanna);
         line(pos3[9].parda,pos3[9].qanna,pos3[8].parda,pos3[8].qanna);
         line(pos3[9].parda,pos3[9].qanna,pos3[5].parda,pos3[5].qanna);
         line(pos3[5].parda,pos3[5].qanna,pos3[8].parda,pos3[8].qanna);
         line(pos3[9].parda,pos3[9].qanna,pos3[6].parda,pos3[6].qanna);
         line(pos3[5].parda,pos3[5].qanna,pos3[7].parda,pos3[7].qanna);*/

       //int traversal_number;
       //printf("\nHow many BFS traversal is possible for the given graph\n");
       //scanf("%d",&traversal_number);getchar();


       cout<<"3. What is the weight of the minimum spanning tree?"<<"\n"<<" a. 17"<<"\n"<<" b. 22"<<"\n"<<" c. 27"<<"\n"<<" d. 32"<<"\n";

    cin>>q1;

    if(q1=='a'||q1=='A'){cout<<"congratulation!! the answer is right"<<"\n";ans++;}

   else{
    cout<<"The answer is wrong"<<"\n"<<"The right answer is 'a'"<<"\n";
   }


   scanf("%c",&ch);


   cout<<"4. Which of the following edges form the MST of the given graph, starting from vertex 5?"<<"\n"<<" a. (5-3)(3-4)(4-6)(6-2)(2-1)(1-5)"<<"\n"<<" b. (5-3)(3-4)(4-5)(5-1)(1-2)"<<"\n"<<" c. (5-3)(3-4)(4-6)(6-2)(2-1)"<<"\n"<<" d. (5-3)(3-4)(4-6)(6-2)(1-5)"<<"\n";

   cin>>q1;

   if(q1=='c'||q1=='C'){cout<<"congratulation!! the answer is right"<<"\n";ans++;}

   else{
    cout<<"The answer is wrong"<<"\n"<<"The right answer is 'c'"<<"\n";
   }


   scanf("%c",&ch);


   cout<<"5. Which of the following algorithm is not applicable for the given graph, source vertex is 5?"<<"\n"<<" a. BFS"<<"\n"<<" b. DFS"<<"\n"<<" c. Kruskal's MST algorithm"<<"\n"<<" d. Dijkstra's shortest path algorithm"<<"\n";

   cin>>q1;

   if(q1=='c'||q1=='C'){cout<<"congratulation!! the answer is right"<<"\n";ans++;}

   else{
    cout<<"The answer is wrong"<<"\n"<<"The right answer is 'c'"<<"\n";
   }

       //ch=getch();


       /*graphdefaults();
       cleardevice();


       //qn2

       count3=0;
       while(count3<4)
         {
            char str[20];
         count3++;
         tostring(str,count3);
         if(count3==1){x=100;y=100;}
         if(count3==2){x=200;y=100;}
         if(count3==3){x=100;y=200;}
         if(count3==4){x=200;y=200;}


         outtextxy(x,y-10,str);
        circle(x,y,rad);

       if(count3==1)
       {
          setfillstyle(SOLID_FILL,GREEN);
          floodfill(x,y,WHITE);
       }

       else{
       setfillstyle(SOLID_FILL,WHITE);
       floodfill(x,y,WHITE);

       }


      pos3[count3].parda=x;
      pos3[count3].qanna=y;

         }

         line(pos3[1].parda,pos3[1].qanna,pos3[2].parda,pos3[2].qanna);
         line(pos3[4].parda,pos3[4].qanna,pos3[2].parda,pos3[2].qanna);
         line(pos3[1].parda,pos3[1].qanna,pos3[3].parda,pos3[3].qanna);
         line(pos3[4].parda,pos3[4].qanna,pos3[3].parda,pos3[3].qanna);

         printf("\nenter the bfs traveral(sequence of nodes)\n");
         //scanf("%s",strans);
         //strans[strlen(strans)]='\0';

        /* if(strcmp(strans,"1234")==0||strcmp(strans,"1324")==0)
         {
             printf("congrats! your answer is right");
         }

         else
         {
             printf("sorry! your answer is wrong");
         }*/


      getch();
      closegraph();

}

int main(void)
{
    game_part();
}
