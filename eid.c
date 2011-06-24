/*this program is a screen saver by clicking the left click sheeps will
start moving and by clicking the right click the sheeps will stop moving 
by Abdullah Alhasan 
ID 204115005
assignment1 graphics */

#include <GL/glut.h>
#include <stdlib.h>

GLfloat diffuseMaterial[4] = { 0.5, 0.5, 0.5, 1.0 };

static GLfloat leg1 = 0.0 , leg2 = 0.0 , leg3 = 0.0 , leg4 = 0.0, 
			   move1 = -7.0, move2 = -7.0, move3 = -7.0, move4 = -7.0,
			   move5 = -7.0;

int key1 = 1, key2 = 2, key3 = 2, key4 = 1;

/*  Initialize material property, light source, lighting model,
 *  and depth buffer.
 */
void init(void) 
{

   GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
   GLfloat light_position[] = { 0.5, 0.5, 1.0, 0.0 };

   GLfloat light_positions[] = { -1.0, -1.0, -1.0, 0.0 };
   GLfloat light_diffuses[] = { 1.0, 1.0 , 1.0 };

   GLfloat light_positions1[] = { -1.0, 1.0, 1.0, 0.0 };
   GLfloat light_diffuses1[] = { 1.0, 1.0 , 0.0 };


   glClearColor (0.0, 0.0, 0.9, 1.0);
   glShadeModel (GL_SMOOTH);

   glEnable(GL_DEPTH_TEST);
   glMaterialfv(GL_FRONT, GL_DIFFUSE, diffuseMaterial);
   glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
   glMaterialf(GL_FRONT, GL_SHININESS, 10.0);
   glLightfv(GL_LIGHT0, GL_POSITION, light_position);

   glLightfv(GL_LIGHT1, GL_POSITION, light_positions);
   glLightfv(GL_LIGHT1, GL_DIFFUSE, light_diffuses );

   glLightfv(GL_LIGHT2, GL_POSITION, light_positions1);
   glLightfv(GL_LIGHT2, GL_DIFFUSE, light_diffuses1 );
   


	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
   glEnable(GL_LIGHT1);
   //glEnable(GL_LIGHT2);

   glColorMaterial(GL_FRONT, GL_DIFFUSE);
   glEnable(GL_COLOR_MATERIAL);
}

