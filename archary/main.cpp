#include<stdio.h>
#include<GL/glut.h>
#include<string.h>
#include<windows.h>
#include<mmsystem.h>
#include<RGBPixMap.h>
int maxy=600;
int count=0;
int maxx=500;
int n=3;
int m=3;
int ch=0;
int
count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0,count10=0;
int x=25, y=50;
int width=200,height=210;
char str [10];
void id1();
void id();
void draw_target();
void redraw();
void hpolygon(int xx1, int xx2, int yy1, int yy2)
{
	glBegin(GL_LINE_LOOP);
	{
		glVertex2f(xx1,yy1);
		glVertex2f(xx2,yy1);
		glVertex2f(xx2,yy2);
		glVertex2f(xx1,yy2);
	}
	glEnd();
	glFlush();
}
void *currentfont;
void setFont(void *font)
{
	currentfont=font;
}
void drawstring(float x,float y,float z,char *string)
{
	    char *c;
	glRasterPos3f(x,y,z);

	for(c=string;*c!='\0';c++)
	{	glColor3f(0.0,0.0,0.0);
		glutBitmapCharacter(currentfont,*c);
	}
}
void startscreen()
{

glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0,244,238);
drawstring(25,140,1,"WELCOME TO ARCHERY GAME");
glColor3f(800,244,0);
drawstring(50,100,1,"1.NEW GAME");
glColor3f(0,200,0);
drawstring(50,80,1,"2.INSTRUCTIONS");
glColor3f(500,0,328);
drawstring(50,60,1,"3.QUIT");
glFlush();
}
void instructions()
{
  glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,1.0,0.0);
    drawstring(180,320,1,"INSTRUCTIONS:");
	glBegin(GL_LINES);
	glVertex2f(45,138);
	glVertex2f(90,138);
	glEnd();
	glColor3f(0,1,0);
  drawstring(180,300,1,"* PRESS \"r\" TO SHOOT THE ARROWS RIGHT");
  glColor3f(0,1,0);
  drawstring(180,280,1,"* 15 ARROWS AND 10 BLOCKS PRESENT");
  glColor3f(0,1,0);
  drawstring(180,260,1,"* LOST IF ARROW COUNT EXCEEDS BLOCKS");
  glColor3f(0,1,0);
  drawstring(180,240,1,"* ALL THE BEST");
  glColor3f(0,1,0);
  drawstring(180,200,1,"* CLICK LEFT MOUSE BUTTON TO GO TO MAIN MENU");
   glFlush();
}
//RGBpixmap pix[6];
void title()
{
    /*glEnable(GL_ALPHA_TEST);
    glAlphaFunc(GL_EQUAL,1.0);
    glPixelZoom(1,1);
    glRasterPos2i(-20,-20);
    pix[0].draw();
    glutSwapBuffers();
    glFlush();*/
	glColor3f(1.0,1.0,1.0);
	hpolygon(10,790,10,590);
	hpolygon(20,780,20,580);
	glBegin(GL_POLYGON);
	{	glColor3f(0.6,0.0,0.0);
		glVertex2i(0.0,0.0);
		glColor3f(0.6,0.3,0.8);
		glVertex2i(780.0,0.0);
		glColor3f(0.6,0.3,0.2);
		glVertex2i(780.0,580.0);
		glColor3f(0.6,0.3,0.8);
		glVertex2i(0.0,580.0);
	}
	glEnd();
	glFlush();

	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0.99,0.4,0.0);
	drawstring(180.0,480.0,1.0,"BMS INSTITUTE OF TECHNOLOGY");
	glColor3f(0.99,0.3,0.0);
	drawstring(180.0,440.0,1.0,"COMPUTER SCIENCE & ENGINEERING");

	setFont(GLUT_BITMAP_HELVETICA_18);
	glColor3f(0.2,0.6,0.9);
	drawstring(180.0,400.0,1.0," COMPUTER GRAPHICS AND VISUALIZATION PROJECT");
	glColor3f(0.2,0.6,0.9);
	drawstring(180.0,370.0,1.0,"PROJECT : ARCHERY GAME");
	glColor3f(0.2,0.6,0.9);
	drawstring(180.0,345.0,1.0," VI SEMESTER");

	setFont(GLUT_BITMAP_HELVETICA_18);

	glColor3f(1.0,1.0,1.0);
	drawstring(180.0,300.0,1.0,"SUBMITTED   BY");

	glColor3f(0.0,1.0,1.0);
	drawstring(180.0,260.0,1.0,"P. VAMSHI");

	glColor3f(0.0,1.0,1.0);
	drawstring(180.0,240.0,1.0,"(1BY19CS097)");

	glColor3f(0.0,1.0,1.0);
	drawstring(180.0,210.0,1.0,"PAIDI  VENKATA  REVANTH  DATTA");

	glColor3f(0.0,1.0,1.0);
	drawstring(180.0,190.0,1.0,"(1BY19CS098)");

	glColor3f(0.0,0.0,0.0);
	drawstring(180.0,150.0,1.0,"UNDER THE GUIDANCE OF:");

	glColor3f(0.0,1.0,1.0);
	drawstring(180.0,130.0,1.0,"PROF. MUNESHWARA  M  S");

	//glColor3f(0.0,1.0,1.0);
	//drawstring(180.0,140.0,1.0,"ASSISTANT PROFESSOR,DEPT OF CSE");

	glColor3f(0.0,1.0,1.0);
	drawstring(180.0,110.0,1.0,"PROF. CHETHANA  C");

	//glColor3f(0.0,1.0,1.0);
	//drawstring(180.0,110.0,1.0,"ASSISTANT PROFESSOR,DEPT OF CSE");

	setFont(GLUT_BITMAP_HELVETICA_12);

	glColor3f(0.0,1.0,1.0);
	drawstring(230.0,180.0,1.0," ");

	glColor3f(0.0,1.0,1.0);
	drawstring(70.0,160.0,1.0,"  ");

	glColor3f(0.0,1.0,1.0);
	drawstring(70.0,140.0,1.0,"  ");

	setFont(GLUT_BITMAP_HELVETICA_18);

	glColor3f(0.0,1.0,1.0);
	drawstring(400.0,180.0,1.0,"           ");
	setFont(GLUT_BITMAP_HELVETICA_12);

	glColor3f(0.0,1.0,1.0);
	drawstring(610.0,180.0,1.0,"             ");

	glColor3f(0.0,1.0,1.0);
	drawstring(410.0,160.0,1.0,"          ");

	glColor3f(0.0,1.0,1.0);
	drawstring(410.0,140.0,1.0,"          ");

	setFont(GLUT_BITMAP_HELVETICA_18);
	glColor3f(0.0,1.0,1.0);
	drawstring(100.0,40.0,1.0,"                                                        PRESS MOUSE 'LEFT' BUTTON TO CONTINUE");

    glFlush();
    //glutSwapBuffers();
    //glutPostRedisplay();
}
/*to display bitmap char*/
void bitmap_output(int x, int y, char *string, void *font)
{
int len,i;
glRasterPos2f(x,y);
len=(int)strlen(string);
for(i=0;i<len;i++)
{
glutBitmapCharacter(font,string[i]);
}
return;
}
void counting()
{
 sprintf(str,"No of Arrows:%d",count);
 bitmap_output(40,40,str,GLUT_BITMAP_HELVETICA_18);
if(count1==1&&count2==1&&count3==1&&count4==1&&count5==1&&count6==1&&count7==
1&&count8==1&&count9==1&&count10==1)
{
 bitmap_output(5,300,"CONGRAGULATION U WON",GLUT_BITMAP_TIMES_ROMAN_24);
 glutIdleFunc(NULL);
}
else if(count>=15)
{
 sprintf(str,"No of Arrows:%d,NO ARROWS GAME OVER U LOST",count);
bitmap_output(5,300,str,GLUT_BITMAP_TIMES_ROMAN_24);
glutIdleFunc(NULL);
}
}
/*TO CHECK WHETHER ARROW HITS TARGET*/
void disa()
{
if((x+110==300)&&(y>=435&&y<=465)&&(!count1))
{
count1=1;
x=25;
y=0;
count++;
glutIdleFunc(id);
}
else if ((x+110==375)&&(y>=385&&y<=415)&&(!count2))
{
count2=1;
x=25;
y=0;
count++;
glutIdleFunc(id);
}
else if ((x+110==399) &&(y>=465&&y<=495) &&(!count3))
{
count3=1;
x=25;
y=0;
count++;
glutIdleFunc(id);
}
else if((x+110==249)&&(y>=355&&y<=385)&&(!count4))
{
count4=1;
x=25;
y=0;
count++;
glutIdleFunc(id);
}
else if((x+110==351)&&(y>=315&&y<=345)&&(!count5))
{
count5=1;
x=25;
y=0;
count++;
glutIdleFunc(id);
}
else if((x+110==450)&&(y>=275&&y<=305)&&(!count6))
{
count6=1;
x=25;
y=0;
count++;
glutIdleFunc(id);
}
else if((x+110==330)&&(y>=230&&y<=260)&&(!count7))
{
count7=1;
x=25;
y=0;
count++;
glutIdleFunc (id);
}
else if((x+110==201)&&(y>=185&&y<=215)&&(!count8))
{
count8=1;
x=25;
y=0;
count++;
glutIdleFunc(id);
}
else if((x+110==399)&&(y>=135&&y<=165)&&(!count9))
{
count9=1;
x=25;
y=0;
count++;
glutIdleFunc(id);
}
else if((x+110==300)&&(y>=85&&y<=115)&&(!count10))
{
count10=1;
x=25;
y=0;
count++;
glutIdleFunc(id);
}
}
/*to move arrow up*/
void id()
{
y+=n;
disa();
if(y>maxy)
 {
 y=0;
 count++;
 }
glutPostRedisplay();
}
/*to draw the arrow*/
void disp()
{
glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
glLoadIdentity();
//glColor3f(1,1,0);
//bitmap_output(150,450,"BLOCKSHOOTING",GLUT_BITMAP_TIMES_ROMAN_24);
counting();

// Drawing of arrow
glColor3f(0,1,1);
glBegin(GL_LINES);
glVertex2d(x,y);
glVertex2d(x+100,y);
glEnd();
glLineWidth(2);
glBegin(GL_LINES);
glVertex2d(x,y+2);
glVertex2d(x+100,y+2);
glEnd();
glBegin(GL_LINES);
glVertex2d(x,y-2);
glVertex2d(x+100,y-2);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2d(x+100,y+3);
glVertex2d(x+110,y);
glVertex2d(x+100,y-3);
glEnd();
glBegin(GL_QUADS);
glVertex2d(x,y+3);
glVertex2d(x,y-3);
glVertex2d(x-10,y-5);
glVertex2d(x-10,y+5);
glEnd();
draw_target(); // Drawing of target
glFlush();
glutSwapBuffers();
}
/*to clear screen & set projection mode*/
void init()
{
glClearColor(0.0,0.0,0.0,1.0);
//glColor3f(1,0,0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,500,0,500);
glMatrixMode(GL_MODELVIEW);
glutPostRedisplay();
setFont(GLUT_BITMAP_HELVETICA_18);
}
/*to draw the target inside line loop*/
void draw_target()
{
if(count1==0)
{
glColor3f(1,0,1);
glPointSize(30);
glBegin(GL_POINTS);
glVertex2d(300,450);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex2d(285,465);
glVertex2d(315,465);
glVertex2d(315,435);
glVertex2d(285,435);
glEnd();
}
else
{
 glColor3f(1,1,1);
 glPointSize(20);
 glBegin(GL_POINTS);
 glVertex2d(300,450);
 glEnd();
}
if(count2==0)
{
 glColor3f(1,0,1);
 glPointSize(30);
 glBegin(GL_POINTS);
 glVertex2d(375,400);
 glEnd();
glBegin(GL_LINE_LOOP);
glVertex2d(360,415);
glVertex2d(390,415);
glVertex2d(390,385);
glVertex2d(360,385);
glEnd();
}
else
{
 glColor3f(1,1,1);
 glPointSize(20);
 glBegin(GL_POINTS);
 glVertex2d(375,400);
 glEnd();
}
if(count3==0)
{
 glColor3f(1,0,1);
 glPointSize(30);
 glBegin(GL_POINTS);
 glVertex2d(400,480);
 glEnd();
glBegin(GL_LINE_LOOP);
glVertex2d(385,495);
glVertex2d(415,495);
glVertex2d(415,465);
glVertex2d(385,465);
glEnd();
}else
{
 glColor3f(1,1,1);
 glPointSize(20);
 glBegin(GL_POINTS);
 glVertex2d(400,480);
 glEnd();
}
if(count4==0)
{
 glColor3f(1,0,1);
 glPointSize(30);
 glBegin(GL_POINTS);
 glVertex2d(250,370);
 glEnd();
glBegin(GL_LINE_LOOP);
glVertex2d(235,385);
glVertex2d(265,385);
glVertex2d(265,355);
glVertex2d(235,355);
glEnd();
}else
{
 glColor3f(1,1,1);
 glPointSize(20);
 glBegin(GL_POINTS);
 glVertex2d(250,370);
 glEnd();
}
if(count5==0)
{
 glColor3f(1,0,1);
 glPointSize(30);
 glBegin(GL_POINTS);
 glVertex2d(350,330);

 glEnd();
glBegin(GL_LINE_LOOP);
glVertex2d(335,345);
glVertex2d(365,345);
glVertex2d(365,315);
glVertex2d(335,315);
glEnd();
}else
{
 glColor3f(1,1,1);
 glPointSize(20);
 glBegin(GL_POINTS);

glVertex2d(350,330);
 glEnd();
}
if(count6==0)
{
 glColor3f(1,0,1);
 glPointSize(30);

 glBegin(GL_POINTS);
 glVertex2d(450,290);
 glEnd();
glBegin(GL_LINE_LOOP);
glVertex2d(435,305);
glVertex2d(465,305);
glVertex2d(465,275);
glVertex2d(435,275);
glEnd();
}else
{
 glColor3f(1,1,1);
 glPointSize(20);
 glBegin(GL_POINTS);
 glVertex2d(450,290);
 glEnd();
}
if(count7==0)
{
 glColor3f(1,0,1);
 glPointSize(30);
 glBegin(GL_POINTS);
 glVertex2d(330,245);
 glEnd();
glBegin(GL_LINE_LOOP);
glVertex2d(315,260);
glVertex2d(345,260);
glVertex2d(345,230);
glVertex2d(315,230);
glEnd();
}
else
{
 glColor3f(1,1,1);
 glPointSize(20);
 glBegin(GL_POINTS);
 glVertex2d(330,245);

glEnd();
}
if(count8==0)
{
 glColor3f(1,0,1);
 glPointSize(30);
 glBegin(GL_POINTS);
 glVertex2d(200,200);
 glEnd();
glBegin(GL_LINE_LOOP);
glVertex2d(185,215);
glVertex2d(215,215);
glVertex2d(215,185);
glVertex2d(185,185);
glEnd();
}
else {
 glColor3f(1,1,1);
 glPointSize(20);
 glBegin(GL_POINTS);
 glVertex2d(200,200);
 glEnd();
}
if(count9==0)
{
 glColor3f(1,0,1);
 glPointSize(30);
 glBegin(GL_POINTS);
 glVertex2d(400,150);
 glEnd();
glBegin(GL_LINE_LOOP);
glVertex2d(385,165);
glVertex2d(415,165);
glVertex2d(415,135);
glVertex2d(385,135);
glEnd();
}
else
{
 glColor3f(1,1,1);
 glPointSize(20);
 glBegin(GL_POINTS);
 glVertex2d(400,150);
 glEnd();
}
if(count10==0)
{
 glColor3f(1,0,1);
 glPointSize(30);

 glBegin(GL_POINTS);
 glVertex2d(300,100);
 glEnd();
glBegin(GL_LINE_LOOP);
glVertex2d(285,115);
glVertex2d(315,115);
glVertex2d(315,85);
glVertex2d(285,85);
glEnd();
}
else
{
 glColor3f(1,1,1);
 glPointSize(20);
 glBegin(GL_POINTS);
 glVertex2d(300,100);
 glEnd();
}
glFlush();
}
/* to move the arrow left wen 'r' pressed*/
void id1()
{
x+=m;
disa();
if(x+110>maxx)
{
x=25;
y=0;
count++;
glutIdleFunc(id);
}
glutPostRedisplay();
}
/*set key to perform desired operation*/
void keys(unsigned char k,int x,int y)
{
if(k=='r')
glutIdleFunc(id1);
if(k=='3')
exit(0);
if(k=='1'){
    ch=1;

}
if(k=='2')
ch=2;
glutPostRedisplay();

}
/*sub menu to display instructions*/
void demo_menu(int i)
{
switch(i)
{
case 5:
case 6:
case 7:
case 8:break;
}
}
/*sub menu to display designer names*/
void demo(int i)
{
switch(i)
{
case 9:
case 10:
case 11:break;
}
}
void game(int id)
{
 switch(id)
 {
 }
}
void mouse(int btn,int state,int x,int y)
{
    if(ch==1&&btn==GLUT_LEFT_BUTTON&&state==GLUT_DOWN){
        ch=1;
    }
    else if(btn==GLUT_LEFT_BUTTON&&state==GLUT_DOWN)
    {
        ch=10;
        //glutPostRedisplay();
        //disp();
    }
}
void maind()
{
    switch(ch)
    {
    case 0:
        glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
        glClear(GL_COLOR_BUFFER_BIT);
        //disp();
        title();
        break;
    case 1:
        //title();
        disp();
        break;
    case 2:
        instructions();
        break;
    case 10:
        startscreen();
        break;
    }
}
/*main to call display,keyboard and idle func*/
int main(int argc,char **argv)
{
int sub_menu;
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(900,900);
glutCreateWindow("ARCHERY GAME BLOCK SHOOTING");
glutDisplayFunc(maind);
sub_menu=glutCreateMenu(demo_menu);
glutAddMenuEntry("r to move right",5);
glutAddMenuEntry("15 arrows and 10 blocks present",6);
glutAddMenuEntry("lost if arrow count exceeds blocks",7);
glutAddMenuEntry("otherwise win",8);
glutCreateMenu(game);
glutAddSubMenu("INSTRUCTION",sub_menu);
glutAttachMenu(GLUT_RIGHT_BUTTON);
//pix[0].readBMPFile("bmsit.bmp");
glutDisplayFunc(maind);
//glutIdleFunc(id);
glutMouseFunc(mouse);
glutKeyboardFunc(keys);
init();
//glEnable(GL_DEPTH_TEST);
glutMainLoop();
return 0;
}
