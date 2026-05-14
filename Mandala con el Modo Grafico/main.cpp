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
   	  //cleardevice(); // Esto borra toda la pantalla antes de dibujar la nueva posición
      setcolor(BLACK);
      arc(getmaxx()/2,getmaxy()/2,angle,angle+2,40);
      setcolor(RED);
      getarccoords(&a);
      //circle(a.xstart,a.ystart,30);
      //rectangle(a.xstart - 30, a.ystart - 30, a.xstart + 30, a.ystart + 30);
      // radio_x = 20, radio_y = 10 (elipse acostada)
	  ellipse(a.xstart, a.ystart, 0, 360, 20, 10);
	  
	  line(getmaxx()/2, getmaxy()/2, a.xstart, a.ystart); // Se puede usar varias figuras a la vez EN un recorrido
      
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