void display(void)
{
	//glClear (GL_COLOR_BUFFER_BIT);
   glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
   glMatrixMode(GL_MODELVIEW);
  

   glPushMatrix();
   gluLookAt(4,1,-2,0,-0.5,0,0,1,0);

   glPushMatrix();
   glTranslatef ( move1 , 0.0 , 0.0 );
   if ( move1 > 10 )
		move1 -= 15;

  

   glPushMatrix();            ///// sheep 1
   glColor3f(1.0,1.0,1.0 );
   glutSolidSphere(0.5, 50, 16);
   glTranslatef (0.4, -0.5, 0.2);
   glutSolidSphere(0.5, 20, 16);
   glTranslatef (-0.8, 0.0, 0.0);
   glutSolidSphere(0.5, 20, 16);
   glTranslatef (0.0, 0.0, -0.5);
   glutSolidSphere(0.5, 20, 16);
   glTranslatef (0.8, 0.0, 0.0);
   glutSolidSphere(0.5, 20, 16);
   glPopMatrix();

   glPushMatrix();//leg1
   glDisable(GL_LIGHTING);
   glColor3f(0.0,0.0,0.0);
   glTranslatef (0.45, -1.0, 0.2);
   glRotatef (leg1, 0.0, 0.0, 1.0);
   glScalef (0.2, 1.0, 0.2);// changing the shape of the cube to 2X 0.4Y 1Z
   glutSolidCube (1.0);
   glEnable(GL_LIGHTING);
   glPopMatrix();
   
   glPushMatrix();//leg2
   glDisable(GL_LIGHTING);
   glColor3f(0.0,0.0,0.0);
   glTranslatef (-0.45, -1.0, 0.2);
   glRotatef (leg2, 0.0, 0.0, 1.0);
   glScalef (0.2, 1.0, 0.2);// changing the shape of the cube to 2X 0.4Y 1Z
   glutSolidCube (1.0); 
   glEnable(GL_LIGHTING);
   glPopMatrix();

   glPushMatrix();//leg3
   glDisable(GL_LIGHTING);
   glColor3f(0.0,0.0,0.0);
   glTranslatef (0.45, -1.0, -0.3);
   glRotatef (leg3, 0.0, 0.0, 1.0);
   glScalef (0.2, 1.0, 0.2);// changing the shape of the cube to 2X 0.4Y 1Z
   glutSolidCube (1.0); 
   glEnable(GL_LIGHTING);
   glPopMatrix();

   glPushMatrix();//leg4
   glDisable(GL_LIGHTING);
   glColor3f(0.0,0.0,0.0);
   glTranslatef (-0.45, -1.0, -0.3);
   glRotatef (leg4, 0.0, 0.0, 1.0);
   glScalef (0.2, 1.0, 0.2);// changing the shape of the cube to 2X 0.4Y 1Z
   glutSolidCube (1.0); 
   glEnable(GL_LIGHTING);
   glPopMatrix();

   glPushMatrix();//head
  // glDisable(GL_LIGHTING);
   glColor3f(0.0,0.0,0.0);
   glTranslatef (0.9, -0.25 , 0.0 );
   glutSolidSphere( 0.25 , 20 , 16 );
   glTranslatef (0.2, -0.1 , 0.0 );
   glutSolidSphere( 0.2 , 20 , 16 );
  // glEnable(GL_LIGHTING);
   glPopMatrix();         ////////
   glPopMatrix();


   glPushMatrix();
   glTranslatef ( move2 , 0.0 , -1.0 );
   if ( move2 > 10 )
		move2 -= 15;


   glPushMatrix();            ///// sheep 2
   glColor3f(1.0,1.0,1.0 );
   glutSolidSphere(0.5, 50, 16);
   glTranslatef (0.4, -0.5, 0.2);
   glutSolidSphere(0.5, 20, 16);
   glTranslatef (-0.8, 0.0, 0.0);
   glutSolidSphere(0.5, 20, 16);
   glTranslatef (0.0, 0.0, -0.5);
   glutSolidSphere(0.5, 20, 16);
   glTranslatef (0.8, 0.0, 0.0);
   glutSolidSphere(0.5, 20, 16);
   glPopMatrix();

   glPushMatrix();//leg1
   glDisable(GL_LIGHTING);
   glColor3f(0.0,0.0,0.0);
   glTranslatef (0.45, -1.0, 0.2);
   glRotatef (leg1, 0.0, 0.0, 1.0);
   glScalef (0.2, 1.0, 0.2);// changing the shape of the cube to 2X 0.4Y 1Z
   glutSolidCube (1.0);
   glEnable(GL_LIGHTING);
   glPopMatrix();
   
   glPushMatrix();//leg2
   glDisable(GL_LIGHTING);
   glColor3f(0.0,0.0,0.0);
   glTranslatef (-0.45, -1.0, 0.2);
   glRotatef (leg2, 0.0, 0.0, 1.0);
   glScalef (0.2, 1.0, 0.2);// changing the shape of the cube to 2X 0.4Y 1Z
   glutSolidCube (1.0); 
   glEnable(GL_LIGHTING);
   glPopMatrix();

   glPushMatrix();//leg3
   glDisable(GL_LIGHTING);
   glColor3f(0.0,0.0,0.0);
   glTranslatef (0.45, -1.0, -0.3);
   glRotatef (leg3, 0.0, 0.0, 1.0);
   glScalef (0.2, 1.0, 0.2);// changing the shape of the cube to 2X 0.4Y 1Z
   glutSolidCube (1.0); 
   glEnable(GL_LIGHTING);
   glPopMatrix();

   glPushMatrix();//leg4
   glDisable(GL_LIGHTING);
   glColor3f(0.0,0.0,0.0);
   glTranslatef (-0.45, -1.0, -0.3);
   glRotatef (leg4, 0.0, 0.0, 1.0);
   glScalef (0.2, 1.0, 0.2);// changing the shape of the cube to 2X 0.4Y 1Z
   glutSolidCube (1.0); 
   glEnable(GL_LIGHTING);
   glPopMatrix();

   glPushMatrix();//head
  // glDisable(GL_LIGHTING);
   glColor3f(0.0,0.0,0.0);
   glTranslatef (0.9, -0.25 , 0.0 );
   glutSolidSphere( 0.25 , 20 , 16 );
   glTranslatef (0.2, -0.1 , 0.0 );
   glutSolidSphere( 0.2 , 20 , 16 );
  // glEnable(GL_LIGHTING);
   glPopMatrix();                       ////////
   glPopMatrix();

   glPushMatrix();
    glTranslatef ( move3 , 0.0 , 1.0 );
	if ( move3 > 8 )
		move3 -= 13;


   glPushMatrix();            ///// sheep 3
   glColor3f(1.0,1.0,1.0 );
   glutSolidSphere(0.5, 50, 16);
   glTranslatef (0.4, -0.5, 0.2);
   glutSolidSphere(0.5, 20, 16);
   glTranslatef (-0.8, 0.0, 0.0);
   glutSolidSphere(0.5, 20, 16);
   glTranslatef (0.0, 0.0, -0.5);
   glutSolidSphere(0.5, 20, 16);
   glTranslatef (0.8, 0.0, 0.0);
   glutSolidSphere(0.5, 20, 16);
   glPopMatrix();

   glPushMatrix();//leg1
   glDisable(GL_LIGHTING);
   glColor3f(0.0,0.0,0.0);
   glTranslatef (0.45, -1.0, 0.2);
   glRotatef (leg1, 0.0, 0.0, 1.0);
   glScalef (0.2, 1.0, 0.2);// changing the shape of the cube to 2X 0.4Y 1Z
   glutSolidCube (1.0);
   glEnable(GL_LIGHTING);
   glPopMatrix();
   
   glPushMatrix();//leg2
   glDisable(GL_LIGHTING);
   glColor3f(0.0,0.0,0.0);
   glTranslatef (-0.45, -1.0, 0.2);
   glRotatef (leg2, 0.0, 0.0, 1.0);
   glScalef (0.2, 1.0, 0.2);// changing the shape of the cube to 2X 0.4Y 1Z
   glutSolidCube (1.0); 
   glEnable(GL_LIGHTING);
   glPopMatrix();

   glPushMatrix();//leg3
   glDisable(GL_LIGHTING);
   glColor3f(0.0,0.0,0.0);
   glTranslatef (0.45, -1.0, -0.3);
   glRotatef (leg3, 0.0, 0.0, 1.0);
   glScalef (0.2, 1.0, 0.2);// changing the shape of the cube to 2X 0.4Y 1Z
   glutSolidCube (1.0); 
   glEnable(GL_LIGHTING);
   glPopMatrix();

   glPushMatrix();//leg4
   glDisable(GL_LIGHTING);
   glColor3f(0.0,0.0,0.0);
   glTranslatef (-0.45, -1.0, -0.3);
   glRotatef (leg4, 0.0, 0.0, 1.0);
   glScalef (0.2, 1.0, 0.2);// changing the shape of the cube to 2X 0.4Y 1Z
   glutSolidCube (1.0); 
   glEnable(GL_LIGHTING);
   glPopMatrix();

   glPushMatrix();//head
  // glDisable(GL_LIGHTING);
   glColor3f(0.0,0.0,0.0);
   glTranslatef (0.9, -0.25 , 0.0 );
   glutSolidSphere( 0.25 , 20 , 16 );
   glTranslatef (0.2, -0.1 , 0.0 );
   glutSolidSphere( 0.2 , 20 , 16 );
  // glEnable(GL_LIGHTING);
   glPopMatrix();                       ////////
   glPopMatrix();

   glPushMatrix();
    glTranslatef ( move4 , 0.0 , -2.0 );
	if ( move4 > 8 )
		move4 -= 13;


   glPushMatrix();            ///// sheep 4
   glColor3f(1.0,1.0,1.0 );
   glutSolidSphere(0.5, 50, 16);
   glTranslatef (0.4, -0.5, 0.2);
   glutSolidSphere(0.5, 20, 16);
   glTranslatef (-0.8, 0.0, 0.0);
   glutSolidSphere(0.5, 20, 16);
   glTranslatef (0.0, 0.0, -0.5);
   glutSolidSphere(0.5, 20, 16);
   glTranslatef (0.8, 0.0, 0.0);
   glutSolidSphere(0.5, 20, 16);
   glPopMatrix();

   glPushMatrix();//leg1
   glDisable(GL_LIGHTING);
   glColor3f(0.0,0.0,0.0);
   glTranslatef (0.45, -1.0, 0.2);
   glRotatef (leg1, 0.0, 0.0, 1.0);
   glScalef (0.2, 1.0, 0.2);// changing the shape of the cube to 2X 0.4Y 1Z
   glutSolidCube (1.0);
   glEnable(GL_LIGHTING);
   glPopMatrix();
   
   glPushMatrix();//leg2
   glDisable(GL_LIGHTING);
   glColor3f(0.0,0.0,0.0);
   glTranslatef (-0.45, -1.0, 0.2);
   glRotatef (leg2, 0.0, 0.0, 1.0);
   glScalef (0.2, 1.0, 0.2);// changing the shape of the cube to 2X 0.4Y 1Z
   glutSolidCube (1.0); 
   glEnable(GL_LIGHTING);
   glPopMatrix();

   glPushMatrix();//leg3
   glDisable(GL_LIGHTING);
   glColor3f(0.0,0.0,0.0);
   glTranslatef (0.45, -1.0, -0.3);
   glRotatef (leg3, 0.0, 0.0, 1.0);
   glScalef (0.2, 1.0, 0.2);// changing the shape of the cube to 2X 0.4Y 1Z
   glutSolidCube (1.0); 
   glEnable(GL_LIGHTING);
   glPopMatrix();

   glPushMatrix();//leg4
   glDisable(GL_LIGHTING);
   glColor3f(0.0,0.0,0.0);
   glTranslatef (-0.45, -1.0, -0.3);
   glRotatef (leg4, 0.0, 0.0, 1.0);
   glScalef (0.2, 1.0, 0.2);// changing the shape of the cube to 2X 0.4Y 1Z
   glutSolidCube (1.0); 
   glEnable(GL_LIGHTING);
   glPopMatrix();

   glPushMatrix();//head
  // glDisable(GL_LIGHTING);
   glColor3f(0.0,0.0,0.0);
   glTranslatef (0.9, -0.25 , 0.0 );
   glutSolidSphere( 0.25 , 20 , 16 );
   glTranslatef (0.2, -0.1 , 0.0 );
   glutSolidSphere( 0.2 , 20 , 16 );
  // glEnable(GL_LIGHTING);
   glPopMatrix();                       ////////
   glPopMatrix();

   glPushMatrix();
    glTranslatef ( move5 , 0.0 , 2.0 );
	if ( move5 > 8 )
		move5 -= 13;


   glPushMatrix();            ///// sheep 5
   glColor3f(1.0,1.0,1.0 );
   glutSolidSphere(0.5, 50, 16);
   glTranslatef (0.4, -0.5, 0.2);
   glutSolidSphere(0.5, 20, 16);
   glTranslatef (-0.8, 0.0, 0.0);
   glutSolidSphere(0.5, 20, 16);
   glTranslatef (0.0, 0.0, -0.5);
   glutSolidSphere(0.5, 20, 16);
   glTranslatef (0.8, 0.0, 0.0);
   glutSolidSphere(0.5, 20, 16);
   glPopMatrix();

   glPushMatrix();//leg1
   glDisable(GL_LIGHTING);
   glColor3f(0.0,0.0,0.0);
   glTranslatef (0.45, -1.0, 0.2);
   glRotatef (leg1, 0.0, 0.0, 1.0);
   glScalef (0.2, 1.0, 0.2);// changing the shape of the cube to 2X 0.4Y 1Z
   glutSolidCube (1.0);
   glEnable(GL_LIGHTING);
   glPopMatrix();
   
   glPushMatrix();//leg2
   glDisable(GL_LIGHTING);
   glColor3f(0.0,0.0,0.0);
   glTranslatef (-0.45, -1.0, 0.2);
   glRotatef (leg2, 0.0, 0.0, 1.0);
   glScalef (0.2, 1.0, 0.2);// changing the shape of the cube to 2X 0.4Y 1Z
   glutSolidCube (1.0); 
   glEnable(GL_LIGHTING);
   glPopMatrix();

   glPushMatrix();//leg3
   glDisable(GL_LIGHTING);
   glColor3f(0.0,0.0,0.0);
   glTranslatef (0.45, -1.0, -0.3);
   glRotatef (leg3, 0.0, 0.0, 1.0);
   glScalef (0.2, 1.0, 0.2);// changing the shape of the cube to 2X 0.4Y 1Z
   glutSolidCube (1.0); 
   glEnable(GL_LIGHTING);
   glPopMatrix();

   glPushMatrix();//leg4
   glDisable(GL_LIGHTING);
   glColor3f(0.0,0.0,0.0);
   glTranslatef (-0.45, -1.0, -0.3);
   glRotatef (leg4, 0.0, 0.0, 1.0);
   glScalef (0.2, 1.0, 0.2);// changing the shape of the cube to 2X 0.4Y 1Z
   glutSolidCube (1.0); 
   glEnable(GL_LIGHTING);
   glPopMatrix();

   glPushMatrix();//head
  // glDisable(GL_LIGHTING);
   glColor3f(0.0,0.0,0.0);
   glTranslatef (0.9, -0.25 , 0.0 );
   glutSolidSphere( 0.25 , 20 , 16 );
   glTranslatef (0.2, -0.1 , 0.0 );
   glutSolidSphere( 0.2 , 20 , 16 );
  // glEnable(GL_LIGHTING);
   glPopMatrix();                       ////////
   glPopMatrix();

   glPopMatrix();
   

   glutSwapBuffers();
   glFlush ();
}

