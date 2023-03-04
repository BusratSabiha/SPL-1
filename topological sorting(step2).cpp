#include<graphics.h>
#include<bits/stdc++.h>
using namespace std;
#include<conio.h>
#include<dos.h>
#include<stdlib.h>



int relation_matrix[200][200];
char color[200];
int parent_idx[200];
int dist[200];
int edge,vertex=8,u,v;
char ch;

int rad=15,x,y;

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


 void initialize(void)
{
    int i,j;
  for(i=0;i<vertex;i++)
            for(int j=0;j<vertex;j++)
        {
            relation_matrix[i][j]=0;
        }

        for(i=0;i<vertex;i++){

        color[i]='w';
        parent_idx[i]=-1;
        dist[i]=10000;
        }

}



void build_relation(struct node pos1[])
{
   relation_matrix[0][1]=1;
     //relation_matrix[1][0]=1;
       outtextxy((pos1[0].parda+pos1[1].parda)/2,((pos1[0].qanna+pos1[1].qanna)/2)-8,">");

        line(pos1[0].parda,pos1[0].qanna,pos1[1].parda,pos1[1].qanna);

        //relation_matrix[0][4]=1;
        relation_matrix[4][0]=1;
outtextxy(((pos1[0].parda+pos1[4].parda)/2)-2,((pos1[0].qanna+pos1[4].qanna)/2)-8,"^");
        line(pos1[0].parda,pos1[0].qanna,pos1[4].parda,pos1[4].qanna);

        //relation_matrix[5][1]=1;
     relation_matrix[1][5]=1;
outtextxy(((pos1[5].parda+pos1[1].parda)/2)-3,((pos1[5].qanna+pos1[1].qanna)/2)-8,"v");

        line(pos1[5].parda,pos1[5].qanna,pos1[1].parda,pos1[1].qanna);

        relation_matrix[5][2]=1;
     //relation_matrix[2][5]=1;
outtextxy(((pos1[5].parda+pos1[2].parda)/2)-2,((pos1[5].qanna+pos1[2].qanna)/2)-8,"7");
        line(pos1[5].parda,pos1[5].qanna,pos1[2].parda,pos1[2].qanna);



        relation_matrix[5][6]=1;
     //relation_matrix[6][5]=1;
         outtextxy(((pos1[5].parda+pos1[6].parda)/2)-2,((pos1[5].qanna+pos1[6].qanna)/2)-8,">");

        line(pos1[5].parda,pos1[5].qanna,pos1[6].parda,pos1[6].qanna);

         //relation_matrix[2][6]=1;
     relation_matrix[6][2]=1;
outtextxy(((pos1[6].parda+pos1[2].parda)/2)-2,((pos1[6].qanna+pos1[2].qanna)/2)-8,"^");
        line(pos1[2].parda,pos1[2].qanna,pos1[6].parda,pos1[6].qanna);

        relation_matrix[2][3]=1;
     //relation_matrix[3][2]=1;
        outtextxy(((pos1[2].parda+pos1[3].parda)/2)-2,((pos1[2].qanna+pos1[3].qanna)/2)-8,">");
        line(pos1[2].parda,pos1[2].qanna,pos1[3].parda,pos1[3].qanna);

        //relation_matrix[7][6]=1;
     relation_matrix[6][7]=1;
outtextxy(((pos1[6].parda+pos1[7].parda)/2)-2,((pos1[6].qanna+pos1[7].qanna)/2)-8,">");
        line(pos1[7].parda,pos1[7].qanna,pos1[6].parda,pos1[6].qanna);


         relation_matrix[7][3]=1;
     //relation_matrix[3][7]=1;
        outtextxy(((pos1[7].parda+pos1[3].parda)/2)-2,((pos1[7].qanna+pos1[3].qanna)/2)-8,"^");
        line(pos1[7].parda,pos1[7].qanna,pos1[3].parda,pos1[3].qanna);





}



void changeColor(int x,int y,int co)
{

    setfillstyle(SOLID_FILL,co);
    circle(x,y,rad);
    floodfill(x,y,WHITE);

}

int order[100];int order_cnt=0;


