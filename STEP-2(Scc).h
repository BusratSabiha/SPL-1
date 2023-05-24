#ifndef STEP-2(SCC)_H_INCLUDED
#define STEP-2(SCC)_H_INCLUDED
#endif // STEP-2(SCC)_H_INCLUDED


int scc[100];int scc_cnt=0;


void dfs1(int node,struct node pos1[]){

    color[node]='g';
    //sleep(3000);
    //scanf("%c",&ch);
    ch=getch();
    cleardevice();
    graphdefaults();
    int recx=50;int recy=300;


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



    build_relation_scc(pos1);



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
    //printf("the node is %d\n",node);


    //scanf("%c",&ch);
    ch=getch();
    cleardevice();
    graphdefaults();

      recx=50;recy=300;

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



    build_relation_scc(pos1);

}









void dfs2(int node,struct node pos1[],int index){

    color[node]='g';
    //sleep(3000);
    //scanf("%c",&ch);
    ch=getch();
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

    for(int par=0;par<vertex;par++)
    {
      for(int child=0;child<vertex;child++){

        if(trans_matrix[par][child]==1){
            build_direction(par,child,pos1);line(pos1[par].parda,pos1[par].qanna,pos1[child].parda,pos1[child].qanna);
        }
    }


    }




    for(int child=0;child<vertex;child++){
        if(trans_matrix[node][child]==1){
            if(color[child]=='w'){
                dfs2(child,pos1,index);
            }
        }
    }

    color[node]='b';
    scc[scc_cnt]=node;//ordering according to finishing time
    scc_cnt++;
    //printf("the node is %d\n",scc_cnt);


    //scanf("%c",&ch);

    ch=getch();
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



   // build_relation(pos1);

   for(int par=0;par<vertex;par++)
    {
      for(int child=0;child<vertex;child++){

        if(trans_matrix[par][child]==1){
            build_direction(par,child,pos1);line(pos1[par].parda,pos1[par].qanna,pos1[child].parda,pos1[child].qanna);
        }
    }


    }

}





void for_teaching_purpose_Scc(void)
{

    order_cnt=0;x=0;y=0;//scc_cnt=0;
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

    build_relation_scc(pos1);
/*****************************************************************************************************/

        int sourcenode=4;

        dfs1(sourcenode,pos1);



    for(int i=0;i<vertex;i++){
        if(color[i]=='w'){
            dfs1(i,pos1);
        }
      }




        //scanf("%c",&ch);
        ch=getch();

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
    for(int par=0;par<vertex;par++)
    {
      for(int child=0;child<vertex;child++){

        if(trans_matrix[par][child]==1){
            build_direction(par,child,pos1);line(pos1[par].parda,pos1[par].qanna,pos1[child].parda,pos1[child].qanna);
        }
    }


    }


    for(int i=vertex-1;i>=0;i--){
        if(color[order[i]]=='w'){
            // first of all clear the scc array
            for(int i=1;i<=vertex;i++){
                scc[i]=0;
            }
            scc_cnt=0;

            dfs2(order[i],pos1,i);

             //printf("dfs2() called from %d and prnting scc: ",order[i]);
            for(int ii=0;ii<scc_cnt;ii++){
                //printf("%d ",scc[ii]+1);
               // scanf("%c",&ch);

               ch=getch();
            }
            //printf("\n");
        }
    }







    getch();
    closegraph();





}