void spinDisplay(void)
{
	if (key1 == 1 )
	{
		leg1 = leg1 + 0.2;
		if (leg1 > 43 )
			key1 = 2;
	}
	else if ( key1 == 2 )
	{
		leg1 = leg1 - 0.2;
		if ( leg1 < -43 )
			key1 = 1;
	}

	if (key2 == 1 )
	{
		leg2 = leg2 + 0.2;
		if (leg2 > 43 )
			key2 = 2;
	}
	else if ( key2 == 2 )
	{
		leg2 = leg2 - 0.2;
		if ( leg2 < -43 )
			key2 = 1;
	}

	if (key3 == 1 )
	{
		leg3 = leg3 + 0.2;
		if (leg3 > 43 )
			key3 = 2;
	}
	else if ( key3 == 2 )
	{
		leg3 = leg3 - 0.2;
		if ( leg3 < -43 )
			key3 = 1;
	}

	if (key4 == 1 )
	{
		leg4 = leg4 + 0.2;
		if (leg4 > 43 )
			key4 = 2;
	}
	else if ( key4 == 2 )
	{
		leg4 = leg4 - 0.2;
		if ( leg4 < -43 )
			key4 = 1;
	}

	move1 += 0.005;
	move2 += 0.003;
	move3 += 0.008;
	move4 += 0.002;
	move5 += 0.004;
	

   glutPostRedisplay();
}


