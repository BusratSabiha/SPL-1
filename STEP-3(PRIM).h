
void build_relation_matrix_prim(int edge,struct node pos1[])
{
    int i,cost;
    for(i=0; i<edge; i++)
    {

        //int u,v;
        printf("enter u & v");


        scanf("%d %d",&u,&v);
        u=u-1;
        v=v-1;

        printf("\nEnter the cost of the edge:\n");
        scanf("%d",&cost);

        relation_matrix[u][v]=cost;
        relation_matrix[v][u]=cost;

        //array[i]=cost;

        char coststring[20];
        tostring(coststring,cost);

        setcolor(RED);
        outtextxy((pos1[u].parda+pos1[v].parda)/2,((pos1[u].qanna+pos1[v].qanna)/2)-20,coststring);

        setcolor(WHITE);

        line(pos1[u].parda,pos1[u].qanna,pos1[v].parda,pos1[v].qanna);
    }

}



void for_self_experiment_prim(void)
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



    //build_relation(pos1);

    printf("\nenter the number of edge");
    scanf("%d",&edge);

    build_relation_matrix_prim(edge,pos1);




    /*for(int pi=0; pi<vertex; pi++)
    {
        for(int ji=0; ji<vertex; ji++)
        {
            if(relation_matrix[pi][ji]>0&&relation_matrix[pi][ji]<10000)line(pos1[pi].parda,pos1[pi].qanna,pos1[ji].parda,pos1[ji].qanna);

        }
    }*/
    /*****************************************************************************************************/

    //sort(array,array+edge);

   // ch=getch();


  int sourcenode;
  printf("\nenter the source node\n");
  scanf("%d",&sourcenode);
  sourcenode=sourcenode-1;



   color[sourcenode]='g';
  // scanf("%c",&ch);

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


       // build_relation(pos1);

        for(int pi=0;pi<vertex;pi++)
    {
        for(int ji=0;ji<vertex;ji++)
        {
            if(relation_matrix[pi][ji]>0&&relation_matrix[pi][ji]<10000)
            {
                line(pos1[pi].parda,pos1[pi].qanna,pos1[ji].parda,pos1[ji].qanna);

                char coststring[20];
                tostring(coststring,relation_matrix[pi][ji]);

                setcolor(RED);
                 outtextxy((pos1[pi].parda+pos1[ji].parda)/2,((pos1[pi].qanna+pos1[ji].qanna)/2)-20,coststring);

               setcolor(WHITE);


            }

        }
    }















  // scanf("%c",&ch);

    int edge_count=0,cnt=0,mincost=0;

    struct node c_edge[vertex-1];

    while(edge_count < vertex - 1)
    {

        int min=100000, a=-1, b=-1;


        /*for(int janina=0;janina<3;janina++)
        {
            printf("\nchose the edge i mean enter the vertexes\n");

            int choice1,choice2;

            if((relation_matrix[choice1][choice2]==array[edge_count])&&find(choice1)!=find(choice2))
               {
                   union1(choice1,choice2);
               }

        }*/



        int track=-1;

        for (int i = 0; i < vertex; i++)
        {
            if(color[i]=='g'){
            for (int j = 0; j < vertex; j++)
            {
                if (color[j]=='w' && relation_matrix[i][j] < min)
                {
                    min = relation_matrix[i][j];
                     //a = i;
                     //b = j;
                }
            }
            }
        }


        for(int janina=0;janina<3;janina++)
        {
            printf("\nchose the edge i mean enter the vertexes\n");

            int choice1,choice2;

            cin>>choice1>>choice2;

             choice1=choice1-1;
             choice2=choice2-1;
            if(color[choice1]=='g'&&color[choice2]=='w'&&(relation_matrix[choice1][choice2]==min))
               {
                   //union1(choice1,choice2);

                   //printf("Edge %d:(%d, %d) cost:%d \n",edge_count++, a, b, min);
                   color[choice2]='g';
                   //color[choice2]='g';
                   c_edge[cnt].parda=choice1;
                   c_edge[cnt].qanna=choice2;

                   cnt++;

                   track++;

                   break;
               }

            else
            {
                printf("\nwrong!!.....please try again");

                if(janina<=1)printf(" please try again!!\n");
            }

        }

        if(track==-1)
        {

           for (int i = 0; i < vertex; i++)
        {
            if(color[i]=='g'){
            for (int j = 0; j < vertex; j++)
            {
                if (color[j]=='w' && relation_matrix[i][j] == min)
                {
                    //min = relation_matrix[i][j];
                     a = i;
                    b = j;
                }
            }

            }
        }

        // union1(a, b);
        //printf("Edge %d:(%d, %d) cost:%d \n",edge_count++, a, b, min);
       // color[a]='g';
        color[b]='g';
        c_edge[cnt].parda=a;
        c_edge[cnt].qanna=b;

        cnt++;
        }







       // mincost=mincost+min;

        outtextxy(30,350,"minimumcost=minimumcost+min");



       //scanf("%c",&ch);

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


       // build_relation(pos1);

        for(int pi=0;pi<vertex;pi++)
    {
        for(int ji=0;ji<vertex;ji++)
        {
            if(relation_matrix[pi][ji]>0&&relation_matrix[pi][ji]<10000)
            {
                line(pos1[pi].parda,pos1[pi].qanna,pos1[ji].parda,pos1[ji].qanna);

                char coststring[20];
                tostring(coststring,relation_matrix[pi][ji]);

                setcolor(RED);
                 outtextxy((pos1[pi].parda+pos1[ji].parda)/2,((pos1[pi].qanna+pos1[ji].qanna)/2)-20,coststring);

               setcolor(WHITE);


            }

        }
    }







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





        //ch=getch();
       // scanf("%c",&ch);

        mincost=mincost+min;
        char min_string[20];

        tostring(min_string,min);

        outtextxy(50,350,"minimum_cost = minimum_cost + ");
        if(min<10000)outtextxy(290,350,min_string);

        else outtextxy(290,350,"INFINITY");


        tostring(min_string,mincost);

        outtextxy(50,380,"minimum_cost = ");
        if(mincost<10000)outtextxy(170,380,min_string);
        else outtextxy(170,380,"INFINITY");










    }
   // printf("\n Minimum cost= %d \n", mincost);

    // recx=50;recy=220;









//ch=getch();
scanf("%c",&ch);

}

















