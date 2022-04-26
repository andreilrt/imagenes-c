#include <iostream>
#include <graphics.h>
#include <stdlib.h>

using namespace std;

main(){
	initwindow(850,450,"MostrarImg",200,150);
	readimagefile("Img/photo.jpg",100, 100, 120, 120); 
	getch();
}
