#include<graphics.h>
#include<bits/stdc++.h>
using namespace std;
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
//variable
char ch,count3=0;


/*******************************************************************************/
void print_BFSalgorithm(void)
{
  printf("Data:color[v],prev[v],d[v]\n\n\nBFS(G)//start from here\n{\nfor each vertex u E V-{s}\n{\n\n  color[u]=WHITE;\n  prev[u]=NIL;\n  d[u]=inf;\n\n}\ncolor[s]=GREEN;\nd[s]=0;\nprev[s]=NIL;\nQ=empty;\nENQUEUE(Q,s);\nwhile(Q not empty)\n{\n\n u=DEQUEUE(Q);\n for each v E adj[u]\n{\n  if(color[v]==WHITE){\n   color[v]=GREEN;\n   d[v]=d[u]+1;\n   prev[v]=u;\n   ENQUEUE(Q,V);\n\n }\n  }\n color[u]=BLACK;\n }\n}\n ");
}



/*********************************************************************************/



int relation_matrix[200][200];
char color[200];
int parent_idx[200];
int dist[200];
int edge,vertex,u,v;


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


 void initialize(int vertex)
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
     relation_matrix[1][0]=1;

        line(pos1[0].parda,pos1[0].qanna,pos1[1].parda,pos1[1].qanna);

        relation_matrix[0][4]=1;
        relation_matrix[4][0]=1;

        line(pos1[0].parda,pos1[0].qanna,pos1[4].parda,pos1[4].qanna);

        relation_matrix[5][1]=1;
     relation_matrix[1][5]=1;

        line(pos1[5].parda,pos1[5].qanna,pos1[1].parda,pos1[1].qanna);


        relation_matrix[5][2]=1;
     relation_matrix[2][5]=1;

        line(pos1[5].parda,pos1[5].qanna,pos1[2].parda,pos1[2].qanna);



        relation_matrix[5][6]=1;
     relation_matrix[6][5]=1;

        line(pos1[5].parda,pos1[5].qanna,pos1[6].parda,pos1[6].qanna);

         relation_matrix[2][6]=1;
     relation_matrix[6][2]=1;

        line(pos1[2].parda,pos1[2].qanna,pos1[6].parda,pos1[6].qanna);

        relation_matrix[2][3]=1;
     relation_matrix[3][2]=1;

        line(pos1[2].parda,pos1[2].qanna,pos1[3].parda,pos1[3].qanna);

        relation_matrix[7][6]=1;
     relation_matrix[6][7]=1;

        line(pos1[7].parda,pos1[7].qanna,pos1[6].parda,pos1[6].qanna);


         relation_matrix[7][3]=1;
     relation_matrix[3][7]=1;

        line(pos1[7].parda,pos1[7].qanna,pos1[3].parda,pos1[3].qanna);





}



void build_relation_matrix(int edge,struct node pos2[])
{
      int i;
    for(i=0; i<edge; i++)
    {
        //int u,v;
        printf("enter u & v");


        scanf("%d %d",&u,&v);
        u=u-1;v=v-1;

        relation_matrix[u][v]=1;
        relation_matrix[v][u]=1;

        line(pos2[u].parda,pos2[u].qanna,pos2[v].parda,pos2[v].qanna);
    }

}

void changeColor(int x,int y,int co)
{

    setfillstyle(SOLID_FILL,co);
    circle(x,y,rad);
    floodfill(x,y,WHITE);

}


void for_teaching_purpose()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"");

    int i,j;
    vertex=8;

     initialize(vertex);

    struct node pos1[vertex];




   x=0;y=0;
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


