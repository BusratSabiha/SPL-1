#include<graphics.h>
#include<bits/stdc++.h>
using namespace std;
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
//variable
char ch,count3=0;




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
    for(i=0; i<vertex; i++)
        for(int j=0; j<vertex; j++)
        {
            relation_matrix[i][j]=0;
        }

    for(i=0; i<vertex; i++)
    {

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
        u=u-1;
        v=v-1;

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

    printf("enter the number of edge");
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
            outtextxy(1,250,"stack:");
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

    int stack[vertex];
    int start,end;
    start=0;//end=0;
    stack[start]=sourcenode;
    //end++;
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

    for(i=0; i<vertex; i++)call[i]=-1;

    while((start)>=0)
    {
        //cleardevice();
        // graphdefaults();

        int u=stack[start];
        int check=0;
        int extreme=0;

        for(i=0; i<vertex; i++)
        {
            int vx=i;

            if(relation_matrix[u][vx]==1&&color[vx]=='w')
            {
                //call[vx]=0;
                extreme++;



            }
        }
        if(extreme>0)
        {
            int test=0;
            for(int parina=0; parina<=2; parina++)
            {
                int v;
                printf("\nenter the child node for parent-%d\n",u+1);
                scanf("%d",&v);getchar();
                v=v-1;

                if(relation_matrix[u][v]==1&&color[v]=='w')
                {
                    start++;
                    stack[start]=v;
                    //end++;
                    color[v]='g';
                    dist[v]=dist[u]+1;
                    parent_idx[v]=u;
                    check++;
                    test++;
                    break;
                }

                else
                {
                    printf("wrong!! try again.......");
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
                        start++;
                        stack[start]=te;
                        //end++;
                        color[te]='g';
                        dist[te]=dist[u]+1;
                        parent_idx[te]=u;
                        check++;
                        break;



                    }

                }
            }




        }


        //}

        if(check==0)
        {
            //start++;//dequeue
            color[u]='b';
            start--;
            //call[u]=1;

        }

        cleardevice();
        graphdefaults();

        recx=50;
        recy=220;
        outtextxy(1,250,"stack:");

        for(i=0; i<=start; i++)
        {
            char str[20];
            tostring(str,stack[i]+1);

            if(color[stack[i]]=='b')
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

            else if(color[stack[i]]=='g')
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

    printf("\n\n\n");

    for(i=0; i<vertex; i++)

    {
        printf("vertex %d:\t",i);
        printf("level is %d\t",dist[i]);
        printf("parent is %d\t",parent_idx[i]);
        printf("color is %c\t",color[i]);
        printf("\n\n\n");

    }






    //getch();
    // closegraph();

}


int main(void)
{
    for_self_experiment();
}
