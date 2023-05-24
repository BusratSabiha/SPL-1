#include<graphics.h>

#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include"Initial(BFS).h"
#include"STEP-2(BFS).h"
#include"STEP-3(BFS).h"
#include"STEP-4(BFS).h"
#include"STEP-2(DFS).h"
#include"STEP-3(DFS).h"
#include"STEP-4(DFS).h"
#include"STEP-2(topological).h"
#include"STEP-3(topological).h"
#include"STEP-4(topology).h"
#include"STEP-2(Scc).h"
#include"STEP-3(scc).h"
#include"STEP-4(scc).h"
#include"STEP-2(DIJKSTRA).h"
#include"STEP-3(DIJKSTRA).h"
#include"STEP-4(DIJKSTRA).h"
#include"STEP-2(KRUSKAL).h"
#include"STEP-3(KRUSKAL).h"
#include"STEP-4(KRUSKAL).h"
#include"STEP-2(PRIM).h"
#include"STEP-3(PRIM).h"
#include"STEP-4(PRIM).h"





char ramadan;
int choice;
//int progress=0;

int coding(int progress)

{

    //progress++;

    if(progress==1)
    {
        while(ans<5)
        {
            getchar();
            scanf("%c",&ramadan);
            printf("\n\n--------------BFS (Breadth First Search) Algorithm---------------\n\n");
            Sleep(3000);
            print_BFSalgorithm();
            getchar();
            scanf("%c",&ramadan);

            printf("\n\n--------------BFS (Breadth First Search) VISUALIZATION---------------\n\n");
            Sleep(3000);

            for_teaching_purpose_BFS();
            getchar();

            scanf("%c",&ramadan);

            printf("\n\n--------------BFS (Breadth First Search) VISUALIZATION & PRACTICE---------------\n\n");
            Sleep(3000);

            for_self_experiment_BFS();
            getchar();

            scanf("%c",&ramadan);
            printf("\n\n--------------GET READY TO ANSWER BFS (Breadth First Search) BASED PROBLEMS ---------------\n\n");

            Sleep(3000);
            game_part_BFS();

        }
        progress++;

        cout<<"1:Exit"<<"\n"<<"2:continue"<<"\n";

        cin>>choice;

        if(choice==1)return progress;


    }




    if(progress==2)
    {
        while(ans1<5)
        {
            getchar();
            scanf("%c",&ramadan);
            printf("\n\n--------------DFS (Depth First Search) Algorithm---------------\n\n");
            Sleep(3000);
            print_DFSalgorithm();

            getchar();
            scanf("%c",&ramadan);
            printf("\n\n--------------DFS (Depth First Search) VISUALIZATION---------------\n\n");
            Sleep(3000);
            for_teaching_purpose_DFS();

            getchar();
            scanf("%c",&ramadan);
            printf("\n\n--------------DFS (Depth First Search) VISUALIZATION & PRACTICE---------------\n\n");
            Sleep(3000);
            for_self_experiment_DFS();
            //printf("\n\n--------------GET READY TO ANSWER DFS (Depth First Search) BASED PROBLEM ---------------\n\n");
            getchar();
            scanf("%c",&ramadan);
            printf("\n\n--------------GET READY TO ANSWER DFS (Depth First Search) BASED PROBLEMS ---------------\n\n");
            Sleep(3000);

            game_part_DFS();

        }

        progress++;

        cout<<"1:Exit"<<"\n"<<"2:continue"<<"\n";

        cin>>choice;

        if(choice==1)return progress;


    }



    if(progress==3)
    {
        while(ans2<5)
        {
            getchar();
            scanf("%c",&ramadan);

            printf("\n\n--------------Topological Sorting Algorithm ---------------\n\n");
            Sleep(3000);

            print_topology();

            getchar();

            scanf("%c",&ramadan);
            printf("\n\n--------------Topological Sorting VISUALIZATION ---------------\n\n");
            Sleep(3000);

            for_teaching_purpose_topo();

            getchar();

            scanf("%c",&ramadan);

            printf("\n\n-------------Topological Sorting VISUALIZATION & PRACTICE---------------\n\n");
            Sleep(3000);

            for_self_experiment_topo();

            getchar();

            scanf("%c",&ramadan);

            printf("\n\n-------------GET READY TO ANSWER Topological Sorting BASED PROBLEMS---------------\n\n");
            Sleep(3000);


            int res=game_part_topology();
            if(res==5)break;
        }

        progress++;

        cout<<"1:Exit"<<"\n"<<"2:continue"<<"\n";

        cin>>choice;

        if(choice==1)return progress;

    }


    if(progress==4)
    {
        while(anss<5)
        {
            getchar();
            scanf("%c",&ramadan);

            printf("\n\n--------------Strongly Connected Components Algorithm ---------------\n\n");
            Sleep(3000);

            print_scc();

            getchar();
            scanf("%c",&ramadan);

            printf("\n\n--------------Strongly Connected Components Algorithm VISUALIZATION---------------\n\n");
            Sleep(3000);

            for_teaching_purpose_Scc();

            getchar();
            scanf("%c",&ramadan);

            printf("\n\n--------------Strongly Connected Components Algorithm VISUALIZATION & PRACTICE---------------\n\n");
            Sleep(3000);

            for_self_experiment_scc();

            getchar();
            scanf("%c",&ramadan);

            printf("\n\n--------------GET READY TO ANSWER Strongly Connected Components Algorithm BASED PROBLEMS ---------------\n\n");
            Sleep(3000);

            int res=game_part_scc();
            if(res==5)break;

        }

        progress++;

        cout<<"1:Exit"<<"\n"<<"2:continue"<<"\n";

        cin>>choice;

        if(choice==1)return progress;


    }

    if(progress==5)
    {
        while(ansd<5)
        {
            getchar();
            scanf("%c",&ramadan);

            printf("\n\n--------------DIJKSTRA'S Algorithm ---------------\n\n");
            Sleep(3000);
            print_Dijk();

            getchar();
            scanf("%c",&ramadan);

            printf("\n\n--------------DIJKSTRA'S Algorithm VISUALIZATION ---------------\n\n");
            Sleep(3000);

            for_teaching_purpose_dijkstra();
            getchar();
            scanf("%c",&ramadan);

            printf("\n\n--------------DIJKSTRA'S Algorithm VISUALIZATION & PRACTICE---------------\n\n");
            Sleep(3000);

            for_self_experiment_dijkstra();

            getchar();
            scanf("%c",&ramadan);

            printf("\n\n--------------GET READY TO ANSWER DIJKSTRA'S Algorithm BASED PROBLEMS---------------\n\n");
            Sleep(3000);

            int res=game_part_dijkstra();

            if(res==5)break;

        }

        progress++;

        cout<<"1:Exit"<<"\n"<<"2:continue"<<"\n";

        cin>>choice;

        if(choice==1)return progress;



    }

    if(progress==6)
    {
        while(ansk<5)
        {
            getchar();
            scanf("%c",&ramadan);

            printf("\n\n--------------KRUSKAL'S Algorithm ---------------\n\n");
            Sleep(3000);

            print_kruskal();

            //scanf("%c",&ramadan);
            getchar();
            scanf("%c",&ramadan);

            printf("\n\n--------------KRUSKAL'S Algorithm VISUALIZATION ---------------\n\n");
            Sleep(3000);

            for_teaching_purpose_kru();

            //scanf("%c",&ramadan);
            getchar();
            scanf("%c",&ramadan);

            printf("\n\n--------------DIJKSTRA'S Algorithm VISUALIZATION & PRACTICE ---------------\n\n");
            Sleep(3000);

            for_self_experiment_kru();

            //scanf("%c",&ramadan);

            getchar();
            scanf("%c",&ramadan);

            printf("\n\n--------------GET READY TO ANSWER DIJKSTRA'S Algorithm BASED PROBLEMS---------------\n\n");
            Sleep(3000);

            int res=game_part_kru();

            if(res==5)break;



        }

        progress++;

        cout<<"1:Exit"<<"\n"<<"2:continue"<<"\n";

        cin>>choice;

        if(choice==1)return progress;

    }


    if(progress==7)
    {
        while(ansp<5)
        {
            getchar();
            scanf("%c",&ramadan);

            printf("\n\n--------------PRIM'S Algorithm ---------------\n\n");
            Sleep(3000);

            print_prim();

            getchar();
            scanf("%c",&ramadan);

            printf("\n\n--------------PRIM'S Algorithm VISUALIZATION ---------------\n\n");
            Sleep(3000);

            //scanf("%c",&ramadan);
            for_teaching_purpose_prim();

            getchar();
            scanf("%c",&ramadan);

            printf("\n\n--------------PRIMS'S Algorithm VISUALIZATION & PRACTICE---------------\n\n");
            Sleep(3000);

            //scanf("%c",&ramadan);
            for_self_experiment_prim();
            getchar();
            scanf("%c",&ramadan);

            printf("\n\n--------------GET READY TO ANSWER PRIM'S Algorithm BASED PROBLEMS---------------\n\n");
            Sleep(3000);
            //scanf("%c",&ramadan);
            int res=game_part_prim();

            if(res==5)break;

        }

        return progress;


    }






}
