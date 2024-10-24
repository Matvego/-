#include "TXLib.h"

void drawsky(COLORREF color)
{
    txSetColor (color);
    txSetFillColor (color);
    txRectangle (0, 0, 800, 600);

}

void drawsun(int x,int y, COLORREF color)
{

    txSetColor (TX_BLACK);
    txSetFillColor (RGB (255,242,0));
    txCircle (x, y, 75);

}

void drawgrass(int x)
{

    txSetColor (TX_BLACK);
    txSetFillColor (TX_GREEN);
    txRectangle (0, 490, 800, 560);


}





void drawcharacter(int x,int y, int legs)
{

    txSetColor (RGB (0, 0, 0), 6);

    txLine (x-10, y+legs-10,    x-10, y+60+legs-10);
    txLine (x-10, y+60+legs-10, x-40, y+60+legs-10);  //левая нога

    txLine (x+20, y+10-legs+10, x+20, y+70-legs+10);
    txLine (x+20, y+70-legs+10, x,    y+70-legs+10);    //правая нога

    txSetColor (TX_BLACK, 6);
    txSetFillColor (RGB (255,242,0))
    ;
    txRectangle (x+640-640, y+350-440, x+660-640, y+370-440);//шея

    txSetColor (TX_BLACK, 6);
    txSetFillColor (RGB (255, 242, 0));

    POINT star[10] = {{x+650-640, y+250-440}, {x+660-640, y+300-440}, {x+710-640, y+300-440}, {x+670-640, y+330-440}, {x+680-640, y+380-440},  {x+650-640, y+350-440}, {x+610-640, y+380-440}, {x+620-640, y+330-440}, {x+590-640, y+300-440}, {x+630-640, y+300-440}};

    txPolygon (star, 10);//голова
    txSetColor (TX_BLACK, 6);
    txSetFillColor (RGB (237,28,36));

    txEllipse (x+620-640, y+370-440, x+680-640, y+450-440);//туловище
    txLine (x+620-640, y+400-440, x+590-640, y+450-440);
    txLine (x+680-640, y+400-440, x+700-640, y+450-440);//руки

    txLine (x+640-640, y+310-440, x+640-640, y+320-440);
    txLine (x+650-640, y+310-440, x+650-640, y+320-440);//глаза
    txLine (x+630-640, y+340-440, x+640-640, y+350-440);
    txLine (x+660-640, y+340-440, x+640-640, y+350-440);

}






void drawCloud(int x)
{
    txSetColor (RGB (0, 0, 0),2);
    txSetFillColor (RGB (255, 255, 255));
    txEllipse(x+500-500,70,x+600-500,130);
    txEllipse(x+610-500,70,x+710-500,130);
    txEllipse(x+550-500,35,x+650-500,100);


}

void drawCharacterTwo (int x,int y)
{
    txSetColor (RGB (0, 0, 0),5);
    txSetFillColor (RGB (255, 255, 255));
    txEllipse(x+330-330,y+410-430,x+450-330,y+500-430);
    txLine (370, 480, 390, 470);
    txLine (400, 480, 390, 470);
    txLine (x+360-330, y+440-430, x+360-330, y+460-430);
    txLine (x+410-330, y+440-430, x+410-330, y+460-430);

}

void drawCloud2(int x)
{
    txSetColor (RGB (0, 0, 0),6);
    txSetFillColor (RGB (255, 255, 255));
    txEllipse(x+500-500,70,x+600-500,130);
    txEllipse(x+610-500,70,x+710-500,130);
    txEllipse(x+550-500,35,x+650-500,100);


    txSetColor (RGB (0, 0, 0),6);
    txLine (x+540-500,80,x+540-500,100);
    txLine (x+560-500,80,x+560-500,100);
    txLine (x+540-500,120,x+550-500,130);
    txLine (x+560-500,120,x+550-500,130);
    txLine (x+530-500,90,x+570-500,90);


    txLine (x+590-500,50,x+590-500,60);
    txLine (x+610-500,50,x+610-500,60);
    txLine (x+590-500,70,x+600-500,80);
    txLine (x+610-500,70,x+660-500,80);
    txSetColor (TX_BLACK, 6);
    txSetFillColor (RGB (215,25,33));
    POINT bant[6] = {{x+570-500, 20}, {x+600-500, 30}, {x+620-500, 20}, {x+620-500, 40}, {x+600-500, 40}, {x+580-500, 40} };
    txPolygon (bant, 6);


    txLine (x+650-500,80,x+650-500,100);
    txLine (x+670-500,80,x+670-500,100);
    txLine (x+650-500,110,x+660-500,120);
    txLine (x+670-500,110,x+660-500,120);
    txSetColor (TX_BLACK, 6);
    txSetFillColor (RGB (255,174,201));
    POINT bant2[6] = {{x+640-500, 50}, {x+660-500, 50}, {x+680-500, 50}, {x+680-500, 70}, {x+660-500, 60}, {x+640-550, 70} };
    txPolygon (bant2, 6);


}



