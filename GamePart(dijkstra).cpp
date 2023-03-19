
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

   cout<<"1. Dijkstra’s algorithm is used to ______"<<"\n"<<" a. find minimum spanning tree"<<"\n"<<" b.  find single source shortest path"<<"\n"<<" c. sorting"<<"\n"<<" d. find all pair shortest path "<<"\n";

   cin>>q1;

   if(q1=='b'||q1=='B'){cout<<"congratulation!! the answer is right"<<"\n";ans++;}

   else{
    cout<<"The answer is wrong"<<"\n"<<"The right answer is 'b'"<<"\n";
   }


   scanf("%c",&ch);

   cout<<"2. What is time complexity of Dijkstra's algorithm ?"<<"\n"<<" a.O(N^3)"<<"\n"<<" b. O(N logN)"<<"\n"<<" c. O(N^2)"<<"\n"<<" d. O(N^2 logN)"<<"\n";

   cin>>q1;

   if(q1=='c'||q1=='C'){cout<<"congratulation!! the answer is right"<<"\n";ans++;}

   else{
    cout<<"The answer is wrong"<<"\n"<<"The right answer is 'c'"<<"\n";

   }


   cout<<"3. If all edges have the same weight in an undirected graph, which algorithm will find the shortest path between two nodes more efficiently? ?"<<"\n"<<" a. Dijkstra"<<"\n"<<" b. Bellman-Ford"<<"\n"<<" c. Floyd-Warshal"<<"\n"<<" d. BFS"<<"\n";

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
         while(count3<5)
         {
            char str[20];
         count3++;
         tostring(str,count3);
         if(count3==1){x=200;y=100;}
         if(count3==2){x=400;y=100;}
         if(count3==3){x=200;y=300;}
         if(count3==4){x=400;y=300;}
         //if(count3==5){x=100;y=200;}
         if(count3==5){x=500;y=200;}
         //if(count3==7){x=100;y=400;}
         //if(count3==8){x=250;y=400;}
         //if(count3==9){x=400;y=400;}
         //setcolor(RED);
         outtextxy(x,y-30,str);
         //setcolor(WHITE);
        circle(x,y,rad);

       if(count3==2)
       {
          setfillstyle(SOLID_FILL,GREEN);
          floodfill(x,y,WHITE);
       }


       else if(count3==3)
       {
          setfillstyle(SOLID_FILL,RED);
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
         outtextxy((pos3[1].parda+pos3[2].parda)/2,((pos3[1].qanna+pos3[2].qanna)/2)-20,"15");
          //outtextxy((pos3[2].parda+pos3[6].parda)/2,((pos3[2].qanna+pos3[6].qanna)/2)-20,"2");
          outtextxy((pos3[4].parda+pos3[1].parda)/2-35,((pos3[4].qanna+pos3[1].qanna)/2)-20,"15");
          outtextxy((pos3[3].parda+pos3[4].parda)/2,((pos3[3].qanna+pos3[4].qanna)/2)+10,"7");
          outtextxy((pos3[3].parda+pos3[5].parda)/2-15,((pos3[3].qanna+pos3[5].qanna)/2)+10,"30");
          outtextxy((pos3[1].parda+pos3[5].parda)/2-20,((pos3[1].qanna+pos3[5].qanna)/2)-20,"27");
          outtextxy((pos3[1].parda+pos3[3].parda)/2-20,((pos3[1].qanna+pos3[3].qanna)/2)-20,"7");
          outtextxy((pos3[2].parda+pos3[4].parda)/2+5,((pos3[2].qanna+pos3[4].qanna)/2)-20,"13");
          outtextxy((pos3[2].parda+pos3[3].parda)/2+30,((pos3[2].qanna+pos3[3].qanna)/2)-15,"18");
          outtextxy((pos3[2].parda+pos3[5].parda)/2+10,((pos3[2].qanna+pos3[5].qanna)/2)-30,"3");
          outtextxy((pos3[4].parda+pos3[5].parda)/2+30,((pos3[4].qanna+pos3[5].qanna)/2)-30,"5");




          setcolor(WHITE);


         line(pos3[1].parda,pos3[1].qanna,pos3[2].parda,pos3[2].qanna);
         line(pos3[5].parda,pos3[5].qanna,pos3[2].parda,pos3[2].qanna);
         line(pos3[1].parda,pos3[1].qanna,pos3[3].parda,pos3[3].qanna);
         line(pos3[1].parda,pos3[1].qanna,pos3[5].parda,pos3[5].qanna);
         line(pos3[4].parda,pos3[4].qanna,pos3[3].parda,pos3[3].qanna);
         line(pos3[4].parda,pos3[4].qanna,pos3[5].parda,pos3[5].qanna);
         line(pos3[3].parda,pos3[3].qanna,pos3[2].parda,pos3[2].qanna);
         line(pos3[2].parda,pos3[2].qanna,pos3[4].parda,pos3[4].qanna);
         line(pos3[5].parda,pos3[5].qanna,pos3[3].parda,pos3[3].qanna);
         line(pos3[4].parda,pos3[4].qanna,pos3[1].parda,pos3[1].qanna);



       cout<<"4. If 2 is the source vertex, what is the minimum cost to reach 3 vertex?"<<"\n"<<" a. 18"<<"\n"<<" b. 20"<<"\n"<<" c. 15"<<"\n"<<" d. 23"<<"\n";

    cin>>q1;

    if(q1=='c'||q1=='C'){cout<<"congratulation!! the answer is right"<<"\n";ans++;}

   else{
    cout<<"The answer is wrong"<<"\n"<<"The right answer is 'c'"<<"\n";
   }


   scanf("%c",&ch);





   cout<<"5.  In the given graph, identify the shortest path having minimum cost to reach vertex 3 if 2 is the source vertex?"<<"\n"<<" a. 2-4-1-3"<<"\n"<<" b. 2-5-4-3"<<"\n"<<" c. 2-5-1-3"<<"\n"<<" d. 2-5-3"<<"\n";

   cin>>q1;

   if(q1=='b'||q1=='B'){cout<<"congratulation!! the answer is right"<<"\n";ans++;}

   else{
    cout<<"The answer is wrong"<<"\n"<<"The right answer is 'b'"<<"\n";
   }


   scanf("%c",&ch);







      getch();
      closegraph();

}

int main(void)
{
    game_part();
}

