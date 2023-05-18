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
      print_BFSalgorithm();
      getchar();
      scanf("%c",&ramadan);

    for_teaching_purpose_BFS();

    scanf("%c",&ramadan);

    for_self_experiment_BFS();

    scanf("%c",&ramadan);

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
       print_DFSalgorithm();

       getchar();
       scanf("%c",&ramadan);

     for_teaching_purpose_DFS();

     scanf("%c",&ramadan);

     for_self_experiment_DFS();

     scanf("%c",&ramadan);

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

       print_topology();

     scanf("%c",&ramadan);

    for_teaching_purpose_topo();

    scanf("%c",&ramadan);

    for_self_experiment_topo();

    scanf("%c",&ramadan);

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
     print_scc();

    for_teaching_purpose_Scc();

    for_self_experiment_scc();

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
       print_Dijk();

    for_teaching_purpose_dijkstra();

    for_self_experiment_dijkstra();

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


    print_kruskal();

    scanf("%c",&ramadan);

    for_teaching_purpose_kru();

    scanf("%c",&ramadan);

    for_self_experiment_kru();

    scanf("%c",&ramadan);

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
        print_prim();
        scanf("%c",&ramadan);
        for_teaching_purpose_prim();
        scanf("%c",&ramadan);
        for_self_experiment_prim();
        scanf("%c",&ramadan);
        int res=game_part_prim();

        if(res==5)break;

    }

    return progress;


    }






}
