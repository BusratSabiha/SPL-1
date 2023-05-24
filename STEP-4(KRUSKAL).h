#ifndef STEP-4(KRUSKAL)_H_INCLUDED
#define STEP-4(KRUSKAL)_H_INCLUDED
#endif // STEP-4(KRUSKAL)_H_INCLUDED

int ansk,countgk;
int game_part_kru(void)
{

    //qn1

    ansk=0;
    countgk=0;

    char q1;

    cout<<"1. Kruskal’s algorithm is used to ______"<<"\n"<<" a. find minimum spanning tree"<<"\n"<<" b.  find single source shortest path"<<"\n"<<" c. traverse the graph"<<"\n"<<" d. find all pair shortest path algorithm"<<"\n";

    cin>>q1;

    if(q1=='a'||q1=='A')
    {
        cout<<"congratulation!! the answer is right"<<"\n";
        ansk++;
    }

    else
    {
        cout<<"The answer is wrong"<<"\n";//<<"The right answer is 'a'"<<"\n";
    }


    scanf("%c",&ch);

    cout<<"2. What is the worst case time complexity of Kruskal's algorithm ?"<<"\n"<<" a.O(logV)"<<"\n"<<" b. O(E logV)"<<"\n"<<" c. O(E^2)"<<"\n"<<" d. O(V logE)"<<"\n";

    cin>>q1;

    if(q1=='b'||q1=='B')
    {
        cout<<"congratulation!! the answer is right"<<"\n";
        ansk++;
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
    while(countgk<6)
    {
        char str[20];
        countgk++;
        tostring(str,countgk);
        if(countgk==1)
        {
            x=200;
            y=100;
        }
        if(countgk==2)
        {
            x=400;
            y=100;
        }
        if(countgk==3)
        {
            x=200;
            y=300;
        }
        if(countgk==4)
        {
            x=400;
            y=300;
        }
        if(countgk==5)
        {
            x=100;
            y=200;
        }
        if(countgk==6)
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

        if(countgk==2)
        {
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(x,y,WHITE);
        }

        else
        {
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(x,y,WHITE);

        }


        pos3[countgk].parda=x;
        pos3[countgk].qanna=y;

    }

    setcolor(RED);
    outtextxy((pos3[1].parda+pos3[2].parda)/2,((pos3[1].qanna+pos3[2].qanna)/2)-20,"5");
    outtextxy((pos3[2].parda+pos3[6].parda)/2,((pos3[2].qanna+pos3[6].qanna)/2)-20,"2");
    outtextxy((pos3[4].parda+pos3[6].parda)/2+5,((pos3[4].qanna+pos3[6].qanna)/2)-10,"5");
    outtextxy((pos3[3].parda+pos3[4].parda)/2,((pos3[3].qanna+pos3[4].qanna)/2)+10,"10");
    outtextxy((pos3[3].parda+pos3[5].parda)/2-5,((pos3[3].qanna+pos3[5].qanna)/2)+10,"7");
    outtextxy((pos3[1].parda+pos3[5].parda)/2,((pos3[1].qanna+pos3[5].qanna)/2)-20,"4");
    outtextxy((pos3[1].parda+pos3[3].parda)/2,((pos3[1].qanna+pos3[3].qanna)/2)-20,"5");
    outtextxy((pos3[2].parda+pos3[4].parda)/2,((pos3[2].qanna+pos3[4].qanna)/2)-20,"3");
    outtextxy((pos3[2].parda+pos3[3].parda)/2,((pos3[2].qanna+pos3[3].qanna)/2)-20,"4");



    setcolor(WHITE);


    line(pos3[1].parda,pos3[1].qanna,pos3[2].parda,pos3[2].qanna);
    line(pos3[6].parda,pos3[6].qanna,pos3[2].parda,pos3[2].qanna);
    line(pos3[1].parda,pos3[1].qanna,pos3[3].parda,pos3[3].qanna);
    line(pos3[1].parda,pos3[1].qanna,pos3[5].parda,pos3[5].qanna);
    line(pos3[4].parda,pos3[4].qanna,pos3[3].parda,pos3[3].qanna);
    line(pos3[4].parda,pos3[4].qanna,pos3[6].parda,pos3[6].qanna);
    line(pos3[3].parda,pos3[3].qanna,pos3[2].parda,pos3[2].qanna);
    line(pos3[2].parda,pos3[2].qanna,pos3[4].parda,pos3[4].qanna);
    line(pos3[5].parda,pos3[5].qanna,pos3[3].parda,pos3[3].qanna);



    cout<<"3. Which of the following edge will be selected first?"<<"\n"<<" a. 3-4"<<"\n"<<" b. 2-4"<<"\n"<<" c. 2-6"<<"\n"<<" d. 5-3"<<"\n";

    cin>>q1;

    if(q1=='c'||q1=='C')
    {
        cout<<"congratulation!! the answer is right"<<"\n";
        ansk++;
    }

    else
    {
        cout<<"The answer is wrong"<<"\n";//<<"The right answer is 'c'"<<"\n";
    }


    scanf("%c",&ch);


    cout<<"4. What is the weight of the minimum spanning tree?"<<"\n"<<" a. 18"<<"\n"<<" b. 28"<<"\n"<<" c. 23"<<"\n"<<" d. 32"<<"\n";

    cin>>q1;

    if(q1=='a'||q1=='A')
    {
        cout<<"congratulation!! the answer is right"<<"\n";
        ansk++;
    }

    else
    {
        cout<<"The answer is wrong"<<"\n";//<<"The right answer is 'a'"<<"\n";
    }


    scanf("%c",&ch);


    cout<<"5. Which of the following edges form the MST of the given graph?"<<"\n"<<" a. (5-3)(3-4)(4-6)(6-2)(2-1)(1-3)"<<"\n"<<" b. (2-6)(2-4)(2-3)(1-5)(3-1)"<<"\n"<<" c. (5-3)(3-4)(4-6)(6-2)(2-1)"<<"\n"<<" d. (5-3)(3-4)(4-6)(6-2)(1-5)"<<"\n";

    cin>>q1;

    if(q1=='b'||q1=='B')
    {
        cout<<"congratulation!! the answer is right"<<"\n";
        ansk++;
    }

    else
    {
        cout<<"The answer is wrong"<<"\n";//<<"The right answer is 'b'"<<"\n";
    }


    scanf("%c",&ch);





    getch();
    closegraph();

    return ansk;

}