void reshape (int w, int h)
{
   glViewport (0, 0, (GLsizei) w, (GLsizei) h);
   glMatrixMode (GL_PROJECTION);
   glLoadIdentity();
   if (w <= h)
      glOrtho (-1.5, 1.5, -1.5*(GLfloat)h/(GLfloat)w,
         1.5*(GLfloat)h/(GLfloat)w, -10.0, 10.0);
   else
      glOrtho (-1.5*(GLfloat)w/(GLfloat)h,
         1.5*(GLfloat)w/(GLfloat)h, -1.5, 1.5, -10.0, 10.0);
   glMatrixMode(GL_MODELVIEW);
   glLoadIdentity();
}

void mouse(int button, int state, int x, int y)
{
   switch (button) {
      case GLUT_LEFT_BUTTON:
         if (state == GLUT_DOWN) {
			  glutIdleFunc(spinDisplay);
         }
         break;
      case GLUT_RIGHT_BUTTON:
         if (state == GLUT_DOWN) {
           glutIdleFunc(NULL);

         }
         break;
      default:
         break;
   }
}

void keyboard(unsigned char key, int x, int y)
{
   switch (key) {
      case 27:
         exit(0);
         break;
   }
}

int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
   glutInitWindowSize (1390, 990); 
   glutInitWindowPosition (100, 100);
   glutCreateWindow (argv[0]);
   init ();
   glutDisplayFunc(display); 
   glutReshapeFunc(reshape);
   glutMouseFunc(mouse);
   glutKeyboardFunc(keyboard);
   glutMainLoop();
   return 0;
}
