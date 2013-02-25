#include<glut.h>
void init (void){
  glColor3f(1.0,0.0,1.0);
	glPointSize(8.0);
	glMatrixMode(GL_PROJECTION);		
	gluOrtho2D(5.0,8.0,-5.0,8.0);//keyboardAssign
	glOrtho(1,1,-1,1,-1,1);//ModelView
	glMatrixMode(GL_MODELVIEW);
	glClearColor(11.0,1.0,1.0,0.0);
	glColor3f(110.0,0.0,1.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(5.0,5.0,-5.0,5.0);//keyboardAssign
	glLoadIdentity();
	gluOrtho2D(10.0,830.0,0.0,1080.0);
		

}
void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);//KeyboardAssign
	glPushMatrix();					//KeyboardAssign
	glEnd();							//KeyboardAssign
	glBegin(GL_POLYGON);
	glColor3f(0.40,0.65,0.12);
	glVertex2i(49,59);
	glVertex2i(780,60);                    // dai phw
	glVertex2i(780,1020);
	glVertex2i(48,1020);
	glEnd();
///////////////////
	glBegin(GL_POLYGON);		// pam pua chaw
	glColor3f(1.5,1.3,1.7);
	glVertex2i(600,350);
	glVertex2i(400,650);
	glVertex2i(550,680);
	glVertex2i(750,400);                   
	glEnd();

	glBegin(GL_POLYGON);			// thog rau ncoo
	glColor3f(11.3,0.6,0.8);
	glVertex2i(460,580);
	glVertex2i(405,660);
	glVertex2i(540,680);
	glVertex2i(560,670); 
	glVertex2i(585,610);                   
	glEnd();
	/////////////
	glBegin(GL_POLYGON);         // las txaj sab xi
	glColor3f(10.60,0.30,0.60);
	glVertex2i(600,350);
	glVertex2i(600,300);
	glVertex2i(400,600);
	glVertex2i(400,650);
	glEnd();
	////////////////////
	glBegin(GL_POLYGON);         // ceg txaj sab xi lauj
	glColor3f(10.98,0.04,0.70);
	glVertex2i(600,300);
	glVertex2i(585,340);
	glVertex2i(585,260);
	glVertex2i(600,240);			
	glEnd();
	////////////////////
	glBegin(GL_POLYGON);         // ceg txaj sab xi me
	glColor3f(0.98,0.04,0.70);
	glVertex2i(600,300);
	glVertex2i(612,305);
	glVertex2i(612,240);
	glVertex2i(600,240);
	glEnd();
	////////////////////
	glBegin(GL_LINES);         // kab ceg txaj xab xi lauj
	glColor3f(0.0,0.0,0.0);
	glVertex2i(600,300);
	glVertex2i(600,240);
	glEnd();
	/////////////////
	glBegin(GL_LINES);         // kab ceg txaj xab xi hanv
	//glColor3f(0.0,0.0,0.0);
	glVertex2i(612,240);
	glVertex2i(600,240);
	glEnd();
	///////////////////
	
	glBegin(GL_LINES);         // kab ceg txaj xab xi lauj 
	//glColor3f(0.0,0.0,0.0);
	glVertex2i(612,240);
	glVertex2i(612,305);

	glEnd();
	/////////////

	glBegin(GL_LINES);         // kab ceg txaj xab xi sov
	//glColor3f(10.0,0.0,0.0);
	glVertex2i(600,300);
	glVertex2i(612,302);
	glEnd();

	//////////////////


	glBegin(GL_POLYGON);         // ceg txaj xab laug me
	glColor3f(0.98,0.04,0.70);
	glColor3f(0.60,0.30,0.60);
	glVertex2i(750,350);
	glVertex2i(750,280);
	glVertex2i(740,280);
	glVertex2i(740,348);
	glEnd();

	/////////////////

	glBegin(GL_POLYGON);         // ceg txaj xab laug lauj
	glColor3f(0.98,0.04,0.70);
	glVertex2i(740,348);
	glVertex2i(725,340);
	glVertex2i(725,300);
	glVertex2i(740,280);
	glEnd();

	/////////////////
    
	glBegin(GL_LINES);         // kab ceg txaj sab laug
	glColor3f(0.0,0.0,0.0);
	glVertex2i(750,350);
	glVertex2i(750,280);
	glEnd();

	/////////////////

	glBegin(GL_LINES);         // kab ceg txaj sab laug xi
	glColor3f(0.0,0.0,0.0);
	glVertex2i(740,280);
	glVertex2i(740,348);
	glEnd();

	////////////////

	glBegin(GL_LINES);         // kab ceg txaj sab laug sau
	glColor3f(0.0,0.0,0.0);
	glVertex2i(750,348);
	glVertex2i(740,345);
	glEnd();

	/////////////////
	glBegin(GL_LINES);         // kab ceg txaj sab lauj hauv
	glColor3f(0.0,0.0,0.0);
	glVertex2i(750,280);
	glVertex2i(740,280);
	glEnd();

	/////////////////

	glBegin(GL_POLYGON);         // ceg txaj sab xi taub hau lauj
	glColor3f(0.98,0.04,0.70);
	glVertex2i(400,600);
	glVertex2i(414,580);
	glVertex2i(414,520);
	glVertex2i(400,540);
	glEnd();

	////////////////////
	glBegin(GL_POLYGON);         // ceg txaj sab xi taub hau me
	glColor3f(0.98,0.04,0.70);
	glVertex2i(414,580);
	glVertex2i(425,560);
	glVertex2i(425,520);
	glVertex2i(414,520);
	glEnd();
	/////////////////

	glBegin(GL_LINES);         //  kab ceg txaj sab xi taub hau lauj
	glColor3f(0.0,0.0,0.0);
	glVertex2i(414,580);
	glVertex2i(414,520);

	glEnd();
	
	/////////////////

	glBegin(GL_LINES);         //  kab ceg txaj sab si sauv tau hau lauj
	glColor3f(0.0,0.0,0.0);
	glVertex2i(414,580);
	glVertex2i(425,560);

	glEnd();
	/////////////////

	glBegin(GL_LINES);         // kab ceg txaj sab laug tau hauj
	glColor3f(0.0,0.0,0.0);
	glVertex2i(425,560);
	glVertex2i(425,520);

	glEnd();
	/////////////////

	glBegin(GL_LINES);         // kab ceg txaj sab xi hauv tau hau lauj
	glColor3f(0.0,0.0,0.0);
	glVertex2i(425,520);
	glVertex2i(414,520);

	glEnd();
	/////////////////

	glBegin(GL_POLYGON);         // pam pua sab xi
	glColor3f(1.0,1.0,1.0);
	glVertex2i(600,350);
	glVertex2i(600,330);
	glVertex2i(400,630);
	glVertex2i(400,650);

	glEnd();
	////////////////////
	glBegin(GL_LINES);           // kab pam pua sab xi
	glColor3f(0.0,0.0,0.0);
	glVertex2i(600,350);
	glVertex2i(400,650);
	glEnd();
	////////////////
	glBegin(GL_POLYGON);         // daim ntoo tau hau txaj
	glColor3f(10.60,0.30,0.60);
	glVertex2i(400,650);
	glVertex2i(400,680);
	glVertex2i(550,710);
	glVertex2i(550,680);
	glEnd();
	////////////////
	glBegin(GL_POLYGON);         // las txaj kuaj taw
	glColor3f(0.98,0.04,10.70);
	glVertex2i(600,350);
	glVertex2i(600,300);
	glVertex2i(750,350);
	glVertex2i(750,400);
	glEnd();
	//////////////////////
    glBegin(GL_POLYGON);         // pam pua kua taw
	glColor3f(1.0,1.0,1.0);
	glVertex2i(600,350);
	glVertex2i(600,330);
	glVertex2i(750,380);
	glVertex2i(750,400);
	glEnd();
	/////////////////////
	  glBegin(GL_LINES);         // kab pam pua kua taw
	glColor3f(0.0,0.0,0.0);
	glVertex2i(600,350);
	glVertex2i(750,400);
	glEnd();

	//////////

	  glBegin(GL_LINES);         // kab pam pua rau hauv
	glColor3f(0.0,0.0,0.0);
	glVertex2i(600,350);
	glVertex2i(600,330);
	glEnd();
	/////////////////////
