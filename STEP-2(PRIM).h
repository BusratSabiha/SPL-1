#ifndef STEP-2(PRIM)_H_INCLUDED
#define STEP-2(PRIM)_H_INCLUDED
#endif // STEP-2(PRIM)_H_INCLUDED


void initialize_prim(int vertex)
{
    int i,j;
    for(i=0; i<vertex; i++)
        for(int j=0; j<vertex; j++)
        {
            relation_matrix[i][j]=10000;
        }

    for(i=0; i<vertex; i++)
    {

        color[i]='w';
        parent_idx[i]=i;
        dist[i]=10000;
    }

}



void build_relation_prim(struct node pos1[])
{
    relation_matrix[0][1]=11;
    relation_matrix[1][0]=11;

    //line(pos1[0].parda,pos1[0].qanna,pos1[1].parda,pos1[1].qanna);

    setcolor(RED);
    outtextxy((pos1[0].parda+pos1[1].parda)/2,((pos1[0].qanna+pos1[1].qanna)/2)-20,"11");

    relation_matrix[0][4]=5;
    relation_matrix[4][0]=5;

    //line(pos1[0].parda,pos1[0].qanna,pos1[4].parda,pos1[4].qanna);

    outtextxy((pos1[0].parda+pos1[4].parda)/2,((pos1[0].qanna+pos1[4].qanna)/2)-20,"5");

    relation_matrix[5][1]=3;
    relation_matrix[1][5]=3;

    //line(pos1[5].parda,pos1[5].qanna,pos1[1].parda,pos1[1].qanna);

    outtextxy((pos1[5].parda+pos1[1].parda)/2,((pos1[5].qanna+pos1[1].qanna)/2)-20,"3");

    relation_matrix[5][2]=8;
    relation_matrix[2][5]=8;

    // line(pos1[5].parda,pos1[5].qanna,pos1[2].parda,pos1[2].qanna);

    outtextxy((pos1[5].parda+pos1[2].parda)/2,((pos1[5].qanna+pos1[2].qanna)/2)-20,"8");


    relation_matrix[5][6]=6;
    relation_matrix[6][5]=6;

    //line(pos1[5].parda,pos1[5].qanna,pos1[6].parda,pos1[6].qanna);

    outtextxy((pos1[5].parda+pos1[6].parda)/2,((pos1[5].qanna+pos1[6].qanna)/2)-20,"6");
    relation_matrix[2][6]=2;
    relation_matrix[6][2]=2;

    //line(pos1[2].parda,pos1[2].qanna,pos1[6].parda,pos1[6].qanna);

    outtextxy((pos1[2].parda+pos1[6].parda)/2,((pos1[2].qanna+pos1[6].qanna)/2)-20,"2");

    relation_matrix[2][3]=7;
    relation_matrix[3][2]=7;

    //line(pos1[2].parda,pos1[2].qanna,pos1[3].parda,pos1[3].qanna);

    outtextxy((pos1[2].parda+pos1[3].parda)/2,((pos1[2].qanna+pos1[3].qanna)/2)-20,"7");

    relation_matrix[7][6]=3;
    relation_matrix[6][7]=3;

    //line(pos1[7].parda,pos1[7].qanna,pos1[6].parda,pos1[6].qanna);

    outtextxy((pos1[7].parda+pos1[6].parda)/2,((pos1[7].qanna+pos1[6].qanna)/2)-20,"3");

    relation_matrix[7][3]=5;
    relation_matrix[3][7]=5;

    //line(pos1[7].parda,pos1[7].qanna,pos1[3].parda,pos1[3].qanna);

    outtextxy((pos1[7].parda+pos1[3].parda)/2,((pos1[7].qanna+pos1[3].qanna)/2)-20,"5");

    relation_matrix[6][3]=10;
    relation_matrix[3][6]=10;

    // line(pos1[6].parda,pos1[6].qanna,pos1[3].parda,pos1[3].qanna);

    outtextxy((pos1[6].parda+pos1[3].parda)/2,((pos1[6].qanna+pos1[3].qanna)/2)-20,"10");

    relation_matrix[0][5]=15;
    relation_matrix[5][0]=15;

    // line(pos1[0].parda,pos1[0].qanna,pos1[5].parda,pos1[5].qanna);

    outtextxy((pos1[0].parda+pos1[5].parda)/2,((pos1[0].qanna+pos1[5].qanna)/2)-20,"15");

    relation_matrix[4][5]=7;
    relation_matrix[5][4]=7;

    //line(pos1[4].parda,pos1[4].qanna,pos1[5].parda,pos1[5].qanna);

    outtextxy((pos1[4].parda+pos1[5].parda)/2,((pos1[4].qanna+pos1[5].qanna)/2)-20,"7");

    setcolor(WHITE);


}


