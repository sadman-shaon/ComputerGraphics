#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
    int ch,i;
    cout<<"Enter your number:\n1 Flag\n2 Emoji\n3 House\n4 Village\n";
    cin>>ch;

    int gd = DETECT, gm;
    initgraph (&gd, &gm, " ");
    switch(ch)
    {
    case 1:
        setcolor(GREEN);

        rectangle(350,100,600,250);
        setfillstyle(1,GREEN);
        floodfill(410,119,GREEN);

        setcolor(RED);
        circle(470,175,40);
        setfillstyle(1,RED);
        floodfill(476,176,RED);

        setcolor(WHITE);
        rectangle(601,100,605,500);
        setfillstyle(1,WHITE);
        floodfill(603,253,WHITE);

        getch();
        closegraph();
        break;

    case 2:
        setcolor(WHITE);
        circle(300,250,80);
        circle(255,220,10);
        circle(340,220,10);
        setfillstyle(1,BLUE);
        floodfill(309,253,WHITE);
        line(295,240,285,260);
        line(295,240,305,260);
        line(285,260,305,260);


        ellipse(300, 260, 180, 0, 60, 50);
        getch();
        closegraph();

        break;

    case 3:
        /* Draw Hut */
        setcolor(WHITE);
        rectangle(150,180,250,400);
        rectangle(250,180,420,400);
        rectangle(180,300,220,400);

        line(200,100,150,180);
        line(200,100,250,180);
        line(200,100,370,100);
        line(370,100,420,180);

        /* Fill colours */
        setfillstyle(SOLID_FILL, BLUE);
        floodfill(152, 182, WHITE);
        floodfill(252, 182, WHITE);
        setfillstyle(1, BLUE);
        floodfill(182, 252, WHITE);
        setfillstyle(1, BROWN);
        floodfill(200, 105, WHITE);
        floodfill(210, 105, WHITE);
        getch();
        closegraph();

        break;

         case 4:
        //cloud
        setcolor(WHITE);
        ellipse(100, 110, 0, 360, 40, 20);
        setfillstyle(1, WHITE);
        floodfill(101, 113, WHITE);
        setcolor(WHITE);
        ellipse(30, 45, 0, 360, 40, 20);
        setfillstyle(1, WHITE);
        floodfill(31, 47, WHITE);
        setcolor(WHITE);
        ellipse(170, 60, 0, 360, 40, 20);
        setfillstyle(1, WHITE);
        floodfill(171, 63, WHITE);
        setcolor(WHITE);
        ellipse(270, 100, 0, 360, 40, 30);
        setfillstyle(1, WHITE);
        floodfill(271, 103, WHITE);
        setcolor(WHITE);
        ellipse(370, 20, 0, 360, 50, 30);
        setfillstyle(1, WHITE);
        floodfill(371, 21, WHITE);
        setcolor(WHITE);
        ellipse(570, 105, 0, 360, 50, 30);
        setfillstyle(1, WHITE);
        floodfill(571, 111, WHITE);
        //sun
        setcolor(WHITE);
        circle(600,70,30);
        setfillstyle(1, YELLOW);
        floodfill(611,71, WHITE);

        //house
        setcolor(WHITE);
        rectangle(250,180,600,350);
        setfillstyle(1,BLUE);
        floodfill(251,185, WHITE);
        //door
        rectangle(400,280,450,350);
        setfillstyle(1,BROWN);
        floodfill(441,301, WHITE);

        setcolor(WHITE);
        line(425,130,250,180);
        line(425,130,600,180);
        setfillstyle(1,BROWN);
        floodfill(430,137, WHITE);

        //road
        line(390,351,390,400);
        line(460,351,460,450);
        line(390,401,200,401);
        line(460,451,200,451);
        getch();
        closegraph();

        break;


    }
    return 0;
}
