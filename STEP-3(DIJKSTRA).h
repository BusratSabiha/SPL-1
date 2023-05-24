#ifndef STEP-3(DIJKSTRA)_H_INCLUDED
#define STEP-3(DIJKSTRA)_H_INCLUDED
#endif // STEP-3(DIJKSTRA)_H_INCLUDED


void for_self_experiment_dijkstra(void)
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"");

    int i,j;
     vertex=8;
     struct node pos1[vertex];
     initialize_dijkstra(vertex);


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

        outtextxy(x-25,y-15,str);


        changeColor(x,y,WHITE);

        pos1[inna].parda=x;
        pos1[inna].qanna=y;

}




    //struct node pos1[vertex];

    printf("\nenter the number of edge");
    scanf("%d",&edge);

    build_relation_matrix_dijkstra(edge,pos1);



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
/*****************************************************************************************************/


int recx2=50;int recy2=350;int recx3=50;int recy3=400;int recx1=50;int recy1=300;
    outtextxy(1,320,"vertex");
    outtextxy(1,370,"parent");
    outtextxy(1,420,"dist");


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



                        else if(dist[i]==0)
                        outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,"0");



                        //else outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,str3);

                        else outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,str3);


                        recx1=rx1;
                        recx2=rx2;
                        recx3=rx3;







        }

        int sourcenode;

        printf("\nenter the source node:\n");
        scanf("%d",&sourcenode);
        sourcenode=sourcenode-1;

        //Sleep(2000);
       // ch=getch();

       //scanf("%c",&ch);
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

        }

        else changeColor(pos1[inna].parda,pos1[inna].qanna,WHITE);


    }





    for(int pi=0;pi<vertex;pi++)
    {
        for(int ji=0;ji<vertex;ji++)
        {
            if(relation_matrix[pi][ji]>0&&relation_matrix[pi][ji]<10000)
            {


                char coststring[20];
                tostring(coststring,relation_matrix[pi][ji]);

                setcolor(RED);
                 outtextxy((pos1[pi].parda+pos1[ji].parda)/2,((pos1[pi].qanna+pos1[ji].qanna)/2)-20,coststring);

               setcolor(WHITE);

               line(pos1[pi].parda,pos1[pi].qanna,pos1[ji].parda,pos1[ji].qanna);


            }

        }
    }



     //Sleep(3000);

    //ch=getch();



        //int queue[vertex];
        int start=sourcenode;
        //start=0;end=0;
        //queue[end]=sourcenode;
        //end++;
        color[sourcenode]='g';
        dist[sourcenode]=0;
        parent_idx[sourcenode]=-1;
        //int index=0;

        recx2=50; recy2=350; recx3=50; recy3=400; recx1=50; recy1=300;
     outtextxy(1,320,"vertex");
    outtextxy(1,370,"parent");
    outtextxy(1,420,"dist");

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



                        else if(dist[i]==0)
                        outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,"0");

                         else outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,str3);

                        //else outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,str3);




                        recx1=rx1;
                        recx2=rx2;
                        recx3=rx3;







        }

    // ch=getch();

    scanf("%c",&ch);

        for(int dijk=1;dijk<=vertex;dijk++)
        {
            int min=1000;
            int m=0;
            //ch=getch();
            //cleardevice();
            //graphdefaults();

            //int u=queue[start];

            for(int it=0; it<vertex; it++)
            {
                //cleardevice();
            //graphdefaults();


                int d = dist[start] +relation_matrix[start][it];
            if(d< dist[it]&&color[it]=='w')
            {
                dist[it] = d;
                parent_idx[it] = start;
                int flag=-1;
                for(int check=0;check<=2;check++)
                {
                    int resdist;

                    printf("\nenter the current distance of %d\n",it+1);
                    scanf("%d",&resdist);

                    if(resdist==dist[it]){flag++;break;}

                    else{
                        printf("your answer is wrong!!......");

                        if(check<2)printf("please try again\n");
                    }
                }


                if(flag==-1){printf("\nyou answered wrong for each of the time\n");}

               //ch=getch();
               cleardevice();
               graphdefaults();

                recx=50;recy=220;










             for(int inna=0; inna<vertex; inna++)
    {
       char str[20];
        tostring(str,inna+1);

        outtextxy(pos1[inna].parda-30,pos1[inna].qanna-15,str);


        if(color[inna]=='g')changeColor(pos1[inna].parda,pos1[inna].qanna,GREEN);

        else if(color[inna]=='b')changeColor(pos1[inna].parda,pos1[inna].qanna,RED);

        else changeColor(pos1[inna].parda,pos1[inna].qanna,WHITE);


    }






for(int pi=0;pi<vertex;pi++)
    {
        for(int ji=0;ji<vertex;ji++)
        {
            if(relation_matrix[pi][ji]>0&&relation_matrix[pi][ji]<10000)
            {

                char coststring[20];
                tostring(coststring,relation_matrix[pi][ji]);

                setcolor(RED);
                 outtextxy((pos1[pi].parda+pos1[ji].parda)/2,((pos1[pi].qanna+pos1[ji].qanna)/2)-20,coststring);

               setcolor(WHITE);

               if((pi==parent_idx[ji])||(ji==parent_idx[pi])){setcolor(GREEN);line(pos1[pi].parda,pos1[pi].qanna,pos1[ji].parda,pos1[ji].qanna);setcolor(WHITE);}
               else line(pos1[pi].parda,pos1[pi].qanna,pos1[ji].parda,pos1[ji].qanna);
              // line(pos1[pi].parda,pos1[pi].qanna,pos1[ji].parda,pos1[ji].qanna);


            }

        }
    }











    int recx2=50;int recy2=350;int recx3=50;int recy3=400;int recx1=50;int recy1=300;
         outtextxy(1,320,"vertex");
         outtextxy(1,370,"parent");
         outtextxy(1,420,"dist");


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

                       // else outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,str3);

                        else if(dist[i]==0)
                        outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,"0");

                        else outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,str3);




                        recx1=rx1;
                        recx2=rx2;
                        recx3=rx3;




            //cleardevice();
            //graphdefaults();



        }

                //ch=getch();
            }
            if(min>dist[it] && color[it]=='w')
            {
                min = dist[it];
                m = it;
            }








        }
            //start++;//dequeue

            start=m;
            color[start]='g';

             //ch=getch();

             //ch=getch();
             //scanf("%c",&ch);
             ch=getch();
            cleardevice();
            graphdefaults();

        recx=50;recy=220;










             for(int inna=0; inna<vertex; inna++)
    {
       char str[20];
        tostring(str,inna+1);

        outtextxy(pos1[inna].parda-30,pos1[inna].qanna-15,str);


        if(color[inna]=='g')changeColor(pos1[inna].parda,pos1[inna].qanna,GREEN);

        else if(color[inna]=='b')changeColor(pos1[inna].parda,pos1[inna].qanna,RED);

        else changeColor(pos1[inna].parda,pos1[inna].qanna,WHITE);


    }




    for(int pi=0;pi<vertex;pi++)
    {
        for(int ji=0;ji<vertex;ji++)
        {
            if(relation_matrix[pi][ji]>0&&relation_matrix[pi][ji]<10000)
            {


                char coststring[20];
                tostring(coststring,relation_matrix[pi][ji]);

                setcolor(RED);
                 outtextxy((pos1[pi].parda+pos1[ji].parda)/2,((pos1[pi].qanna+pos1[ji].qanna)/2)-20,coststring);

               setcolor(WHITE);
               //line(pos1[pi].parda,pos1[pi].qanna,pos1[ji].parda,pos1[ji].qanna);
               if((pi==parent_idx[ji])||(ji==parent_idx[pi])){setcolor(GREEN);line(pos1[pi].parda,pos1[pi].qanna,pos1[ji].parda,pos1[ji].qanna);setcolor(WHITE);}
               else line(pos1[pi].parda,pos1[pi].qanna,pos1[ji].parda,pos1[ji].qanna);

            }

        }
    }


    int recx2=50;int recy2=350;int recx3=50;int recy3=400;int recx1=50;int recy1=300;
         outtextxy(1,320,"vertex");
         outtextxy(1,370,"parent");
         outtextxy(1,420,"dist");


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

                       // else outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,str3);

                        else if(dist[i]==0)
                        outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,"0");

                        else outtextxy(((recx3+rx3)/2)-5,(recy3+ry3)/2,str3);




                        recx1=rx1;
                        recx2=rx2;
                        recx3=rx3;







        }




        }

        ch=getch();
        ch=getch();


        /*printf("\n\n\n");

        for(i=0; i<vertex; i++)

        {
            printf("vertex %d:\t",i);
            printf("level is %d\t",dist[i]);
            printf("parent is %d\t",parent_idx[i]);
            printf("color is %c\t",color[i]);
            printf("\n\n\n");

        }*/





}