void for_teaching_purpose_prim(void)
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"");

    int i,j;
    vertex=8;

    initialize_prim(vertex);

    struct node pos1[vertex];




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
            x=pos1[inna-4].parda;
            y=(pos1[inna-4].qanna)+120;
        }

        outtextxy(x-25,y-15,str);


        changeColor(x,y,WHITE);

        pos1[inna].parda=x;
        pos1[inna].qanna=y;

    }



    build_relation_prim(pos1);



    for(int pi=0; pi<vertex; pi++)
    {
        for(int ji=0; ji<vertex; ji++)
        {
            if(relation_matrix[pi][ji]>0&&relation_matrix[pi][ji]<10000)line(pos1[pi].parda,pos1[pi].qanna,pos1[ji].parda,pos1[ji].qanna);

        }
    }
    /*****************************************************************************************************/



    ch=getch();


    int sourcenode=0;int destination=3;

        //Sleep(2000);
       // ch=getch();

        graphdefaults();
        cleardevice();

        //int recx=50;int recy=220;


    for(int inna=0; inna<vertex; inna++)
    {
        char str[20];
        tostring(str,inna+1);

        outtextxy(pos1[inna].parda-30,pos1[inna].qanna-15,str);


        if(inna==sourcenode){
            changeColor(pos1[inna].parda,pos1[inna].qanna,GREEN);

        }

        else changeColor(pos1[inna].parda,pos1[inna].qanna,WHITE);


    }

    build_relation_prim(pos1);
    for(i=0;i<vertex;i++)
    {
       for(int inna=0;inna<vertex;inna++)
       {
           if(relation_matrix[i][inna]>0&&relation_matrix[i][inna]<10000)line(pos1[i].parda,pos1[i].qanna,pos1[inna].parda,pos1[inna].qanna);
       }
    }




        color[sourcenode]='g';










    int edge_count=0,cnt=0,mincost=0;

    struct node c_edge[vertex-1];

    while(edge_count < vertex - 1)
    {

        int min=100000, a=-1, b=-1;
        for (int i = 0; i < vertex; i++)
        {
            if(color[i]=='g'){
            for (int j = 0; j < vertex; j++)
            {
                if (color[j]=='w' && relation_matrix[i][j] < min)
                {
                    min = relation_matrix[i][j];
                    a = i;
                    b = j;
                }
            }

            }
        }

        //union1(a, b);
        printf("Edge %d:(%d, %d) cost:%d \n",edge_count++, a, b, min);
        //color[a]='g';
        color[b]='g';
        c_edge[cnt].parda=a;
        c_edge[cnt].qanna=b;

        cnt++;





        ch=getch();

        cleardevice();
        graphdefaults();

        for(int inna=0; inna<vertex; inna++)
        {
            char str[20];
            tostring(str,inna+1);

            outtextxy(pos1[inna].parda-30,pos1[inna].qanna-15,str);


            if(color[inna]=='g')changeColor(pos1[inna].parda,pos1[inna].qanna,GREEN);

            else if(color[inna]=='b')changeColor(pos1[inna].parda,pos1[inna].qanna,RED);

            else changeColor(pos1[inna].parda,pos1[inna].qanna,WHITE);


        }


        build_relation_prim(pos1);






        for(int it=0; it<vertex; it++)
        {
            for(int inna=0; inna<vertex; inna++)
            {
                if(relation_matrix[it][inna]>0&&relation_matrix[it][inna]<10000)
                {
                   int flag=-1;
                   for(int k=0;k<cnt;k++)
                   {

                      if((c_edge[k].parda==it&&c_edge[k].qanna==inna)||(c_edge[k].parda==inna&&c_edge[k].qanna==it))flag++;


                   }

                   if(flag!=-1)
                   {
                        setcolor(GREEN);
                        line(pos1[it].parda,pos1[it].qanna,pos1[inna].parda,pos1[inna].qanna);

                        //line(pos1[c_edge[alas].parda].parda,pos1[c_edge[alas].parda].qanna,pos1[c_edge[alas].qanna].parda,pos1[c_edge[alas].qanna].qanna);


                        setcolor(WHITE);

                   }



                    else line(pos1[it].parda,pos1[it].qanna,pos1[inna].parda,pos1[inna].qanna);

                }
            }
        }




       // ch=getch();


       mincost=mincost+min;
        char min_string[20];

        tostring(min_string,min);

        outtextxy(50,350,"minimum_cost = minimum_cost + ");
        outtextxy(290,350,min_string);
        tostring(min_string,mincost);

        outtextxy(50,380,"minimum_cost = ");
        outtextxy(180,380,min_string);








    }
    printf("\n Minimum cost= %d \n", mincost);

    // recx=50;recy=220;









ch=getch();

ch=getch();

}