void dfs1(int node,struct node pos1[]){

    color[node]='g';
    //sleep(3000);
    scanf("%c",&ch);
    cleardevice();
    graphdefaults();
    int recx=50;int recy=220;


        for(int i=0;i<order_cnt;i++)
        {
            char str[20];
            tostring(str,order[i]+1);

        if(color[order[i]]=='b')
        {
           int rx=recx+50;
                        int ry=recy+50;
                        rectangle(recx,recy,rx,ry);
                        setcolor(RED);
                         outtextxy((recx+rx)/2,(recy+ry)/2,str);
                        //getch();
                        setcolor(WHITE);
                        recx=rx;
        }


        }








        for(int inna=0; inna<vertex; inna++)
        {
            char str[20];
            tostring(str,inna+1);

            outtextxy(pos1[inna].parda-30,pos1[inna].qanna-15,str);

            if(color[inna]=='b')
            {
                changeColor(pos1[inna].parda,pos1[inna].qanna,RED);

            }




            else if(color[inna]=='g')
            {
                changeColor(pos1[inna].parda,pos1[inna].qanna,GREEN);

            }



            else changeColor(pos1[inna].parda,pos1[inna].qanna,WHITE);


        }



    build_relation(pos1);



    for(int child=0;child<vertex;child++){
        if(relation_matrix[node][child]==1){
            if(color[child]=='w'){
                dfs1(child,pos1);
            }
        }
    }

    color[node]='b';
    order[order_cnt]=node;//ordering according to finishing time
    order_cnt++;
    printf("the node is %d\n",node);


    scanf("%c",&ch);
    cleardevice();
    graphdefaults();

      recx=50;recy=220;

        for(int i=0;i<order_cnt;i++)
        {
            char str[20];
            tostring(str,order[i]+1);

        if(color[order[i]]=='b')
        {
           int rx=recx+50;
                        int ry=recy+50;
                        rectangle(recx,recy,rx,ry);
                        setcolor(RED);
                         outtextxy((recx+rx)/2,(recy+ry)/2,str);
                        //getch();
                        setcolor(WHITE);
                        recx=rx;
        }


        }








        for(int inna=0; inna<vertex; inna++)
        {
            char str[20];
            tostring(str,inna+1);

            outtextxy(pos1[inna].parda-30,pos1[inna].qanna-15,str);

            if(color[inna]=='b')
            {
                changeColor(pos1[inna].parda,pos1[inna].qanna,RED);

            }




            else if(color[inna]=='g')
            {
                changeColor(pos1[inna].parda,pos1[inna].qanna,GREEN);

            }



            else changeColor(pos1[inna].parda,pos1[inna].qanna,WHITE);


        }



    build_relation(pos1);

}








int main(void)
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"");

    int i,j;


     initialize();

    struct node pos1[vertex];





    for(int inna=0;inna<vertex;inna++)
    {
        char str[20];
        tostring(str,inna+1);


        if(inna<vertex/2)
        {
          x=x+100;

          y=50;
        }


        else
        {
           x=pos1[inna-4].parda;
           y=(pos1[inna-4].qanna)+120;
        }

        outtextxy(x-30,y-15,str);


        changeColor(x,y,WHITE);

        pos1[inna].parda=x;
        pos1[inna].qanna=y;



}

    build_relation(pos1);
/*****************************************************************************************************/

        int sourcenode=4;

        dfs1(sourcenode,pos1);



    for(int i=0;i<vertex;i++){
        if(color[i]=='w'){
            dfs1(i,pos1);
        }
      }



    //for(i=order_cnt-1;i>=0;i--)printf("%d ",order[i]);



      outtextxy(50,300,"The topological ordering is:");
      int recx=50;int recy=320;

        for(i=order_cnt-1;i>=0;i--)
        {
            char str[20];
            tostring(str,order[i]+1);

        if(color[order[i]]=='b')
        {
           int rx=recx+50;
                        int ry=recy+50;
                        rectangle(recx,recy,rx,ry);
                        setcolor(RED);
                         outtextxy((recx+rx)/2,(recy+ry)/2,str);
                        //getch();
                        setcolor(WHITE);
                        recx=rx;
        }


        }




    getch();
    closegraph();



}