int recx2=50;int recy2=350;int recx3=50;int recy3=400;int recx1=50;int recy1=300;
    outtextxy(1,320,"vertex");
    outtextxy(1,370,"parent");
    outtextxy(1,420,"level");


        for(i=0; i<vertex; i++ )
        {
            char str1[20];char str2[20];char str3[20];

            tostring(str1,i+1);
            tostring(str2,parent_idx[i]+1);
            tostring(str3,dist[i]);
                        int rx1=recx1+50;
                        int ry1=recy1+50;
                        int rx2=recx2+50;
                        int ry2=recy2+50;
                        int rx3=recx3+50;
                        int ry3=recy3+50;


                        rectangle(recx1,recy1,rx1,ry1);
                        outtextxy((recx1+rx1)/2,(recy1+ry1)/2,str1);
                        rectangle(recx2,recy2,rx2,ry2);
                        if(parent_idx[i]==-1)
                        {
                           outtextxy(((recx2+rx2)/2)-5,(recy2+ry2)/2,"nil");
                        }

                        else outtextxy(((recx2+rx2)/2)-5,(recy2+ry2)/2,str2);

                        rectangle(recx3,recy3,rx3,ry3);

                        if(dist[i]==10000)
                        outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,"inf");

                        else outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,str3);

                        if(dist[i]==0)
                        outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,"0");

                        //else outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,str3);




                        recx1=rx1;
                        recx2=rx2;
                        recx3=rx3;







        }

        int sourcenode=2;

        //Sleep(2000);
        ch=getch();

        graphdefaults();
        cleardevice();

        int recx=50;int recy=220;


    for(int inna=0; inna<vertex; inna++)
    {
        char str[20];
        tostring(str,inna+1);

        outtextxy(pos1[inna].parda-30,pos1[inna].qanna-15,str);


        if(inna==sourcenode){
            changeColor(pos1[inna].parda,pos1[inna].qanna,GREEN);
            int rx=recx+50;
                        int ry=recy+50;
                        rectangle(recx,recy,rx,ry);
                        //setcolor(RED);
                         outtextxy((recx+rx)/2,(recy+ry)/2,str);
                        //getch();
                        //setcolor(WHITE);
                        recx=rx;
                        outtextxy(20,250,"Q :");
        }

        else changeColor(pos1[inna].parda,pos1[inna].qanna,WHITE);


    }


    for(i=0;i<vertex;i++)
    {
       for(int inna=0;inna<vertex;inna++)
       {
           if(relation_matrix[i][inna]==1)line(pos1[i].parda,pos1[i].qanna,pos1[inna].parda,pos1[inna].qanna);
       }
    }



     //Sleep(3000);

    //ch=getch();



        int queue[vertex];
        int start,end;
        start=0;end=0;
        queue[end]=sourcenode;
        end++;
        color[sourcenode]='g';
        dist[sourcenode]=0;
        parent_idx[sourcenode]=-1;
        int index=0;

        recx2=50; recy2=350; recx3=50; recy3=400; recx1=50; recy1=300;
     outtextxy(1,320,"vertex");
    outtextxy(1,370,"parent");
    outtextxy(1,420,"level");

    for(i=0; i<vertex; i++ )
        {
            char str1[20];char str2[20];char str3[20];

            tostring(str1,i+1);
            tostring(str2,parent_idx[i]+1);
            tostring(str3,dist[i]);
                        int rx1=recx1+50;
                        int ry1=recy1+50;
                        int rx2=recx2+50;
                        int ry2=recy2+50;
                        int rx3=recx3+50;
                        int ry3=recy3+50;


                        rectangle(recx1,recy1,rx1,ry1);
                        outtextxy((recx1+rx1)/2,(recy1+ry1)/2,str1);
                        rectangle(recx2,recy2,rx2,ry2);
                        if(parent_idx[i]==-1)
                        {
                           outtextxy(((recx2+rx2)/2)-5,(recy2+ry2)/2,"nil");
                        }

                        else outtextxy(((recx2+rx2)/2)-5,(recy2+ry2)/2,str2);

                        rectangle(recx3,recy3,rx3,ry3);

                        if(dist[i]==10000)
                        outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,"inf");

                        else outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,str3);

                        if(dist[i]==0)
                        outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,"0");

                        //else outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,str3);




                        recx1=rx1;
                        recx2=rx2;
                        recx3=rx3;







        }

     ch=getch();

        while((end-start)>0)
        {
            cleardevice();
            graphdefaults();

            int u=queue[start];

            for(i=0; i<vertex; i++)
            {
                int v=i;

                if(relation_matrix[u][v]==1&&color[v]=='w')
                {
                    queue[end]=v;
                    end++;
                    color[v]='g';
                    dist[v]=dist[u]+1;
                    parent_idx[v]=u;
                }
            }
            start++;//dequeue
            color[u]='b';


            recx=50;recy=220;

        for(i=0;i<end;i++)
        {
            char str[20];
            tostring(str,queue[i]+1);

        if(color[queue[i]]=='b')
        {
           int rx=recx+50;
                        int ry=recy+50;
                        rectangle(recx,recy,rx,ry);
                        setcolor(RED);
                         outtextxy((recx+rx)/2,(recy+ry)/2,str);
                        //getch();
                        setcolor(WHITE);
                        recx=rx;
                        outtextxy(20,250,"Q :");
        }

        else if(color[queue[i]]=='g')
        {
           int rx=recx+50;
                        int ry=recy+50;
                        rectangle(recx,recy,rx,ry);
                        //setcolor(RED);
                         outtextxy((recx+rx)/2,(recy+ry)/2,str);
                        //getch();
                        //setcolor(WHITE);
                        recx=rx;
                        outtextxy(20,250,"Q :");
        }
        }










             for(int inna=0; inna<vertex; inna++)
    {
       char str[20];
        tostring(str,inna+1);

        outtextxy(pos1[inna].parda-30,pos1[inna].qanna-15,str);


        if(color[inna]=='g')changeColor(pos1[inna].parda,pos1[inna].qanna,GREEN);

        else if(color[inna]=='b')changeColor(pos1[inna].parda,pos1[inna].qanna,RED);

        else changeColor(pos1[inna].parda,pos1[inna].qanna,WHITE);


    }


    for(i=0;i<vertex;i++)
    {
       for(int inna=0;inna<vertex;inna++)
       {
           if(relation_matrix[i][inna]==1)line(pos1[i].parda,pos1[i].qanna,pos1[inna].parda,pos1[inna].qanna);
       }
    }


    int recx2=50;int recy2=350;int recx3=50;int recy3=400;int recx1=50;int recy1=300;
         outtextxy(1,320,"vertex");
         outtextxy(1,370,"parent");
         outtextxy(1,420,"level");


        for(i=0; i<vertex; i++ )
        {
            char str1[20];char str2[20];char str3[20];

            tostring(str1,i+1);
            tostring(str2,parent_idx[i]+1);
            tostring(str3,dist[i]);
                        int rx1=recx1+50;
                        int ry1=recy1+50;
                        int rx2=recx2+50;
                        int ry2=recy2+50;
                        int rx3=recx3+50;
                        int ry3=recy3+50;


                        rectangle(recx1,recy1,rx1,ry1);
                        outtextxy((recx1+rx1)/2,(recy1+ry1)/2,str1);
                        rectangle(recx2,recy2,rx2,ry2);
                        if(parent_idx[i]==-1)
                        {
                           outtextxy(((recx2+rx2)/2)-5,(recy2+ry2)/2,"nil");
                        }

                        else outtextxy(((recx2+rx2)/2)-5,(recy2+ry2)/2,str2);

                        rectangle(recx3,recy3,rx3,ry3);

                        if(dist[i]==10000)
                        outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,"inf");

                        else outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,str3);

                        if(dist[i]==0)
                        outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,"0");

                        //else outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,str3);




                        recx1=rx1;
                        recx2=rx2;
                        recx3=rx3;







        }





    //Sleep(3000);

    //scanf("%c",&ch);
    ch=getch();



        }



        printf("\n\n\n");

        for(i=0; i<vertex; i++)

        {
            printf("vertex %d:\t",i);
            printf("level is %d\t",dist[i]);
            printf("parent is %d\t",parent_idx[i]);
            printf("color is %c\t",color[i]);
            printf("\n\n\n");

        }






   /* getch();
    closegraph();*/



}





