#ifndef STEP-2(KRUSKAL)_H_INCLUDED
#define STEP-2(KRUSKAL)_H_INCLUDED
#endif // STEP-2(KRUSKAL)_H_INCLUDED


void for_teaching_purpose_kru(void)
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"");

    int i,j;
    vertex=8;

    initialize_kru(vertex);

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



    build_relation_kru(pos1);



    for(int pi=0; pi<vertex; pi++)
    {
        for(int ji=0; ji<vertex; ji++)
        {
            if(relation_matrix[pi][ji]>0&&relation_matrix[pi][ji]<10000)line(pos1[pi].parda,pos1[pi].qanna,pos1[ji].parda,pos1[ji].qanna);

        }
    }
    /*****************************************************************************************************/



    ch=getch();

    int edge_count=0,cnt=0,mincost=0;

    struct node c_edge[vertex-1];

    while(edge_count < vertex - 1)
    {

        int min=100000, a=-1, b=-1;
        for (int i = 0; i < vertex; i++)
        {
            for (int j = 0; j < vertex; j++)
            {
                if (find(i) != find(j) && relation_matrix[i][j] < min)
                {
                    min = relation_matrix[i][j];
                    a = i;
                    b = j;
                }
            }
        }

        union1(a, b);
        printf("Edge %d:(%d, %d) cost:%d \n",edge_count++, a, b, min);
        color[a]='g';
        color[b]='g';
        c_edge[cnt].parda=a;
        c_edge[cnt].qanna=b;

        cnt++;

        mincost=mincost+min;

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


        build_relation_kru(pos1);







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







    //mincost=mincost+min;
        char min_string[20];

        tostring(min_string,min);

        outtextxy(50,350,"minimum_cost = minimum_cost + ");
        outtextxy(290,350,min_string);
        tostring(min_string,mincost);

        outtextxy(50,380,"minimum_cost = ");
        outtextxy(180,380,min_string);




    ch=getch();




    }
    printf("\n Minimum cost= %d \n", mincost);

    // recx=50;recy=220;









ch=getch();

}
