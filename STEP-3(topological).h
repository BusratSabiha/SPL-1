#ifndef STEP-3(TOPOLOGICAL)_H_INCLUDED
#define STEP-3(TOPOLOGICAL)_H_INCLUDED
#endif // STEP-3(TOPOLOGICAL)_H_INCLUDED

int countc,stackCount;

int vis[100];
int order_cnt1;

//x=0;y=0;
void dfs1_top(int node,struct node pos1[]){

    color[node]='g';
    //sleep(3000);
    scanf("%c",&ch);
    cleardevice();
    graphdefaults();
    int recx=50;int recy=220;


        for(int i=0;i<order_cnt1;i++)
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



    //build_relation(pos1);

    for(int i=0; i<vertex; i++)
    {
        for(int inna=0; inna<vertex; inna++)
        {
            if(relation_matrix[i][inna]==1){build_direction(i,inna,pos1);line(pos1[i].parda,pos1[i].qanna,pos1[inna].parda,pos1[inna].qanna);}
        }
    }




    for(int child=0;child<vertex;child++){
        if(relation_matrix[node][child]==1){
            if(color[child]=='w'){
                dfs1_top(child,pos1);
            }
        }
    }

    int stackNode;

    for(int parina=0;parina<=2;parina++)
    {
        printf("\n enter the top stack element:\n");
        scanf("%d",&stackNode);
         stackNode=stackNode-1;
        if(stackNode==node){stackCount=1;break;}

        else{
            printf("wrong!!try again");
        }
    }

     if(stackCount!=1)printf("\nyou entered wrong answer for each of the time!! The right answer is:\n");
    color[node]='b';
    order[order_cnt1]=node;//ordering according to finishing time
    order_cnt1++;
    //printf("the node is %d\n",node);





    scanf("%c",&ch);
    cleardevice();
    graphdefaults();

      recx=50;recy=220;

        for(int i=0;i<order_cnt1;i++)
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



    //build_relation(pos1);

    for(int i=0; i<vertex; i++)
    {
        for(int inna=0; inna<vertex; inna++)
        {
            if(relation_matrix[i][inna]==1){build_direction(i,inna,pos1);line(pos1[i].parda,pos1[i].qanna,pos1[inna].parda,pos1[inna].qanna);}
        }
    }

}




void dfsc(int node){
    vis[node]=0;

    for(int child=0;child<vertex;child++){
        if(relation_matrix[node][child]==1){
            if(vis[child]==-1){
                dfsc(child);
            }

            else if(vis[child]==0){

               countc++;
                break;

            }
        }
    }

    vis[node]=1;
    //order[order_cnt]=node;//ordering according to finishing time
    //order_cnt++;
    //printf("the node is %d\n",node);
}



void for_self_experiment_topo(void)
{
    x=0;y=0;countc=0;order_cnt1=0;

    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"");

    int i,j;

    vertex=8;

     initialize(vertex);

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

for(int j=0;j<vertex;j++)vis[j]=-1;
    //build_relation(pos1);
   while(1)
   {
       printf("enter the number of edge\n");
    scanf("%d",&edge);

    build_relation_matrix_topo(edge,pos1);


    for(int i=1;i<=vertex;i++){
        if(vis[i]==-1){
            dfsc(i);
        }
    }


      if(countc==0)break;
      else {printf("\nThe graph is cyclic!!!,input an acyclic graph\n");
      initialize(vertex);
      //getchar();
      scanf("%c",&ch);
    cleardevice();
    graphdefaults();
    countc=0;
    for(int inna=0;inna<vertex;inna++)
    {



            char str[20];
            tostring(str,inna+1);

            outtextxy(pos1[inna].parda-30,pos1[inna].qanna-15,str);



                changeColor(pos1[inna].parda,pos1[inna].qanna,WHITE);



}

   }
       }

/*****************************************************************************************************/

        int sourcenode;
        printf("enter the sourcenode.....sourcenode must not has any incoming edge\n");
        scanf("%d",&sourcenode);
        sourcenode=sourcenode-1;

        dfs1_top(sourcenode,pos1);



    for(int i=0;i<vertex;i++){
        if(color[i]=='w'){
            dfs1_top(i,pos1);
        }
      }



    //for(i=order_cnt-1;i>=0;i--)printf("%d ",order[i]);



      outtextxy(50,300,"The topological ordering is:");
      int recx=50;int recy=320;

        for(i=order_cnt1-1;i>=0;i--)
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


















