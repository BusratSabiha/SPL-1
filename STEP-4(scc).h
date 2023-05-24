#ifndef STEP-4(SCC)_H_INCLUDED
#define STEP-4(SCC)_H_INCLUDED
#endif // STEP-4(SCC)_H_INCLUDED

int countgs,anss;


int game_part_scc(void)
{

    //qn1

    countgs=0;
    anss=0;


    char q1;

    cout<<"1. Which of the following algorithms is used to find strongly connected components______"<<"\n"<<" a. Bellman-Ford"<<"\n"<<" b. Floyd-Warshal"<<"\n"<<" c. Kosaraju's Algorithm"<<"\n"<<" d. Dijkstra's algorithm"<<"\n";

    cin>>q1;

    if(q1=='c'||q1=='C')
    {
        cout<<"congratulation!! the answer is right"<<"\n";
        anss++;
    }

    else
    {
        cout<<"The answer is wrong"<<"\n";//<<"The right answer is 'c'"<<"\n";
    }


    scanf("%c",&ch);

    cout<<"2. What is the time complexity of Kosaraju's algorithm ?"<<"\n"<<" a.O(logV)"<<"\n"<<" b. O(E logV)"<<"\n"<<" c. O(|V|+|E|)"<<"\n"<<" d. O(V logE)"<<"\n";

    cin>>q1;

    if(q1=='c'||q1=='C')
    {
        cout<<"congratulation!! the answer is right"<<"\n";
        anss++;
    }

    else
    {
        cout<<"The answer is wrong"<<"\n";//<<"The right answer is 'c'"<<"\n";
    }


    scanf("%c",&ch);
    scanf("%c",&ch);

    char strans[10],fixed_ans[10];
    struct node pos3[6];
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"");

    //for qn1
    while(countgs<6)
    {
        char str[20];
        countgs++;
        tostring(str,countgs);
        if(countgs==1)
        {
            x=200;
            y=100;
        }
        if(countgs==2)
        {
            x=400;
            y=100;
        }
        if(countgs==3)
        {
            x=200;
            y=300;
        }
        if(countgs==4)
        {
            x=400;
            y=300;
        }
        if(countgs==5)
        {
            x=100;
            y=200;
        }
        if(countgs==6)
        {
            x=500;
            y=200;
        }
        //if(count3==7){x=100;y=400;}
        //if(count3==8){x=250;y=400;}
        //if(count3==9){x=400;y=400;}
        //setcolor(RED);
        outtextxy(x,y-30,str);
        //setcolor(WHITE);
        circle(x,y,rad);

        if(countgs==2)
        {
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(x,y,WHITE);
        }

        else
        {
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(x,y,WHITE);

        }


        pos3[countgs].parda=x;
        pos3[countgs].qanna=y;

    }

    //setcolor(RED);
    outtextxy((pos3[1].parda+pos3[2].parda)/2,((pos3[1].qanna+pos3[2].qanna)/2)-10,">");
    outtextxy((pos3[2].parda+pos3[6].parda)/2,((pos3[2].qanna+pos3[6].qanna)/2)-5,"J");
    outtextxy((pos3[4].parda+pos3[6].parda)/2,((pos3[4].qanna+pos3[6].qanna)/2)-10,"L");
    outtextxy((pos3[3].parda+pos3[4].parda)/2,((pos3[3].qanna+pos3[4].qanna)/2)-10,"<");
    outtextxy((pos3[3].parda+pos3[5].parda)/2,((pos3[3].qanna+pos3[5].qanna)/2)-2,"T");
    outtextxy((pos3[1].parda+pos3[5].parda)/2-2,((pos3[1].qanna+pos3[5].qanna)/2)-7,"7");
    outtextxy((pos3[1].parda+pos3[3].parda)/2-3,((pos3[1].qanna+pos3[3].qanna)/2),"V");
    outtextxy((pos3[2].parda+pos3[4].parda)/2-3,((pos3[2].qanna+pos3[4].qanna)/2),"V");
    outtextxy((pos3[2].parda+pos3[3].parda)/2-2,((pos3[2].qanna+pos3[3].qanna)/2)-7,"7");



    // setcolor(WHITE);


    line(pos3[1].parda,pos3[1].qanna,pos3[2].parda,pos3[2].qanna);
    line(pos3[6].parda,pos3[6].qanna,pos3[2].parda,pos3[2].qanna);
    line(pos3[1].parda,pos3[1].qanna,pos3[3].parda,pos3[3].qanna);
    line(pos3[1].parda,pos3[1].qanna,pos3[5].parda,pos3[5].qanna);
    line(pos3[4].parda,pos3[4].qanna,pos3[3].parda,pos3[3].qanna);
    line(pos3[4].parda,pos3[4].qanna,pos3[6].parda,pos3[6].qanna);
    line(pos3[3].parda,pos3[3].qanna,pos3[2].parda,pos3[2].qanna);
    line(pos3[2].parda,pos3[2].qanna,pos3[4].parda,pos3[4].qanna);
    line(pos3[5].parda,pos3[5].qanna,pos3[3].parda,pos3[3].qanna);




    cout<<"3.  Find the number of strongly connected components in the graph..."<<"\n"<<" a. 5"<<"\n"<<" b. 2"<<"\n"<<" c. 3"<<"\n"<<" d. 1"<<"\n";

    cin>>q1;

    if(q1=='d'||q1=='D')
    {
        cout<<"congratulation!! the answer is right"<<"\n";
        anss++;
    }

    else
    {
        cout<<"The answer is wrong"<<"\n";//<<"The right answer is 'd'"<<"\n";
    }


    scanf("%c",&ch);


    cout<<"4. If the edge 3 -> 2 is removed from the graph, then how many strongly connected components will be in the graph?"<<"\n"<<" a. 1"<<"\n"<<" b. 2"<<"\n"<<" c. 4"<<"\n"<<" d. 6"<<"\n";

    cin>>q1;

    if(q1=='a'||q1=='A')
    {
        cout<<"congratulation!! the answer is right"<<"\n";
        anss++;
    }

    else
    {
        cout<<"The answer is wrong"<<"\n";//<<"The right answer is 'a'"<<"\n";
    }


    scanf("%c",&ch);


    cout<<"5. If a graph is undirected, then how many strongly connected components will be in the graph??"<<"\n"<<" a. 5"<<"\n"<<" b. 2"<<"\n"<<" c. 1"<<"\n"<<" d. None"<<"\n";

    cin>>q1;

    if(q1=='c'||q1=='C')
    {
        cout<<"congratulation!! the answer is right"<<"\n";
        anss++;
    }

    else
    {
        cout<<"The answer is wrong"<<"\n";//<<"The right answer is 'c'"<<"\n";
    }


    scanf("%c",&ch);




    getch();
    closegraph();

    return anss;

}
