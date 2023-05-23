#ifndef STEP-3(SCC)_H_INCLUDED
#define STEP-3(SCC)_H_INCLUDED
#endif // STEP-3(SCC)_H_INCLUDED




void dfs1_scc(int node,struct node pos1[]){

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
                dfs1_scc(child,pos1);
            }
        }
    }




    color[node]='b';
    order[order_cnt]=node;//ordering according to finishing time
    order_cnt++;
    //printf("the node is %d\n",node);





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



    //build_relation(pos1);

    /*for(int i=0; i<vertex; i++)
    {
        for(int inna=0; inna<vertex; inna++)
        {
            if(relation_matrix[i][inna]==1)line(pos1[i].parda,pos1[i].qanna,pos1[inna].parda,pos1[inna].qanna);
        }
    }

}*/


for(int i=0; i<vertex; i++)
    {
        for(int inna=0; inna<vertex; inna++)
        {
            if(relation_matrix[i][inna]==1){build_direction(i,inna,pos1);line(pos1[i].parda,pos1[i].qanna,pos1[inna].parda,pos1[inna].qanna);}
        }
    }
}





void dfs2_scc(int node,struct node pos1[],int index){

    color[node]='g';
    //sleep(3000);
    scanf("%c",&ch);
    cleardevice();
    graphdefaults();
    char nodename[20];
    tostring(nodename,order[index]+1);
    //outtextxy(50,280,"Following nodes are strongly connected to node ->");
    //outtextxy(380,280,nodename);


    int recxo=50;int recyo=220;

        for(int i=0;i<order_cnt;i++)
        {
            char str[20];
            tostring(str,order[i]+1);

        if(order[i]==order[index])
        {
           int rxo=recxo+50;
                        int ryo=recyo+50;
                        setcolor(RED);
                        rectangle(recxo,recyo,rxo,ryo);

                         outtextxy((recxo+rxo)/2,(recyo+ryo)/2,str);
                        //getch();
                        setcolor(WHITE);
                        recxo=rxo;
        }

        else{

             int rxo=recxo+50;
                        int ryo=recyo+50;
                        //setcolor(RED);
                        rectangle(recxo,recyo,rxo,ryo);

                         outtextxy((recxo+rxo)/2,(recyo+ryo)/2,str);
                        //getch();
                        //setcolor(WHITE);
                        recxo=rxo;

        }


        }







    int recx=50;int recy=300;


        for(int i=0;i<scc_cnt;i++)
        {
            char str[20];
            tostring(str,scc[i]+1);

        if(color[scc[i]]=='b')
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

   /* for(int i=0; i<vertex; i++)
    {
        for(int inna=0; inna<vertex; inna++)
        {
            if(trans_matrix[i][inna]==1)line(pos1[i].parda,pos1[i].qanna,pos1[inna].parda,pos1[inna].qanna);
        }
    }*/



    for(int i=0; i<vertex; i++)
    {
        for(int inna=0; inna<vertex; inna++)
        {
            if(trans_matrix[i][inna]==1){build_direction(i,inna,pos1);line(pos1[i].parda,pos1[i].qanna,pos1[inna].parda,pos1[inna].qanna);}
        }
    }


    /*int SccNode;int countans=0;

            for(int parina=0;parina<3;parina++)
            {
               printf("enter the strongly connected node to the node ->%d\n",order[index]+1);
            scanf("%d",&SccNode);
            SccNode=SccNode-1;
            if(trans_matrix[node][SccNode]==1&&color[SccNode]=='w')
            {
                dfs2(SccNode,pos1,index);countans=0;
            }

            else{
                countans++;
                printf("wrong!!");
                if(parina<2)printf("please try again");
            }
            if(countans==0)break;
            }*/




      for(int child=0;child<vertex;child++){
        if(trans_matrix[node][child]==1){
            if(color[child]=='w'){
                dfs2_scc(child,pos1,index);
            }
        }
    }




    //color[node]='b';
    scc[scc_cnt]=node;//ordering according to finishing time
    scc_cnt++;
    //printf("the node is %d\n",node);


    /*scanf("%c",&ch);
    cleardevice();
    graphdefaults();



     recxo=50; recyo=220;

        for(int i=0;i<order_cnt;i++)
        {
            char str[20];
            tostring(str,order[i]+1);

        if(order[i]==order[index])
        {
           int rxo=recxo+50;
                        int ryo=recyo+50;
                        setcolor(RED);
                        rectangle(recxo,recyo,rxo,ryo);

                         outtextxy((recxo+rxo)/2,(recyo+ryo)/2,str);
                        //getch();
                        setcolor(WHITE);
                        recxo=rxo;
        }

        else{

             int rxo=recxo+50;
                        int ryo=recyo+50;
                        //setcolor(RED);
                        rectangle(recxo,recyo,rxo,ryo);

                         outtextxy((recxo+rxo)/2,(recyo+ryo)/2,str);
                        //getch();
                        //setcolor(WHITE);
                        recxo=rxo;

        }


        }








    outtextxy(50,280,"Following nodes are strongly connected to node -");
    outtextxy(370,280,nodename);

      recx=50;recy=300;

        for(int i=0;i<scc_cnt;i++)
        {
            char str[20];
            tostring(str,scc[i]+1);

        if(color[scc[i]]=='b')
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
            if(trans_matrix[i][inna]==1)line(pos1[i].parda,pos1[i].qanna,pos1[inna].parda,pos1[inna].qanna);
        }
    }*/

}



void for_self_experiment_scc(void)
{
    x=0;y=0;order_cnt=0;scc_cnt=0;
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



       printf("enter the number of edge\n");
    scanf("%d",&edge);

    build_relation_matrix_scc(edge,pos1);





/*****************************************************************************************************/


    for(int i=0;i<vertex;i++){
        if(color[i]=='w'){
            dfs1_scc(i,pos1);
        }
      }


 scanf("%c",&ch);//problem hote pare

        initialize(vertex);

        graphdefaults();
        cleardevice();

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

    /*for(int i=0; i<vertex; i++)
    {
        for(int inna=0; inna<vertex; inna++)
        {
            if(trans_matrix[i][inna]==1)line(pos1[i].parda,pos1[i].qanna,pos1[inna].parda,pos1[inna].qanna);
        }
    }*/


    for(int i=0; i<vertex; i++)
    {
        for(int inna=0; inna<vertex; inna++)
        {
            if(trans_matrix[i][inna]==1){build_direction(i,inna,pos1);line(pos1[i].parda,pos1[i].qanna,pos1[inna].parda,pos1[inna].qanna);}
        }
    }




    for(int i=vertex-1;i>=0;i--){
        if(color[order[i]]=='w'||color[order[i]]=='g'){

            int jhamela=order[i];
            // first of all clear the scc array
            for(int i=0;i<vertex;i++){
                scc[i]=0;
            }
            scc_cnt=0;

            dfs2_scc(order[i],pos1,i);

            /********************************************************************************************/




            int stackNode;

            for(int item=0;item<scc_cnt;item++)
            {


             int recxo=50;int recyo=220;

        for(int index=0;index<order_cnt;index++)
        {
            char str[20];
            tostring(str,order[index]+1);

        if(jhamela==order[index])
        {
           int rxo=recxo+50;
                        int ryo=recyo+50;
                        setcolor(RED);
                        rectangle(recxo,recyo,rxo,ryo);

                         outtextxy((recxo+rxo)/2,(recyo+ryo)/2,str);
                        //getch();
                        setcolor(WHITE);
                        recxo=rxo;
        }

        else{

             int rxo=recxo+50;
                        int ryo=recyo+50;
                        //setcolor(RED);
                        rectangle(recxo,recyo,rxo,ryo);

                         outtextxy((recxo+rxo)/2,(recyo+ryo)/2,str);
                        //getch();
                        //setcolor(WHITE);
                        recxo=rxo;

        }


        }




     //cleardevice();
    //graphdefaults();
    char nodename[20];
    tostring(nodename,order[i]+1);



    outtextxy(50,280,"Following nodes are strongly connected to node -");
    outtextxy(370,280,nodename);

     int recx=50;int recy=300;

        for(int i=0;i<scc_cnt;i++)
        {
            char str[20];
            tostring(str,scc[i]+1);

        if(color[scc[i]]=='b')
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



   // build_relation(pos1);

   /*for(int i=0; i<vertex; i++)
    {
        for(int inna=0; inna<vertex; inna++)
        {
            if(trans_matrix[i][inna]==1)line(pos1[i].parda,pos1[i].qanna,pos1[inna].parda,pos1[inna].qanna);
        }
    }*/



    for(int i=0; i<vertex; i++)
    {
        for(int inna=0; inna<vertex; inna++)
        {
            if(trans_matrix[i][inna]==1){build_direction(i,inna,pos1);line(pos1[i].parda,pos1[i].qanna,pos1[inna].parda,pos1[inna].qanna);}
        }
    }


    //Sleep(3000);
    //ch=getch();
    //scanf("%c",&ch);

//graphdefaults();
//cleardevice();








                int countans=0;
                for(int parina=0;parina<=2;parina++)
                {
                    printf("enter the connected node to %d",order[i]+1);
                    scanf("%d",&stackNode);getchar();
                    stackNode=stackNode-1;
                    for(int ii=0;ii<scc_cnt;ii++){
                if(stackNode==scc[ii]&&color[stackNode]!='b'){countans++;color[stackNode]='b';break;}
            }

            if(countans==0){printf("wrong!! try again");}

            if(countans!=0)break;

                }

                if(countans==0)
                {
                  for(int ii=0;ii<scc_cnt;ii++)
                  {
                      if(color[scc[ii]]=='g')
                      {
                          color[scc[ii]]='b';break;
                      }
                  }
                }

                //;
                //scanf("%d",&ch);
                //cleardevice();
                //graphdefaults();
 recxo=50; recyo=220;

        for(int i=0;i<order_cnt;i++)
        {
            char str[20];
            tostring(str,order[i]+1);

        if(jhamela==order[i])
        {
           int rxo=recxo+50;
                        int ryo=recyo+50;
                        setcolor(RED);
                        rectangle(recxo,recyo,rxo,ryo);

                         outtextxy((recxo+rxo)/2,(recyo+ryo)/2,str);
                        //getch();
                        setcolor(WHITE);
                        recxo=rxo;
        }

        else{

             int rxo=recxo+50;
                        int ryo=recyo+50;
                        //setcolor(RED);
                        rectangle(recxo,recyo,rxo,ryo);

                         outtextxy((recxo+rxo)/2,(recyo+ryo)/2,str);
                        //getch();
                        //setcolor(WHITE);
                        recxo=rxo;

        }


        }




     //cleardevice();
    //graphdefaults();
     nodename[20];
    tostring(nodename,order[i]+1);



    outtextxy(50,280,"Following nodes are strongly connected to node -");
    outtextxy(370,280,nodename);

      recx=50; recy=300;

        for(int i=0;i<scc_cnt;i++)
        {
            char str[20];
            tostring(str,scc[i]+1);

        if(color[scc[i]]=='b')
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

/*for(int i=0; i<vertex; i++)
    {
        for(int inna=0; inna<vertex; inna++)
        {
            if(trans_matrix[i][inna]==1)line(pos1[i].parda,pos1[i].qanna,pos1[inna].parda,pos1[inna].qanna);
        }
    }*/
    //Sleep(3000);

    //scanf("%c",&ch);

    for(int i=0; i<vertex; i++)
    {
        for(int inna=0; inna<vertex; inna++)
        {
            if(trans_matrix[i][inna]==1){build_direction(i,inna,pos1);line(pos1[i].parda,pos1[i].qanna,pos1[inna].parda,pos1[inna].qanna);}
        }
    }







graphdefaults();
cleardevice();



        }

        //scanf("%c",&ch);
       // graphdefaults();
        //cleardevice();

        int recxo=50;int  recyo=220;

        for(int i=0;i<order_cnt;i++)
        {
            char str[20];
            tostring(str,order[i]+1);

        if(jhamela==order[i])
        {
           int rxo=recxo+50;
                        int ryo=recyo+50;
                        setcolor(RED);
                        rectangle(recxo,recyo,rxo,ryo);

                         outtextxy((recxo+rxo)/2,(recyo+ryo)/2,str);
                        //getch();
                        setcolor(WHITE);
                        recxo=rxo;
        }

        else{

             int rxo=recxo+50;
                        int ryo=recyo+50;
                        //setcolor(RED);
                        rectangle(recxo,recyo,rxo,ryo);

                         outtextxy((recxo+rxo)/2,(recyo+ryo)/2,str);
                        //getch();
                        //setcolor(WHITE);
                        recxo=rxo;

        }


        }




     //cleardevice();
    //graphdefaults();
   char  nodename[20];
    tostring(nodename,order[i]+1);



    outtextxy(50,280,"Following nodes are strongly connected to node -");
    outtextxy(370,280,nodename);

     int recx=50;int recy=300;

        for(int i=0;i<scc_cnt;i++)
        {
            char str[20];
            tostring(str,scc[i]+1);

        if(color[scc[i]]=='b')
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

     /*  for(int i=0; i<vertex; i++)
    {
        for(int inna=0; inna<vertex; inna++)
        {
            if(trans_matrix[i][inna]==1)line(pos1[i].parda,pos1[i].qanna,pos1[inna].parda,pos1[inna].qanna);
        }
    }*/


    for(int i=0; i<vertex; i++)
    {
        for(int inna=0; inna<vertex; inna++)
        {
            if(trans_matrix[i][inna]==1){build_direction(i,inna,pos1);line(pos1[i].parda,pos1[i].qanna,pos1[inna].parda,pos1[inna].qanna);}
        }
    }








            /**************************************************************************************************/



        }
    }





    getch();
    closegraph();



}






















