#include<graphics.h>
#include<conio.h>
#include<dos.h>

main()
{
   int gd = DETECT, gm, x, y, color, angle = 0;
   struct arccoordstype a, b;
   initgraph(&gd, &gm, "");
   delay(2000);                                                                
   while(angle<=360)
   {
      setcolor(BLACK);
      arc(getmaxx()/2,getmaxy()/2,angle,angle+2,40);
      setcolor(RED);
      getarccoords(&a);
      circle(a.xstart,a.ystart,30);
      
      setcolor(BLACK);
      arc(getmaxx()/2,getmaxy()/2,angle,angle+2,100);
      getarccoords(&a);
      setcolor(WHITE);
      circle(a.xstart,a.ystart,25);
      
      setcolor(BLACK);
      arc(getmaxx()/2,getmaxy()/2,angle,angle,160);
      setcolor(RED);
      getarccoords(&a);
      circle(a.xstart,a.ystart,35);
      
      setcolor(BLACK);
      arc(getmaxx()/2,getmaxy()/2,angle,angle,210);
      setcolor(CYAN);
      getarccoords(&a);
      circle(a.xstart,a.ystart,10);
      
      setcolor(BLACK);
      arc(getmaxx()/2,getmaxy()/2,angle,angle+2,210);
      setcolor(MAGENTA);
      getarccoords(&a);
      circle(a.xstart,a.ystart,5);
      
      angle = angle+5;
      delay(50);
   }
   getch();
   closegraph();
}
