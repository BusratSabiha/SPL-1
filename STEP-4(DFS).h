#ifndef STEP-4(DFS)_H_INCLUDED
#define STEP-4(DFS)_H_INCLUDED
#endif // STEP-4(DFS)_H_INCLUDED

int ans1,countg1;
void game_part_DFS()
{

    //qn1
    countg1=0,ans1=0;

    char q1;

    cout<<"1. The Data structure used in standard implementation of Depth First Search is?"<<"\n"<<" a. Stack"<<"\n"<<" b. Queue"<<"\n"<<" c. Linked List"<<"\n"<<" d. Tree"<<"\n";

    cin>>q1;

    if(q1=='a'||q1=='A')
    {
        cout<<"congratulation!! the answer is right"<<"\n";
        ans1++;
    }

    else
    {
        cout<<"The answer is wrong"<<"\n";//<<"The right answer is 'a'"<<"\n";
    }


    scanf("%c",&ch);

    cout<<"2. The time complexity of DFS algorithm is?"<<"\n"<<" a.O(E logV)"<<"\n"<<" b. O(V^2)"<<"\n"<<" c. O(V + E)"<<"\n"<<" d. O(V logE)"<<"\n";

    cin>>q1;

    if(q1=='c'||q1=='C')
    {
        cout<<"congratulation!! the answer is right"<<"\n";
        ans1++;
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
    while(countg1<6)
    {
        char str[20];
        countg1++;
        tostring(str,countg1);

        if(countg1==1)
        {
            x=200;
            y=100;
        }
        if(countg1==2)
        {
            x=400;
            y=100;
        }
        if(countg1==3)
        {
            x=200;
            y=300;
        }
        if(countg1==4)
        {
            x=400;
            y=300;
        }
        if(countg1==5)
        {
            x=100;
            y=200;
        }
        if(countg1==6)
        {
            x=500;
            y=200;
        }

        outtextxy(x,y-30,str);
        //setcolor(WHITE);
        circle(x,y,rad);

        if(countg1==5)
        {
            setfillstyle(SOLID_FILL,GREEN);
            floodfill(x,y,WHITE);
        }

        else
        {
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(x,y,WHITE);

        }


        pos3[countg1].parda=x;
        pos3[countg1].qanna=y;

    }

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



    cout<<"3. Which sequence can be obtained while using DFS traversal for the given graph?"<<"\n"<<" a. 5-1-3-4-2-6"<<"\n"<<" b. 5-3-4-1-6-2"<<"\n"<<" c. 5-3-4-1-2-6"<<"\n"<<" d. 5-3-1-6-4-2"<<"\n";

    cin>>q1;

    if(q1=='c'||q1=='C')
    {
        cout<<"congratulation!! the answer is right"<<"\n";
        ans1++;
    }

    else
    {
        cout<<"The answer is wrong"<<"\n";//<<"The right answer is 'c'"<<"\n";
    }


    scanf("%c",&ch);


    cout<<"4. Instead of 5, if the source node is 4 the which of the following sequence can't be obtained while using DFS traversal for the given graph??"<<"\n"<<" a. 4-3-5-1-2-6"<<"\n"<<" b. 4-1-2-3-5-6"<<"\n"<<" c. Both a & b"<<"\n"<<" d. None"<<"\n";

    cin>>q1;

    if(q1=='b'||q1=='B')
    {
        cout<<"congratulation!! the answer is right"<<"\n";
        ans1++;
    }

    else
    {
        cout<<"The answer is wrong"<<"\n";//<<"The right answer is 'b'"<<"\n";
    }


    scanf("%c",&ch);


    cout<<"5. If the edges (4-5),(1-4),(2-4) are removed from the given graph,then which of the following sequence can be obtained while using DFS traversal??source vertex is 5?"<<"\n"<<" a. 5-1-3-2-4-6"<<"\n"<<" b. 5-3-1-4-2-6"<<"\n"<<" c. 5-3-1-2-4-6"<<"\n"<<" d. None"<<"\n";

    cin>>q1;

    if(q1=='d'||q1=='D')
    {
        cout<<"congratulation!! the answer is right"<<"\n";
        ans1++;
    }

    else
    {
        cout<<"The answer is wrong"<<"\n";//<<"The right answer is 'd'"<<"\n";
    }


    getch();
    closegraph();

}
