
void for_self_experiment_BFS()
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
