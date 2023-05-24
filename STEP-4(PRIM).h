#ifndef STEP-4(PRIM)_H_INCLUDED
#define STEP-4(PRIM)_H_INCLUDED
#endif // STEP-4(PRIM)_H_INCLUDED

int countgp,ansp;

int  game_part_prim(void)
{

    //qn1
    countgp=0;
    ansp=0;

    char q1;

    cout<<"1. Which of the following is true?"<<"\n"<<" a. Prim's algorithm initializes with a vertex"<<"\n"<<" b. Prim's algorithm initializes with a edge"<<"\n"<<" c. Prim's algorithm initializes with a vertex which has smallest edge"<<"\n"<<" d. Prim's algorithm initializes with a forest"<<"\n";

    cin>>q1;

    if(q1=='a'||q1=='A')
    {
        cout<<"congratulation!! the answer is right"<<"\n";
        ansp++;
    }

    else
    {
        cout<<"The answer is wrong"<<"\n";//<<"The right answer is 'a'"<<"\n";
    }


    scanf("%c",&ch);

    cout<<"2. What is the worst case time complexity of Prim's algorithm if adjacency matrix is used?"<<"\n"<<" a.O(logV)"<<"\n"<<" b. O(V^2)"<<"\n"<<" c. O(E^2)"<<"\n"<<" d. O(V logE)"<<"\n";

    cin>>q1;

    if(q1=='b'||q1=='B')
    {
        cout<<"congratulation!! the answer is right"<<"\n";
        ansp++;
    }

    else
    {
        cout<<"The answer is wrong"<<"\n";//<<"The right answer is 'b'"<<"\n";
    }


    scanf("%c",&ch);
    scanf("%c",&ch);

    char strans[10],fixed_ans[10];
    struct node pos3[6];
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"");

    //for qn1
    while(countgp<6)
    {
        char str[20];
        countgp++;
        tostring(str,countgp);


        if(countgp==1)
        {
            x=200;
            y=100;
        }
        if(countgp==2)
        {
            x=400;
            y=100;
        }
        if(countgp==3)
        {
            x=200;
            y=300;
        }
        if(countgp==4)
        {
            x=400;
            y=300;
        }
        if(countgp==5)
        {
            x=100;
            y=200;
        }
        if(countgp==6)
        {
            x=500;
            y=200;
        }

        outtextxy(x,y-30,str);
        //setcolor(WHITE);
        circle(x,y,rad);

        if(countgp==5)
        {
            setfillstyle(SOLID_FILL,GREEN);
            floodfill(x,y,WHITE);
        }

        else
        {
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(x,y,WHITE);

        }


        pos3[countgp].parda=x;
        pos3[countgp].qanna=y;

    }

    setcolor(RED);
    outtextxy((pos3[1].parda+pos3[2].parda)/2,((pos3[1].qanna+pos3[2].qanna)/2)-20,"3");
    outtextxy((pos3[2].parda+pos3[6].parda)/2,((pos3[2].qanna+pos3[6].qanna)/2)-20,"2");
    outtextxy((pos3[4].parda+pos3[6].parda)/2+5,((pos3[4].qanna+pos3[6].qanna)/2)-10,"4");
    outtextxy((pos3[3].parda+pos3[4].parda)/2,((pos3[3].qanna+pos3[4].qanna)/2)+10,"5");
    outtextxy((pos3[3].parda+pos3[5].parda)/2-5,((pos3[3].qanna+pos3[5].qanna)/2)+10,"3");
    outtextxy((pos3[1].parda+pos3[5].parda)/2,((pos3[1].qanna+pos3[5].qanna)/2)-20,"5");
    outtextxy((pos3[5].parda+pos3[4].parda)/2,((pos3[5].qanna+pos3[4].qanna)/2)-20,"10");
    outtextxy((pos3[2].parda+pos3[4].parda)/2,((pos3[2].qanna+pos3[4].qanna)/2)-20,"11");
    outtextxy((pos3[1].parda+pos3[4].parda)/2,((pos3[1].qanna+pos3[4].qanna)/2)-20,"9");


    setcolor(WHITE);


    line(pos3[1].parda,pos3[1].qanna,pos3[2].parda,pos3[2].qanna);
    line(pos3[6].parda,pos3[6].qanna,pos3[2].parda,pos3[2].qanna);
    //line(pos3[1].parda,pos3[1].qanna,pos3[4].parda,pos3[4].qanna);
    line(pos3[1].parda,pos3[1].qanna,pos3[5].parda,pos3[5].qanna);
    line(pos3[4].parda,pos3[4].qanna,pos3[3].parda,pos3[3].qanna);
    line(pos3[4].parda,pos3[4].qanna,pos3[6].parda,pos3[6].qanna);
    //line(pos3[3].parda,pos3[3].qanna,pos3[6].parda,pos3[6].qanna);
    //line(pos3[2].parda,pos3[2].qanna,pos3[5].parda,pos3[5].qanna);
    line(pos3[5].parda,pos3[5].qanna,pos3[3].parda,pos3[3].qanna);
    line(pos3[4].parda,pos3[4].qanna,pos3[5].parda,pos3[5].qanna);
    line(pos3[4].parda,pos3[4].qanna,pos3[2].parda,pos3[2].qanna);
    line(pos3[4].parda,pos3[4].qanna,pos3[1].parda,pos3[1].qanna);




    cout<<"3. What is the weight of the minimum spanning tree?"<<"\n"<<" a. 17"<<"\n"<<" b. 22"<<"\n"<<" c. 27"<<"\n"<<" d. 32"<<"\n";

    cin>>q1;

    if(q1=='a'||q1=='A')
    {
        cout<<"congratulation!! the answer is right"<<"\n";
        ansp++;
    }

    else
    {
        cout<<"The answer is wrong"<<"\n";//<<"The right answer is 'a'"<<"\n";
    }


    scanf("%c",&ch);


    cout<<"4. Which of the following edges form the MST of the given graph, starting from vertex 5?"<<"\n"<<" a. (5-3)(3-4)(4-6)(6-2)(2-1)(1-5)"<<"\n"<<" b. (5-3)(3-4)(4-5)(5-1)(1-2)"<<"\n"<<" c. (5-3)(3-4)(4-6)(6-2)(2-1)"<<"\n"<<" d. (5-3)(3-4)(4-6)(6-2)(1-5)"<<"\n";

    cin>>q1;

    if(q1=='c'||q1=='C')
    {
        cout<<"congratulation!! the answer is right"<<"\n";
        ansp++;
    }

    else
    {
        cout<<"The answer is wrong"<<"\n";//<<"The right answer is 'c'"<<"\n";
    }


    scanf("%c",&ch);


    cout<<"5. Which of the following algorithm is not applicable for the given graph, source vertex is 5?"<<"\n"<<" a. BFS"<<"\n"<<" b. DFS"<<"\n"<<" c. Kruskal's MST algorithm"<<"\n"<<" d. Dijkstra's shortest path algorithm"<<"\n";

    cin>>q1;

    if(q1=='c'||q1=='C')
    {
        cout<<"congratulation!! the answer is right"<<"\n";
        ansp++;
    }

    else
    {
        cout<<"The answer is wrong"<<"\n";//<<"The right answer is 'c'"<<"\n";
    }




    getch();
    closegraph();

}