int main()
    {
    txCreateWindow (800, 600);
    int xSky = 100;
    int yGrass = 100;
    int xCharacter = 700;
    int xSun = 50;
    int ySun = 140;
    int xCloud = 140;
    int yCharacter = 440;
    int yCharacterLegs = 10;
    int xCharacterTwo = 330;
    int yCharacterTwo = 430;
    int xCloud2 = 140;


    while (xSun<700)
    {
        txBegin();

        drawsky(RGB (52, 248, 208));
        drawsun(xSun,ySun,RGB (255,242,0));
        drawgrass(100);
        drawcharacter(xCharacter,yCharacter,yCharacterLegs);
        drawCloud(xCloud);

        xSun = xSun + 5;
        ySun = ySun + 5;

        txEnd();
        txSleep(50);
    }


    while (xCloud<1000)
    {
        txBegin();

        drawsky(RGB (0, 0, 128));
        drawsun(xSun,ySun,RGB (255,242,0));
        drawgrass(100);
        drawcharacter(xCharacter,yCharacter, yCharacterLegs);
        drawCloud(xCloud);

        xCloud = xCloud + 5;
        xCharacter = xCharacter - 5;
        yCharacterLegs = yCharacterLegs + 10;

        txEnd();
        txSleep(50);

        txBegin();

        drawsky(RGB (0, 0, 128));
        drawsun(xSun,ySun,RGB (255,242,0));
        drawgrass(100);
        drawcharacter(xCharacter,yCharacter, yCharacterLegs);
        drawCloud(xCloud);


        xCloud = xCloud + 5;
        xCharacter = xCharacter - 5;
        yCharacterLegs = yCharacterLegs - 10;

        txEnd();
        txSleep(50);
    }

    xCharacter = 400;
    yCharacterLegs = 10;
    while (yCharacter>-100)
    {
        txBegin();

        drawsky(RGB (0, 0, 128));
        drawcharacter(xCharacter,yCharacter,yCharacterLegs);

        yCharacter = yCharacter - 5;



        txEnd();
        txSleep(50);
    }

    xCharacter = 400;
    yCharacter = 550;

    while(yCharacter > 460)
    {
        txBegin();
        drawsky(RGB (0, 0, 128));
        drawgrass(100);
        drawcharacter(700,yCharacter,yCharacterLegs);
        drawCharacterTwo (xCharacterTwo,yCharacterTwo);
        yCharacter = yCharacter - 5;

        txEnd();
        txSleep(50);
    }
    xSun = 900;
    ySun = 140;
    COLORREF color = RGB(0, 0, 128);
    while(xSun < 1100 )
    {
        txBegin();
        drawsky(RGB (0, 0, 128));
        drawsun (xSun,ySun,RGB(0, 0, 128));
        drawgrass(100);
        drawcharacter(700,yCharacter,yCharacterLegs);
        drawCharacterTwo (xCharacterTwo,yCharacterTwo);
        txSetColor (RGB (0, 0, 0));
        txSelectFont ("Comic Sans MS", 30);
        txTextOut (540, 260, "Ты потерялся?");

        xSun = xSun + 10;

        txEnd();
        txSleep(50);
    }

    xSun = 900;
    ySun = 140;
    while(xSun < 1100 )
    {
        txBegin();
        drawsky(RGB (0, 0, 128));
        drawsun (xSun,ySun,RGB(0, 0, 128));
        drawgrass(100);
        drawcharacter(700,yCharacter,yCharacterLegs);
        drawCharacterTwo (xCharacterTwo,yCharacterTwo);
        txSetColor (RGB (0, 0, 0));
        txSelectFont ("Comic Sans MS", 30);
        txTextOut (470, 390, "Да");

        xSun = xSun + 10;

        txEnd();
        txSleep(50);
    }

    xSun = 1000;
    ySun = 140;
    while(xSun < 1250 )
    {
        txBegin();
        drawsky(RGB (0, 0, 128));
        drawsun (xSun,ySun,RGB(0, 0, 128));
        drawgrass(100);
        drawcharacter(700,yCharacter,yCharacterLegs);
        drawCharacterTwo (xCharacterTwo,yCharacterTwo);
        drawCloud2 (xCloud2);
        //txSetColor (RGB (0, 0, 0));
        //txSelectFont ("Comic Sans MS", 30);
        //txTextOut (470, 390, "Да");

        xSun = xSun + 10;
        xCloud2 = xCloud2 - 5;

        txEnd();
        txSleep(50);
    }






    txTextCursor (false);
    return 0;
}
