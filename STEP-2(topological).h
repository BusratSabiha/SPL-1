#ifndef STEP-2(TOPOLOGICAL)_H_INCLUDED
#define STEP-2(TOPOLOGICAL)_H_INCLUDED
#endif // STEP-2(TOPOLOGICAL)_H_INCLUDED


int order[200];int order_cnt;

//int xt,yt;

void dfs1_topology(int node,struct node pos1[]){

    //order_cnt=0;

    color[node]='g';
    //sleep(3000);
    //scanf("%c",&ch);
    ch=getch();
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



    build_relation_topology(pos1);



    for(int child=0;child<vertex;child++){
        if(relation_matrix[node][child]==1){
            if(color[child]=='w'){
                dfs1_topology(child,pos1);
            }
        }
    }



    color[node]='b';
    order[order_cnt]=node;//ordering according to finishing time
    order_cnt++;
   // printf("the node is %d\n",node);


    //scanf("%c",&ch);

    ch=getch();

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



    build_relation_topology(pos1);

}





void for_teaching_purpose_topo(void)
{

    x=0;y=0;order_cnt=0;
   int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"");

   // int i,j;
   vertex=8;

       //x11=0;y11=0;

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

    build_relation_topology(pos1);
/*****************************************************************************************************/

        int sourcenode=4;

        dfs1_topology(sourcenode,pos1);



    for(int i=0;i<vertex;i++){
        if(color[i]=='w'){
            dfs1_topology(i,pos1);
        }
      }



      for(int i=order_cnt-1;i>=0;i--)printf("%d ",order[i]);



      outtextxy(50,300,"The topological ordering is:");
      int recx=50;int recy=320;

        for(int i=order_cnt-1;i>=0;i--)
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


        ch=getch();




    getch();
    closegraph();









}