glBegin(GL_POLYGON);         // phab ntsa sab laug
	glColor3f(0.98,1.625,0.50);
	glVertex2i(550,710);
	glVertex2i(550,1020);
	glVertex2i(780,1020);
	glVertex2i(780,400);
	glEnd();
	///////////////////////////////
	glBegin(GL_POLYGON);         //ntoo qhov rai
	glColor3f(0.50,0.30,0.30);
	glVertex2i(650,710);
	glVertex2i(650,1020);
	glVertex2i(780,940);
	glVertex2i(780,550);
	glEnd();
	//////////////////////////////////
	glBegin(GL_POLYGON);         // iav qhov rai sab xi
	glColor3f(0.0,0.30,0.30);
	glVertex2i(660,720);
	glVertex2i(660,1000);
	glVertex2i(705,970);
	glVertex2i(705,663);
	glEnd();
	//////////////////////////////////
	glBegin(GL_POLYGON);         //iav qhov rai sab laug
	glColor3f(0.0,0.30,0.30);
	glVertex2i(715,650);
	glVertex2i(715,965);
	glVertex2i(770,930);
	glVertex2i(770,580);
	glEnd();
	//////////////////////////////////
	glBegin(GL_POLYGON);         // pab ntsa tau hauj
	glColor3f(0.98,1.625,0.50);
	glVertex2i(550,710);
	glVertex2i(550,1020);
	glVertex2i(50,1020);
	glVertex2i(50,600);
	glEnd();
	///////////////////////////////

	glBegin(GL_LINES);         // kab pab ntsab tau hau
	glColor3f(0.0,0.0,0.0);
	glVertex2i(550,710);
	glVertex2i(50,600);
	glEnd();
	///////////////////////////////////////
	glBegin(GL_POLYGON);         // ceg rooj xab xi
	glColor3f(0.68,0.5,0.40);
	glVertex2i(140,530);
	glVertex2i(100,610);
	glVertex2i(100,780);
	glVertex2i(140,700);
	glEnd();
		glBegin(GL_LINE_LOOP);         // kab ceg rooj xab xi
	glColor3f(0.0,0.0,0.0);
	glVertex2i(140,530);
	glVertex2i(100,610);
	glVertex2i(100,780);
	glVertex2i(140,700);
	glEnd();
	///////////////////////////////

	glBegin(GL_POLYGON);         // ceg rauj sab laug
	glColor3f(0.68,0.5,0.40);
	glVertex2i(340,740);
	glVertex2i(340,570);
	glVertex2i(300,650);
	glVertex2i(300,732);
	glEnd();
		glBegin(GL_LINE_LOOP);         // kab ceg rauj sab laug
	glColor3f(0.0,0.0,0.0);
	glVertex2i(340,740);
	glVertex2i(340,570);
	glVertex2i(300,650);
	glVertex2i(300,732);
	glEnd();
	///////////////////////////////
	glBegin(GL_POLYGON);         // dai txiag rooj 
	glColor3f(0.68,3.5,0.40);
	glVertex2i(340,740);
	glVertex2i(300,810);
	glVertex2i(98,780);
	glVertex2i(138,700);
	glEnd();
		///////////////////////////////
	glBegin(GL_LINE_LOOP);         // kab txiag rooj sab tau hau sab xi sab laug
	glColor3f(0.0,0.0,0.0);
	glVertex2i(340,740);
	glVertex2i(300,810);
	glVertex2i(98,780);
	glVertex2i(138,700);
	glEnd();

	////////////////////////////////
		glBegin(GL_POLYGON);         // txiag rooj sab xub ntiag
	glColor3f(0.68,0.5,0.40);
	glVertex2i(340,740);
	glVertex2i(340,720);
	glVertex2i(138,680);
	glVertex2i(138,700);
	glEnd();
	glBegin(GL_LINE_LOOP);         //kab txiag rooj sab sub ntiag
	glColor3f(0.0,0.0,0.0);
	glVertex2i(340,740);
	glVertex2i(340,720);
	glVertex2i(138,680);
	glVertex2i(138,700);
	glEnd();
			////////////////////////
		glBegin(GL_POLYGON);         // zaj nrug key computer
	glColor3f(0.68,0.0,0.0);
	glVertex2i(215,750);
	glVertex2i(190,790);
	glVertex2i(140,780);
	glVertex2i(163,740);
	glEnd();
	glBegin(GL_POLYGON);         //  key computer 
	glColor3f(0.0,0.0,0.0);
	glVertex2i(204,758);
	glVertex2i(183,790);
	glVertex2i(147,780);
	glVertex2i(165,750);
	glEnd();
	glBegin(GL_LINE_LOOP);         // kab computer
	glColor3f(0.0,0.0,0.0);
	glVertex2i(215,750);
	glVertex2i(190,790);
	glVertex2i(140,780);
	glVertex2i(163,740);
	glEnd();
	glBegin(GL_POLYGON);         // zaj ntug mab cos computer
	glColor3f(0.68,0.0,0.0);
	glVertex2i(190,790);
	glVertex2i(140,780);
	glVertex2i(140,840);
	glVertex2i(190,850);
	glEnd();
		glBegin(GL_POLYGON);         // cos computer 
	glColor3f(0.0,0.0,0.0);
	glVertex2i(187,795);
	glVertex2i(143,785);
	glVertex2i(143,835);
	glVertex2i(187,845);
	glEnd();
	glBegin(GL_LINE_LOOP);         // kab cos computer
	glColor3f(10.0,0.0,0.0);
	glVertex2i(190,790);
	glVertex2i(140,780);
	glVertex2i(140,840);
	glVertex2i(190,850);
	glEnd();
    glBegin(GL_POLYGON);         // ntawv
	glColor3f(0.68,0.7,0.0);
	glVertex2i(315,750);
	glVertex2i(290,790);
	glVertex2i(240,780);
	glVertex2i(263,740);
	glEnd();
    /////////////////////////////////
	glBegin(GL_LINES);         // kab pab ntsab ceg kom
	glColor3f(10.0,0.0,0.0);
	glVertex2i(550,710);
	glVertex2i(550,1020);
	glEnd();
	///////////////////////////////

	glBegin(GL_LINES);         // kab pam ntsa sab laug
	glColor3f(10.0,0.0,0.0);
	glVertex2i(550,710);
	glVertex2i(780,400);
	glEnd();
	glPopMatrix();			//KeyboardAssign
	glutSwapBuffers();		//KeyboardAssign
	
glFlush();
}
void Keyboard(unsigned char key,int x,int y)
	{
		switch (key)
		{
		case 'x':
			glutReshapeWindow(400,300);
			glutPostRedisplay();
			break;
				case 'y':
			glutReshapeWindow(1200,700);
			glutPostRedisplay();
			break;
		}
	}
void main(int argc,char** argv)
{
		glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowPosition(50,20);
	glutInitWindowSize(1000,680);
	glutCreateWindow("BEDROOM");
	init();
	glutDisplayFunc(myDisplay);
	glutKeyboardFunc(Keyboard);
	glutMainLoop();
}

