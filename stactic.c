#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <graphics.h>
#include<math.h>
int main(){
    initwindow(1580,920,"Pyramid With Static Camel");
    int page =0;
    for(int i=0;i<1000;i++){
    setactivepage(page);
    setvisualpage(1-page);
    cleardevice();
    rectangle(0,0,1580,920);
    //SUN
     circle(1200,150,50);
     setfillstyle(SOLID_FILL,YELLOW);
     floodfill(1200,150,WHITE);
     //BACKGROUND 
     line(-1,600,1600,600);
     setfillstyle(SOLID_FILL,BROWN);
     floodfill(1,900,WHITE);
     //SKY
     setfillstyle(SOLID_FILL,LIGHTBLUE);
     floodfill(1,1,WHITE);
    //PYRAMID
    rectangle(50,570,100,600);
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(60,580,WHITE);
    rectangle(100,570,150,600);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(110,580,WHITE);
    rectangle(150,570,200,600);
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(160,580,WHITE);
    rectangle(200,570,250,600);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(210,580,WHITE);
    rectangle(250,570,300,600);
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(260,580,WHITE);
    rectangle(75,540,125,570);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(80,550,WHITE);
    rectangle(125,540,175,570);
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(130,550,WHITE);
    rectangle(175,540,225,570);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(180,550,WHITE);
    rectangle(225,540,275,570);
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(230,550,WHITE);
    rectangle(100,510,150,540);
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(110,520,WHITE);
    rectangle(150,510,200,540);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(160,520,WHITE);
    rectangle(200,510,250,540);
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(210,520,WHITE);
    rectangle(125,480,175,510);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(130,490,WHITE);
    rectangle(175,480,225,510);
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(210,490,WHITE);
    rectangle(150,450,200,480);
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(160,460,WHITE);
    //CLOUDS
    circle(700+100,150,30);
    circle(670+100,150,25);
    circle(640+100,150,30);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(700+100,150,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(660+100,150,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(680+100,150,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(640+100,150,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(670+100,160,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(670+100,140,WHITE);
    circle(400+100,150,30);
    circle(370+100,150,25);
    circle(340+100,150,30);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(400+100,150,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(360+100,150,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(380+100,150,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(340+100,150,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(370+100,160,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(370+100,140,WHITE);
    circle(200+100,150,30);
    circle(170+100,150,25);
    circle(140+100,150,30);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(200+100,150,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(160+100,150,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(180+100,150,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(140+100,150,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(170+100,160,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(170+100,140,WHITE);
    //CAMEL
    setcolor(14);
    rectangle(400,510,490,555);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(468,540,14);
    line(490,546,523,522);
    line(523,522,480,522);
    line(490,522,490,555);
    circle(470,510,20);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(470,505,14);
    circle(460,500,20);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(460,481,14);
    rectangle(382,510,400,540);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(388,512,14);
    line(382,510,455,482);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(430,500,14);
    line(382,540,400,555);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(395,548,14);
    line(385,510,363,518);
    line(363,518,385,515);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(383,511,14);
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(380,513,14);
    circle(360,520,5);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(360,520,14);
    line(520,522,524,500);
    line(524,500,535,485);
    line(510,522,514,500);
    line(514,500,525,485);
    circle(532,472,15);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(532,472,14);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(521,510,14);
    line(535,485,555,484);
    line(532,459,560,473);
    circle(560,478,7);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(560,478,14);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(544,480,14);
    setcolor(YELLOW);
    line(538,465,535,447);
    line(530,465,535,447);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(535,450,14);
    setcolor(BLACK);
    circle(535,470,3);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(535,470,BLACK);
    setcolor(YELLOW);
    rectangle(385,540,395,592);
    rectangle(485,540,495,592);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(390,575,YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(490,575,YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(494,542,YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(494,538,YELLOW);
    setcolor(BLACK);
    rectangle(385,592,400,599);
    rectangle(485,592,500,599);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(390,595,BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(490,595,BLACK);
 //2nd CAMEL
    setcolor(14);
    rectangle(400+300,510,490+300,555);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(468+300,540,14);
    line(490+300,546,523+300,522);
    line(523+300,522,480+300,522);
    line(490+300,522,490+300,555);
    circle(470+300,510,20);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(470+300,505,14);
    circle(460+300,500,20);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(460+300,481,14);
    rectangle(382+300,510,400+300,540);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(388+300,512,14);
    line(382+300,510,455+300,482);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(430+300,500,14);
    line(382+300,540,400+300,555);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(395+300,548,14);
    line(385+300,510,363+300,518);
    line(363+300,518,385+300,515);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(383+300,511,14);
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(380+300,513,14);
    circle(360+300,520,5);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(360+300,520,14);
    line(520+300,522,524+300,500);
    line(524+300,500,535+300,485);
    line(510+300,522,514+300,500);
    line(514+300,500,525+300,485);
    circle(532+300,472,15);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(532+300,472,14);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(521+300,510,14);
    line(535+300,485,555+300,484);
    line(532+300,459,560+300,473);
    circle(560+300,478,7);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(560+300,478,14);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(544+300,480,14);
    setcolor(YELLOW);
    line(538+300,465,535+300,447);
    line(530+300,465,535+300,447);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(535+300,450,14);
    setcolor(BLACK);
    circle(535+300,470,3);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(535+300,470,BLACK);
    setcolor(YELLOW);
    rectangle(385+300,540,395+300,592);
    rectangle(485+300,540,495+300,592);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(390+300,575,YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(490+300,575,YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(494+300,542,YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(494+300,538,YELLOW);
    setcolor(BLACK);
    rectangle(385+300,592,400+300,599);
    rectangle(485+300,592,500+300,599);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(390+300,595,BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(490+300,595,BLACK);
    setcolor(WHITE);
     delay(20);
     page=1-page;
   }    
    getch();
    return 0;
}