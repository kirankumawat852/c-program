#include <stdio.h>
#include <graphics.h>

int main()
{
    int gd=DETECT, gm;
    initgraph(&gd,&gm,(char*)"");
    cricle(300,300,75);

    getch();
    closegraph();

}

