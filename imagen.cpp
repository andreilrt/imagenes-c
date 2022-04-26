//-static -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32 -lwinmm
#include <iostream>
#include <graphics.h>
#include <stdlib.h>

using namespace std;

main(){
	initwindow(850,450,"MostrarImg",200,150);
	setviewport(0, 0, 800, 200, 1);
	setbkcolor(COLOR(255, 255, 255));
	clearviewport();
	setcolor(RGB(68, 128, 255)); 
	cleardevice(); 
	readimagefile("Img/photo.jpg",100, 100, 120, 120); 
	setcolor(BLUE);
	settextstyle(5, 0, 7);
	outtextxy(260, 80, "TE AMOOO");

	for(int x=240;x < 800;x++){
		line(240, 165, x, 165);
		Sleep(5);
	}
	getch();
}