void for_self_experiment()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"");

    int i,j;
    vertex=8;

    //printf("enter the number of edge");
    //scanf("%d",&edge);


    initialize(vertex);

    struct node pos2[vertex];




    x=0;
    y=0;
    for(int inna=0; inna<vertex; inna++)
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
            x=pos2[inna-4].parda;
            y=(pos2[inna-4].qanna)+120;
        }

        outtextxy(x-30,y-15,str);


        changeColor(x,y,WHITE);

        pos2[inna].parda=x;
        pos2[inna].qanna=y;

    }

    printf("enter the number of edge\n");
    scanf("%d",&edge);

    build_relation_matrix(edge,pos2);
    /*****************************************************************************************************/

    int recx2=50;
    int recy2=350;
    int recx3=50;
    int recy3=400;
    int recx1=50;
    int recy1=300;
    outtextxy(1,320,"vertex");
    outtextxy(1,370,"parent");
    outtextxy(1,420,"level");


    for(i=0; i<vertex; i++ )
    {
        char str1[20];
        char str2[20];
        char str3[20];

        tostring(str1,i+1);
        tostring(str2,parent_idx[i]+1);
        tostring(str3,dist[i]);
        int rx1=recx1+50;
        int ry1=recy1+50;
        int rx2=recx2+50;
        int ry2=recy2+50;
        int rx3=recx3+50;
        int ry3=recy3+50;


        rectangle(recx1,recy1,rx1,ry1);
        outtextxy((recx1+rx1)/2,(recy1+ry1)/2,str1);
        rectangle(recx2,recy2,rx2,ry2);
        if(parent_idx[i]==-1)
        {
            outtextxy(((recx2+rx2)/2)-5,(recy2+ry2)/2,"nil");
        }

        else outtextxy(((recx2+rx2)/2)-5,(recy2+ry2)/2,str2);

        rectangle(recx3,recy3,rx3,ry3);

        if(dist[i]==10000)
            outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,"inf");

        else outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,str3);

        if(dist[i]==0)
            outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,"0");

        //else outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,str3);




        recx1=rx1;
        recx2=rx2;
        recx3=rx3;







    }

    int sourcenode;
    getchar();
    printf("enter the sourcenode");
    scanf("%d",&sourcenode);
    sourcenode=sourcenode-1;
    getchar();

    //Sleep(2000);
    //ch=getch();
    //scanf("%c",&ch);

    graphdefaults();
    cleardevice();

    int recx=50;
    int recy=220;


    for(int inna=0; inna<vertex; inna++)
    {
        char str[20];
        tostring(str,inna+1);

        outtextxy(pos2[inna].parda-30,pos2[inna].qanna-15,str);


        if(inna==sourcenode)
        {
            changeColor(pos2[inna].parda,pos2[inna].qanna,GREEN);
            int rx=recx+50;
            int ry=recy+50;
            rectangle(recx,recy,rx,ry);
            //setcolor(RED);
            outtextxy((recx+rx)/2,(recy+ry)/2,str);
            //getch();
            //setcolor(WHITE);
            recx=rx;
            outtextxy(20,250,"Q :");
        }

        else changeColor(pos2[inna].parda,pos2[inna].qanna,WHITE);


    }


    for(i=0; i<vertex; i++)
    {
        for(int inna=0; inna<vertex; inna++)
        {
            if(relation_matrix[i][inna]==1)line(pos2[i].parda,pos2[i].qanna,pos2[inna].parda,pos2[inna].qanna);
        }
    }



    //Sleep(3000);

    //ch=getch();//getchar();

    //scanf("%c",&ch);

    int queue[vertex];
    int start,end;
    start=0;
    end=0;
    queue[end]=sourcenode;
    end++;
    color[sourcenode]='g';
    dist[sourcenode]=0;
    parent_idx[sourcenode]=-1;
    int index=0;

    recx2=50;
    recy2=350;
    recx3=50;
    recy3=400;
    recx1=50;
    recy1=300;
    outtextxy(1,320,"vertex");
    outtextxy(1,370,"parent");
    outtextxy(1,420,"level");

    for(i=0; i<vertex; i++ )
    {
        char str1[20];
        char str2[20];
        char str3[20];

        tostring(str1,i+1);
        tostring(str2,parent_idx[i]+1);
        tostring(str3,dist[i]);
        int rx1=recx1+50;
        int ry1=recy1+50;
        int rx2=recx2+50;
        int ry2=recy2+50;
        int rx3=recx3+50;
        int ry3=recy3+50;


        rectangle(recx1,recy1,rx1,ry1);
        outtextxy((recx1+rx1)/2,(recy1+ry1)/2,str1);
        rectangle(recx2,recy2,rx2,ry2);
        if(parent_idx[i]==-1)
        {
            outtextxy(((recx2+rx2)/2)-5,(recy2+ry2)/2,"nil");
        }

        else outtextxy(((recx2+rx2)/2)-5,(recy2+ry2)/2,str2);

        rectangle(recx3,recy3,rx3,ry3);

        if(dist[i]==10000)
            outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,"inf");

        else outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,str3);

        if(dist[i]==0)
            outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,"0");

        //else outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,str3);




        recx1=rx1;
        recx2=rx2;
        recx3=rx3;







    }

    scanf("%c",&ch);

    int call[vertex];

    for(i=0; i<vertex; i++)call[i]=-1; //-1=white;0=gray;1=black;


    while((end-start)>0)
    {
        //cleardevice();
        //graphdefaults();

        int u=queue[start];
        int extreme=0;
        //printf("now queue element is %d\n",u+1);

        for(i=0; i<vertex; i++)
        {


            int vx=i;

            if(relation_matrix[u][vx]==1&&call[vx]==-1)
            {
                call[vx]=0;
                extreme++;


            }



        }

        //printf("\n extreme %d",extreme);

        for(int cal=0; cal<extreme; cal++)
        {

            int test=0;
            for(int parina=0; parina<=2; parina++)
            {
                if(cal==0)printf("\nenter the %dst child node of parent %d",cal+1,u+1);
                else if(cal==1)printf("\nenter the %dnd child node of parent %d",cal+1,u+1);
                else if(cal==2)printf("\nenter the %drd child node of parent %d",cal+1,u+1);
                else printf("\nenter the %dth child node of parent %d",cal+1,u+1);
                int v;
                //printf("\nplease enter the next element of the queue:\n");
                scanf("%d",&v);
                v=v-1;
                if(relation_matrix[u][v]==1&&color[v]=='w')
                {

                    queue[end]=v;
                    end++;
                    color[v]='g';

                    dist[v]=dist[u]+1;
                    parent_idx[v]=u;
                    test++;
                    break;

                }

                else
                {
                    if(parina<2) printf("\nwrong..!!please try again\n");
                }


            }

            if(test==0)
            {
                printf("\nYour chances is over! you answered wrong for each time.....!!\n");
                for(i=0; i<vertex; i++)
                {
                    int te=i;

                    if(relation_matrix[u][te]==1&&color[te]=='w')
                    {

                        queue[end]=te;
                        end++;
                        color[te]='g';

                        dist[te]=dist[u]+1;
                        parent_idx[te]=u;
                        break;


                    }

                }
            }




            cleardevice();
            graphdefaults();

            recx=50;
            recy=220;
            outtextxy(20,250,"Q :");

            for(i=0; i<end; i++)
            {
                char str[20];
                tostring(str,queue[i]+1);

                if(color[queue[i]]=='b')
                {
                    int rx=recx+50;
                    int ry=recy+50;
                    rectangle(recx,recy,rx,ry);
                    setcolor(RED);
                    outtextxy((recx+rx)/2,(recy+ry)/2,str);
                    //getch();
                    setcolor(WHITE);
                    recx=rx;
                    //outtextxy(20,250,"Q :");
                }

                else if(color[queue[i]]=='g')
                {
                    int rx=recx+50;
                    int ry=recy+50;
                    rectangle(recx,recy,rx,ry);
                    //setcolor(RED);
                    outtextxy((recx+rx)/2,(recy+ry)/2,str);
                    //getch();
                    //setcolor(WHITE);
                    recx=rx;
                    // outtextxy(20,250,"Q :");
                }
            }







            for(int inna=0; inna<vertex; inna++)
            {
                char str[20];
                tostring(str,inna+1);

                outtextxy(pos2[inna].parda-30,pos2[inna].qanna-15,str);


                if(color[inna]=='g')changeColor(pos2[inna].parda,pos2[inna].qanna,GREEN);

                else if(color[inna]=='b')changeColor(pos2[inna].parda,pos2[inna].qanna,RED);

                else changeColor(pos2[inna].parda,pos2[inna].qanna,WHITE);


            }


            for(i=0; i<vertex; i++)
            {
                for(int inna=0; inna<vertex; inna++)
                {
                    if(relation_matrix[i][inna]==1)line(pos2[i].parda,pos2[i].qanna,pos2[inna].parda,pos2[inna].qanna);
                }
            }


            int recx2=50;
            int recy2=350;
            int recx3=50;
            int recy3=400;
            int recx1=50;
            int recy1=300;
            outtextxy(1,320,"vertex");
            outtextxy(1,370,"parent");
            outtextxy(1,420,"level");


            for(i=0; i<vertex; i++ )
            {
                char str1[20];
                char str2[20];
                char str3[20];

                tostring(str1,i+1);
                tostring(str2,parent_idx[i]+1);
                tostring(str3,dist[i]);
                int rx1=recx1+50;
                int ry1=recy1+50;
                int rx2=recx2+50;
                int ry2=recy2+50;
                int rx3=recx3+50;
                int ry3=recy3+50;


                rectangle(recx1,recy1,rx1,ry1);
                outtextxy((recx1+rx1)/2,(recy1+ry1)/2,str1);
                rectangle(recx2,recy2,rx2,ry2);
                if(parent_idx[i]==-1)
                {
                    outtextxy(((recx2+rx2)/2)-5,(recy2+ry2)/2,"nil");
                }

                else outtextxy(((recx2+rx2)/2)-5,(recy2+ry2)/2,str2);

                rectangle(recx3,recy3,rx3,ry3);

                if(dist[i]==10000)
                    outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,"inf");

                else outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,str3);

                if(dist[i]==0)
                    outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,"0");

                //else outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,str3);




                recx1=rx1;
                recx2=rx2;
                recx3=rx3;







            }




            //Sleep(3000);

            scanf("%c",&ch);
            //ch=getch();



        }










        //getch();
        // closegraph();*/




        //}





        start++;//dequeue
        color[u]='b';
        call[u]=1;


        cleardevice();
        graphdefaults();

        recx=50;
        recy=220;
        outtextxy(20,250,"Q :");

        for(i=0; i<end; i++)
        {
            char str[20];
            tostring(str,queue[i]+1);

            if(color[queue[i]]=='b')
            {
                int rx=recx+50;
                int ry=recy+50;
                rectangle(recx,recy,rx,ry);
                setcolor(RED);
                outtextxy((recx+rx)/2,(recy+ry)/2,str);
                //getch();
                setcolor(WHITE);
                recx=rx;
                //outtextxy(20,250,"Q :");
            }

            else if(color[queue[i]]=='g')
            {
                int rx=recx+50;
                int ry=recy+50;
                rectangle(recx,recy,rx,ry);
                //setcolor(RED);
                outtextxy((recx+rx)/2,(recy+ry)/2,str);
                //getch();
                //setcolor(WHITE);
                recx=rx;
                // outtextxy(20,250,"Q :");
            }
        }







        for(int inna=0; inna<vertex; inna++)
        {
            char str[20];
            tostring(str,inna+1);

            outtextxy(pos2[inna].parda-30,pos2[inna].qanna-15,str);


            if(color[inna]=='g')changeColor(pos2[inna].parda,pos2[inna].qanna,GREEN);

            else if(color[inna]=='b')changeColor(pos2[inna].parda,pos2[inna].qanna,RED);

            else changeColor(pos2[inna].parda,pos2[inna].qanna,WHITE);


        }


        for(i=0; i<vertex; i++)
        {
            for(int inna=0; inna<vertex; inna++)
            {
                if(relation_matrix[i][inna]==1)line(pos2[i].parda,pos2[i].qanna,pos2[inna].parda,pos2[inna].qanna);
            }
        }


        int recx2=50;
        int recy2=350;
        int recx3=50;
        int recy3=400;
        int recx1=50;
        int recy1=300;
        outtextxy(1,320,"vertex");
        outtextxy(1,370,"parent");
        outtextxy(1,420,"level");


        for(i=0; i<vertex; i++ )
        {
            char str1[20];
            char str2[20];
            char str3[20];

            tostring(str1,i+1);
            tostring(str2,parent_idx[i]+1);
            tostring(str3,dist[i]);
            int rx1=recx1+50;
            int ry1=recy1+50;
            int rx2=recx2+50;
            int ry2=recy2+50;
            int rx3=recx3+50;
            int ry3=recy3+50;


            rectangle(recx1,recy1,rx1,ry1);
            outtextxy((recx1+rx1)/2,(recy1+ry1)/2,str1);
            rectangle(recx2,recy2,rx2,ry2);
            if(parent_idx[i]==-1)
            {
                outtextxy(((recx2+rx2)/2)-5,(recy2+ry2)/2,"nil");
            }

            else outtextxy(((recx2+rx2)/2)-5,(recy2+ry2)/2,str2);

            rectangle(recx3,recy3,rx3,ry3);

            if(dist[i]==10000)
                outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,"inf");

            else outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,str3);

            if(dist[i]==0)
                outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,"0");

            //else outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,str3);




            recx1=rx1;
            recx2=rx2;
            recx3=rx3;







        }




        //Sleep(3000);

        scanf("%c",&ch);
        //ch=getch();







    }



}


void game_part()
{
    char strans[10],fixed_ans[10];
    struct node pos3[9];
     int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"");

    //for qn1
         while(count3<9)
         {
            char str[20];
         count3++;
         tostring(str,count3);
         if(count3==1){x=100;y=100;}
         if(count3==2){x=250;y=100;}
         if(count3==3){x=400;y=100;}
         if(count3==4){x=100;y=250;}
         if(count3==5){x=250;y=250;}
         if(count3==6){x=400;y=250;}
         if(count3==7){x=100;y=400;}
         if(count3==8){x=250;y=400;}
         if(count3==9){x=400;y=400;}

         outtextxy(x-25,y-30,str);
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

         line(pos3[1].parda,pos3[1].qanna,pos3[2].parda,pos3[2].qanna);
         line(pos3[3].parda,pos3[3].qanna,pos3[2].parda,pos3[2].qanna);
         line(pos3[1].parda,pos3[1].qanna,pos3[4].parda,pos3[4].qanna);
         line(pos3[1].parda,pos3[1].qanna,pos3[5].parda,pos3[5].qanna);
         line(pos3[4].parda,pos3[4].qanna,pos3[5].parda,pos3[5].qanna);
         line(pos3[5].parda,pos3[5].qanna,pos3[6].parda,pos3[6].qanna);
         line(pos3[3].parda,pos3[3].qanna,pos3[6].parda,pos3[6].qanna);
         line(pos3[2].parda,pos3[2].qanna,pos3[5].parda,pos3[5].qanna);
         line(pos3[5].parda,pos3[5].qanna,pos3[3].parda,pos3[3].qanna);
         line(pos3[4].parda,pos3[4].qanna,pos3[7].parda,pos3[7].qanna);
         line(pos3[8].parda,pos3[8].qanna,pos3[7].parda,pos3[7].qanna);
         line(pos3[9].parda,pos3[9].qanna,pos3[8].parda,pos3[8].qanna);
         line(pos3[9].parda,pos3[9].qanna,pos3[5].parda,pos3[5].qanna);
         line(pos3[5].parda,pos3[5].qanna,pos3[8].parda,pos3[8].qanna);
         line(pos3[9].parda,pos3[9].qanna,pos3[6].parda,pos3[6].qanna);
         line(pos3[5].parda,pos3[5].qanna,pos3[7].parda,pos3[7].qanna);

       int traversal_number;
       printf("\nHow many BFS traversal is possible for the given graph\n");
       scanf("%d",&traversal_number);getchar();


       if(traversal_number==40320)
       {
           printf("Congrats!! your answer is right.");
       }

       else
       {
        printf("Sorry!! your answer is wrong.\nThe right answer is 40320");
       }

       char ch;
       ch=getchar();


       //ch=getch();


       graphdefaults();
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


         outtextxy(x-25,y-30,str);
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
         scanf("%s",strans);
         strans[strlen(strans)]='\0';

         if(strcmp(strans,"1234")==0||strcmp(strans,"1324")==0)
         {
             printf("congrats! your answer is right");
         }

         else
         {
             printf("sorry! your answer is wrong");
         }


      getch();
      closegraph();

}




int main(void)
{
 printf("\n\n*******************************WELCOME TO EDU-GAME(Based on graph algorithms)************************************\n\n\n\n");
 printf("   -------------BFS(Breathe first search)-------------\n\n\n");
 print_BFSalgorithm();
 getchar();

 printf("\n\n\nLET'S PROCEED FOR THE NEXT STEP...........\nIN THIS STEP YOU MAY COME TO REALIZE THAT HOW A GRAPH CAN BE TRAVERSED IN BFS ALGORITHM...\n\n");
 //scanf("%c",&ch);
 getchar();

 for_teaching_purpose();

  getchar();
 printf("\n\n\nLET'S PROCEED FOR THE NEXT STEP...........\nIN THIS STEP YOU MAY COME TO REALIZE THAT HOW A GRAPH WHICH IS MADE BY YOU CAN BE TRAVERSED IN BFS ALGORITHM ...\n\n");
 //scanf("%c",&ch);

 getchar();


 /***************************************************************************/
 for_self_experiment();
 getchar();

 printf("\n\n\nLET'S PROCEED FOR THE NEXT STEP...........\nIN THIS STEP YOU HAVE TO ANSWER TO THE GIVEN QUESTIONS...\n\n");
 getchar();




game_part();





}


