//Semestre 2020-1
//************************************************************//
//************************************************************//
//************** Alumno (s): *********************************//
//*************											******//
//*************											******//
//************************************************************//
#include "texture.h"

float pos_camX = 0, pos_camY = -4, pos_camZ = -4;
int eye_camX = 0, eye_camY = 0.0, eye_camZ = 0;
//Variables de Animaciones///
float balonBasquet[2] = {0.0,0.0}, balonFut[2] = { 0.0,0.0 },dado1[2] = { 0.0,0.0 };
bool play = false, play2 = false,play3 = false, play4 = false, banderas[10] = { false };

float text_der = 1.0;
float text_izq = 0.0;

//GLfloat Diffuse[]= { 1.0f, 1.0f, 1.0f, 1.0f };				// Diffuse Light Values
GLfloat Diffuse[] = { 0.5f, 0.5f, 0.5f, 1.0f };				// Diffuse Light Values
GLfloat Specular[] = { 1.0, 1.0, 1.0, 1.0 };				// Specular Light Values
GLfloat Position[] = { 0.0f, 3.0f, 0.0f, 1.0f };			// Light Position
GLfloat Position2[] = { 0.0f, -5.0f, 0.0f, 1.0f };			// Light Position

CTexture t_stone;
CTexture t_marmol;
CTexture t_puerta;
CTexture t_metal;
CTexture t_azul1;
CTexture t_techo;
CTexture t_vacia;
CTexture t_blanco;
CTexture t_cortina;
CTexture t_blanco2;
CTexture t_blanco3;
CTexture t_skyeye;
CTexture t_vidrio3;
CTexture t_vidrio2;
CTexture t_vidrio;
CTexture t_colchon;
CTexture t_bozzcama1;
CTexture t_bozzcama2;
CTexture t_whitewood;
CTexture t_planeta;
CTexture t_nave;
CTexture t_roperoverde;
CTexture t_bozzropero;
CTexture t_logotoy;
CTexture t_verde;
CTexture t_verde1;
CTexture t_verde2;
CTexture t_bozzburo1;
CTexture t_rojo;
CTexture t_estrella;
CTexture t_cuadro;
CTexture t_cuadro1;
CTexture t_cuadro2;
CTexture t_cuadro3;
CTexture t_negro;
CTexture t_fomi;
CTexture t_futbol;
CTexture t_basket;
CTexture t_golf;

CTexture t_dado1;
CTexture t_dado2;
CTexture t_dado3;
CTexture t_dado4;
CTexture t_dado5;
CTexture t_dado6;

CTexture t_dado11;
CTexture t_dado22;
CTexture t_dado33;
CTexture t_dado44;
CTexture t_dado55;
CTexture t_dado66;


bool mov = true;

int font = (int)GLUT_BITMAP_TIMES_ROMAN_24;

void InitGL(GLvoid)     // Inicializamos parametros
{
	glClearColor(1.0f, 0.5f, 0.0f, 0.0f);				// Azul de fondo	

	glEnable(GL_TEXTURE_2D);
	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);

	

	t_stone.LoadTGA("stone.tga");
	t_stone.BuildGLTexture();
	t_stone.ReleaseImage();

	t_marmol.LoadTGA("marmol.tga");
	t_marmol.BuildGLTexture();
	t_marmol.ReleaseImage();

	t_puerta.LoadTGA("puerta.tga");
	t_puerta.BuildGLTexture();
	t_puerta.ReleaseImage();

	t_metal.LoadTGA("metal.tga");
	t_metal.BuildGLTexture();
	t_metal.ReleaseImage();

	t_azul1.LoadTGA("azul1.tga");
	t_azul1.BuildGLTexture();
	t_azul1.ReleaseImage();

	t_techo.LoadTGA("techo.tga");
	t_techo.BuildGLTexture();
	t_techo.ReleaseImage();

	t_vidrio3.LoadTGA("vidrio3.tga");
	t_vidrio3.BuildGLTexture();
	t_vidrio3.ReleaseImage();

	t_vacia.LoadTGA("vacia.tga");
	t_vacia.BuildGLTexture();
	t_vacia.ReleaseImage();

	t_blanco.LoadTGA("blanco.tga");
	t_blanco.BuildGLTexture();
	t_blanco.ReleaseImage();

	t_cortina.LoadTGA("cortina.tga");
	t_cortina.BuildGLTexture();
	t_cortina.ReleaseImage();

	t_blanco2.LoadTGA("blanco2.tga");
	t_blanco2.BuildGLTexture();
	t_blanco2.ReleaseImage();

	t_blanco3.LoadTGA("blanco3.tga");
	t_blanco3.BuildGLTexture();
	t_blanco3.ReleaseImage();

	t_skyeye.LoadTGA("skyeye.tga");
	t_skyeye.BuildGLTexture();
	t_skyeye.ReleaseImage();

	t_vidrio2.LoadTGA("vidrio2.tga");
	t_vidrio2.BuildGLTexture();
	t_vidrio2.ReleaseImage();

	t_vidrio.LoadTGA("vidrio.tga");
	t_vidrio.BuildGLTexture();
	t_vidrio.ReleaseImage();

	t_colchon.LoadTGA("colchon.tga");
	t_colchon.BuildGLTexture();
	t_colchon.ReleaseImage();

	t_bozzcama1.LoadTGA("bozzcama1.tga");
	t_bozzcama1.BuildGLTexture();
	t_bozzcama1.ReleaseImage();

	t_bozzcama2.LoadTGA("bozzcama2.tga");
	t_bozzcama2.BuildGLTexture();
	t_bozzcama2.ReleaseImage();

	t_whitewood.LoadTGA("whitewood.tga");
	t_whitewood.BuildGLTexture();
	t_whitewood.ReleaseImage();

	t_planeta.LoadTGA("planeta.tga");
	t_planeta.BuildGLTexture();
	t_planeta.ReleaseImage();

	t_nave.LoadTGA("nave.tga");
	t_nave.BuildGLTexture();
	t_nave.ReleaseImage();

	t_roperoverde.LoadTGA("roperoverde.tga");
	t_roperoverde.BuildGLTexture();
	t_roperoverde.ReleaseImage();

	t_bozzropero.LoadTGA("bozzropero.tga");
	t_bozzropero.BuildGLTexture();
	t_bozzropero.ReleaseImage();

	t_logotoy.LoadTGA("logotoy.tga");
	t_logotoy.BuildGLTexture();
	t_logotoy.ReleaseImage();

	t_verde.LoadTGA("verde.tga");
	t_verde.BuildGLTexture();
	t_verde.ReleaseImage();

	t_verde1.LoadTGA("verde1.tga");
	t_verde1.BuildGLTexture();
	t_verde1.ReleaseImage();

	t_verde2.LoadTGA("verde2.tga");
	t_verde2.BuildGLTexture();
	t_verde2.ReleaseImage();

	t_bozzburo1.LoadTGA("bozzburo1.tga");
	t_bozzburo1.BuildGLTexture();
	t_bozzburo1.ReleaseImage();

	t_rojo.LoadTGA("rojo.tga");
	t_rojo.BuildGLTexture();
	t_rojo.ReleaseImage();

	t_estrella.LoadTGA("estrella.tga");
	t_estrella.BuildGLTexture();
	t_estrella.ReleaseImage();

	t_cuadro.LoadTGA("cuadro.tga");
	t_cuadro.BuildGLTexture();
	t_cuadro.ReleaseImage();

	t_cuadro1.LoadTGA("cuadro1.tga");
	t_cuadro1.BuildGLTexture();
	t_cuadro1.ReleaseImage();

	t_cuadro2.LoadTGA("cuadro2.tga");
	t_cuadro2.BuildGLTexture();
	t_cuadro2.ReleaseImage();

	t_cuadro3.LoadTGA("iwantu.tga");
	t_cuadro3.BuildGLTexture();
	t_cuadro3.ReleaseImage();

	t_negro.LoadTGA("negro.tga");
	t_negro.BuildGLTexture();
	t_negro.ReleaseImage();

	t_fomi.LoadTGA("fomi.tga");
	t_fomi.BuildGLTexture();
	t_fomi.ReleaseImage();

	t_futbol.LoadTGA("fut1.tga");
	t_futbol.BuildGLTexture();
	t_futbol.ReleaseImage();

	t_basket.LoadTGA("basket1.tga");
	t_basket.BuildGLTexture();
	t_basket.ReleaseImage();

	t_golf.LoadTGA("golf1.tga");
	t_golf.BuildGLTexture();
	t_golf.ReleaseImage();

	t_dado1.LoadTGA("dado1.tga");
	t_dado1.BuildGLTexture();
	t_dado1.ReleaseImage();

	t_dado2.LoadTGA("dado2.tga");
	t_dado2.BuildGLTexture();
	t_dado2.ReleaseImage();

	t_dado3.LoadTGA("dado3.tga");
	t_dado3.BuildGLTexture();
	t_dado3.ReleaseImage();

	t_dado4.LoadTGA("dado4.tga");
	t_dado4.BuildGLTexture();
	t_dado4.ReleaseImage();

	t_dado5.LoadTGA("dado5.tga");
	t_dado5.BuildGLTexture();
	t_dado5.ReleaseImage();

	t_dado6.LoadTGA("dado6.tga");
	t_dado6.BuildGLTexture();
	t_dado6.ReleaseImage();

	t_dado11.LoadTGA("dado11.tga");
	t_dado11.BuildGLTexture();
	t_dado11.ReleaseImage();

	t_dado22.LoadTGA("dado22.tga");
	t_dado22.BuildGLTexture();
	t_dado22.ReleaseImage();

	t_dado33.LoadTGA("dado33.tga");
	t_dado33.BuildGLTexture();
	t_dado33.ReleaseImage();

	t_dado44.LoadTGA("dado44.tga");
	t_dado44.BuildGLTexture();
	t_dado44.ReleaseImage();

	t_dado55.LoadTGA("dado55.tga");
	t_dado55.BuildGLTexture();
	t_dado55.ReleaseImage();

	t_dado66.LoadTGA("dado66.tga");
	t_dado66.BuildGLTexture();
	t_dado66.ReleaseImage();

	
	
}

void renderBitmapCharacter(float x, float y, float z, void *font, char *string)
{

	char *c;     //Almacena los caracteres a escribir
	glRasterPos3f(x, y, z);	//Posicion apartir del centro de la ventana
							//glWindowPos2i(150,100);
	for (c = string; *c != '\0'; c++) //Condicion de fin de cadena
	{
		glutBitmapCharacter(font, *c); //imprime
	}
}

void esfera(GLfloat radio, int meridianos, int paralelos, GLuint text)
{
	GLdouble theta, phi;

	float ctext_s = 1.0 / meridianos;
	float ctext_t = 1.0 / paralelos;

	glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.

	float v1[] = { 0.0, 0.0, 0.0 };
	float v2[] = { 0.0, 0.0, 0.0 };
	float v3[] = { 0.0, 0.0, 0.0 };
	float v4[] = { 0.0, 0.0, 0.0 };
	int i, j;
	float angulom, angulop;
	angulom = 2 * 3.141592654 / meridianos;
	angulop = 3.141592654 / paralelos;
	for (i = 0; i<meridianos; i++)
	{
		for (j = 0; j<paralelos; j++)
		{
			v1[0] = radio * cos(angulom*i)*sin(angulop*j);
			v1[1] = radio * cos(angulop*j);
			v1[2] = radio * sin(angulom*i)*sin(angulop*j);

			v2[0] = radio * cos(angulom*i)*sin(angulop*(j + 1));
			v2[1] = radio * cos(angulop*(j + 1));
			v2[2] = radio * sin(angulom*i)*sin(angulop*(j + 1));

			v3[0] = radio * cos(angulom*(i + 1))*sin(angulop*(j + 1));
			v3[1] = radio * cos(angulop*(j + 1));
			v3[2] = radio * sin(angulom*(i + 1))*sin(angulop*(j + 1));

			v4[0] = radio * cos(angulom*(i + 1))*sin(angulop*j);
			v4[1] = radio * cos(angulop*j);
			v4[2] = radio * sin(angulom*(i + 1))*sin(angulop*j);

			glBegin(GL_POLYGON);
			glNormal3fv(v1);
			glTexCoord2f(ctext_s*i, -ctext_t * j);
			glVertex3fv(v1);
			glNormal3fv(v2);
			glTexCoord2f(ctext_s*i, -ctext_t * (j + 1));
			glVertex3fv(v2);
			glNormal3fv(v3);
			glTexCoord2f(ctext_s*(i + 1), -ctext_t * (j + 1));
			glVertex3fv(v3);
			glNormal3fv(v4);
			glTexCoord2f(ctext_s*(i + 1), -ctext_t * j);
			glVertex3fv(v4);
			glEnd();
		}
	}
}

void Hesfera(GLfloat radio, int meridianos, int paralelos, GLuint text)
{
	GLdouble theta, phi;

	float ctext_s = 1.0 / meridianos;
	float ctext_t = 1.0 / paralelos;

	glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.

	float v1[] = { 0.0, 0.0, 0.0 };
	float v2[] = { 0.0, 0.0, 0.0 };
	float v3[] = { 0.0, 0.0, 0.0 };
	float v4[] = { 0.0, 0.0, 0.0 };
	int i, j;
	float angulom, angulop;
	angulom = 2 * 3.141592654 / meridianos;
	angulop = 3.141592654 / 2 / paralelos;
	for (i = 0; i<meridianos; i++)
	{
		for (j = 0; j<paralelos; j++)
		{
			v1[0] = radio * cos(angulom*i)*sin(angulop*j);
			v1[1] = radio * cos(angulop*j);
			v1[2] = radio * sin(angulom*i)*sin(angulop*j);

			v2[0] = radio * cos(angulom*i)*sin(angulop*(j + 1));
			v2[1] = radio * cos(angulop*(j + 1));
			v2[2] = radio * sin(angulom*i)*sin(angulop*(j + 1));

			v3[0] = radio * cos(angulom*(i + 1))*sin(angulop*(j + 1));
			v3[1] = radio * cos(angulop*(j + 1));
			v3[2] = radio * sin(angulom*(i + 1))*sin(angulop*(j + 1));

			v4[0] = radio * cos(angulom*(i + 1))*sin(angulop*j);
			v4[1] = radio * cos(angulop*j);
			v4[2] = radio * sin(angulom*(i + 1))*sin(angulop*j);

			glBegin(GL_POLYGON);
			glNormal3fv(v1);
			glTexCoord2f(ctext_s*i, -ctext_t * j);
			glVertex3fv(v1);
			glNormal3fv(v2);
			glTexCoord2f(ctext_s*i, -ctext_t * (j + 1));
			glVertex3fv(v2);
			glNormal3fv(v3);
			glTexCoord2f(ctext_s*(i + 1), -ctext_t * (j + 1));
			glVertex3fv(v3);
			glNormal3fv(v4);
			glTexCoord2f(ctext_s*(i + 1), -ctext_t * j);
			glVertex3fv(v4);
			glEnd();
		}
	}
}

void Qesfera(GLfloat radio, int meridianos, int paralelos, GLuint text)
{
	GLdouble theta, phi;

	float ctext_s = 1.0 / meridianos;
	float ctext_t = 1.0 / paralelos;

	glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.

	float v1[] = { 0.0, 0.0, 0.0 };
	float v2[] = { 0.0, 0.0, 0.0 };
	float v3[] = { 0.0, 0.0, 0.0 };
	float v4[] = { 0.0, 0.0, 0.0 };
	int i, j;
	float angulom, angulop;
	angulom = 2 * 3.141592654 / 2 / meridianos;
	angulop = 3.141592654 / 2 / paralelos;
	for (i = 0; i<meridianos; i++)
	{
		for (j = 0; j<paralelos; j++)
		{
			v1[0] = radio * cos(angulom*i)*sin(angulop*j);
			v1[1] = radio * cos(angulop*j);
			v1[2] = radio * sin(angulom*i)*sin(angulop*j);

			v2[0] = radio * cos(angulom*i)*sin(angulop*(j + 1));
			v2[1] = radio * cos(angulop*(j + 1));
			v2[2] = radio * sin(angulom*i)*sin(angulop*(j + 1));

			v3[0] = radio * cos(angulom*(i + 1))*sin(angulop*(j + 1));
			v3[1] = radio * cos(angulop*(j + 1));
			v3[2] = radio * sin(angulom*(i + 1))*sin(angulop*(j + 1));

			v4[0] = radio * cos(angulom*(i + 1))*sin(angulop*j);
			v4[1] = radio * cos(angulop*j);
			v4[2] = radio * sin(angulom*(i + 1))*sin(angulop*j);

			glBegin(GL_POLYGON);
			glNormal3fv(v1);
			glTexCoord2f(ctext_s*i, -ctext_t * j);
			glVertex3fv(v1);
			glNormal3fv(v2);
			glTexCoord2f(ctext_s*i, -ctext_t * (j + 1));
			glVertex3fv(v2);
			glNormal3fv(v3);
			glTexCoord2f(ctext_s*(i + 1), -ctext_t * (j + 1));
			glVertex3fv(v3);
			glNormal3fv(v4);
			glTexCoord2f(ctext_s*(i + 1), -ctext_t * j);
			glVertex3fv(v4);
			glEnd();
		}
	}
}

void prisma6T(float altura, float largo, float profundidad, GLuint text1, GLuint text2, GLuint text3, GLuint text4, GLuint text5, GLuint text6)  //Funcion creacion prisma
{

	GLfloat vertice[8][3] = {
		{ 0.5*largo ,-0.5*altura, 0.5*profundidad },    //Coordenadas Vértice 0 V1
	{ -0.5*largo ,-0.5*altura , 0.5*profundidad },    //Coordenadas Vértice 1 V2
	{ -0.5*largo ,-0.5*altura , -0.5*profundidad },    //Coordenadas Vértice 2 V3
	{ 0.5*largo ,-0.5*altura , -0.5*profundidad },    //Coordenadas Vértice 3 V4
	{ 0.5*largo ,0.5*altura , 0.5*profundidad },    //Coordenadas Vértice 4 V5
	{ 0.5*largo ,0.5*altura , -0.5*profundidad },    //Coordenadas Vértice 5 V6
	{ -0.5*largo ,0.5*altura , -0.5*profundidad },    //Coordenadas Vértice 6 V7
	{ -0.5*largo ,0.5*altura , 0.5*profundidad },    //Coordenadas Vértice 7 V8
	};

	
	glBindTexture(GL_TEXTURE_2D, text1);   // choose the texture to use
	glBegin(GL_POLYGON);	//Front
							//glColor3f(0.0,0.0,1.0);
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[1]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[0]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[4]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[7]);
	glEnd();
	glBindTexture(GL_TEXTURE_2D, text2);   // choose the texture to use
	glBegin(GL_POLYGON);	//Right
							//glColor3f(0.0,0.0,1.0);
	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[3]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[4]);
	glEnd();
	glBindTexture(GL_TEXTURE_2D, text3);   // choose the texture to use
	glBegin(GL_POLYGON);	//Back
							//glColor3f(0.0,1.0,0.0);
	glNormal3f(0.0f, 0.0f, -1.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[3]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[2]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[6]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[5]);
	glEnd();
	glBindTexture(GL_TEXTURE_2D, text4);   // choose the texture to use
	glBegin(GL_POLYGON);  //Left
						  //glColor3f(1.0,1.0,1.0);
	glNormal3f(-1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[2]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[7]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[6]);
	glEnd();
	glBindTexture(GL_TEXTURE_2D, text5);   // choose the texture to use
	glBegin(GL_POLYGON);  //Bottom
						  //glColor3f(0.4,0.2,0.6);
	glNormal3f(0.0f, -1.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[2]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[3]);
	glEnd();

	glBindTexture(GL_TEXTURE_2D, text6);   // choose the texture to use
	glBegin(GL_POLYGON);  //Top
						  //glColor3f(0.8,0.2,0.4);
	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[7]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[4]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[6]);
	glEnd();
}



void prismaregular(float altura, float largo, float profundidad, GLuint text1, GLuint text2, GLuint text3, GLuint text4, GLuint text5, GLuint text6)  //Funcion creacion prisma
{

	GLfloat vertice[8][3] = {
		{ 0.5*largo ,-0.5*altura, 0.5*profundidad },    //Coordenadas Vértice 0 V1
	{ -0.5*largo ,-0.5*altura , 0.5*profundidad },    //Coordenadas Vértice 1 V2
	{ -0.5*largo ,-0.5*altura , -0.5*profundidad },    //Coordenadas Vértice 2 V3
	{ 0.5*largo ,-0.5*altura , -0.5*profundidad },    //Coordenadas Vértice 3 V4
	{ 0.5*largo ,0.5*altura , 0.5*profundidad },    //Coordenadas Vértice 4 V5
	{ 0.5*largo ,0.5*altura , -0.5*profundidad },    //Coordenadas Vértice 5 V6
	{ -0.5*largo ,0.5*altura , -0.5*profundidad },    //Coordenadas Vértice 6 V7
	{ -0.5*largo ,0.5*altura , 0.5*profundidad },    //Coordenadas Vértice 7 V8
	};


	glBindTexture(GL_TEXTURE_2D, text1);   // choose the texture to use
	glBegin(GL_POLYGON);	//Front
							//glColor3f(0.0,0.0,1.0);
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[1]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[0]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[4]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[7]);
	glEnd();
	glBindTexture(GL_TEXTURE_2D, text2);   // choose the texture to use
	glBegin(GL_POLYGON);	//Right
							//glColor3f(0.0,0.0,1.0);
	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
	glTexCoord2f(10.0f, 0.0f); glVertex3fv(vertice[3]);
	glTexCoord2f(10.0f, 10.0f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.0f, 10.0f); glVertex3fv(vertice[4]);
	glEnd();
	glBindTexture(GL_TEXTURE_2D, text3);   // choose the texture to use
	glBegin(GL_POLYGON);	//Back
							//glColor3f(0.0,1.0,0.0);
	glNormal3f(0.0f, 0.0f, -1.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[3]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[2]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[6]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[5]);
	glEnd();
	glBindTexture(GL_TEXTURE_2D, text4);   // choose the texture to use
	glBegin(GL_POLYGON);  //Left
						  //glColor3f(1.0,1.0,1.0);
	glNormal3f(-1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[2]);
	glTexCoord2f(10.0f, 0.0f); glVertex3fv(vertice[1]);
	glTexCoord2f(10.0f, 10.0f); glVertex3fv(vertice[7]);
	glTexCoord2f(0.0f, 10.0f); glVertex3fv(vertice[6]);
	glEnd();
	glBindTexture(GL_TEXTURE_2D, text5);   // choose the texture to use
	glBegin(GL_POLYGON);  //Bottom
						  //glColor3f(0.4,0.2,0.6);
	glNormal3f(0.0f, -1.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
	glTexCoord2f(8.0f, 0.0f); glVertex3fv(vertice[1]);
	glTexCoord2f(8.0f, 8.0f); glVertex3fv(vertice[2]);
	glTexCoord2f(0.0f, 8.0f); glVertex3fv(vertice[3]);
	glEnd();

	glBindTexture(GL_TEXTURE_2D, text6);   // choose the texture to use
	glBegin(GL_POLYGON);  //Top
						  //glColor3f(0.8,0.2,0.4);
	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[7]);
	glTexCoord2f(8.0f, 0.0f); glVertex3fv(vertice[4]);
	glTexCoord2f(8.0f, 8.0f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.0f, 8.0f); glVertex3fv(vertice[6]);
	glEnd();
}

void cilindro(float radio, float altura, int resolucion, GLuint text)
{

	float v1[] = { 0.0, 0.0, 0.0 };
	float v2[] = { 0.0, 0.0, 0.0 };
	float v3[] = { 0.0, 0.0, 0.0 };
	float v4[] = { 0.0, 0.0, 0.0 };
	float v5[] = { 0.0, 0.0, 0.0 };

	float angulo = 2 * 3.14 / resolucion;

	//float ctext_s = 1/resolucion-1;
	float ctext_s = 1.0 / resolucion;
	float ctext_t = 0.0;


	for (int i = 0; i <resolucion; i++)
	{

		v2[0] = radio * cos(angulo*i);
		v2[1] = 0;
		v2[2] = radio * sin(angulo*i);

		v3[0] = radio * cos(angulo*(i + 1));
		v3[1] = 0;
		v3[2] = radio * sin(angulo*(i + 1));

		v4[0] = radio * cos(angulo*i);
		v4[1] = altura;
		v4[2] = radio * sin(angulo*i);

		v5[0] = radio * cos(angulo*(i + 1));
		v5[1] = altura;
		v5[2] = radio * sin(angulo*(i + 1));

		glBegin(GL_POLYGON);
		glNormal3f(0.0f, -1.0f, 0.0f);
		glVertex3f(0.0, 0.0, 0.0);
		glVertex3fv(v2);
		glVertex3fv(v3);
		glEnd();

		glBegin(GL_POLYGON);
		glNormal3f(0.0f, 1.0f, 0.0f);
		glVertex3f(0.0, altura, 0.0);
		glVertex3fv(v4);
		glVertex3fv(v5);
		glEnd();

		glBindTexture(GL_TEXTURE_2D, text);
		glBegin(GL_POLYGON);
		glNormal3f(v2[0], 0.0f, v2[2]);
		glTexCoord2f(ctext_s*i, 0.0f);		glVertex3fv(v2);
		glTexCoord2f(ctext_s*(i + 1), 0.0f);	glVertex3fv(v3);
		glTexCoord2f(ctext_s*(i + 1), 1.0f);	glVertex3fv(v5);
		glTexCoord2f(ctext_s*i, 1.0f);		glVertex3fv(v4);
		glEnd();
	}
}

void display(void)   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glLoadIdentity();	

	

	glPushMatrix();///////TODO		
	glTranslatef(7.0, 1.0, -20.0);	
	glTranslatef(pos_camX, pos_camY, pos_camZ);	
	glRotatef(eye_camX, 1.0, 0.0, 0.0);
	glRotatef(eye_camY + 180, 0.0, 1.0, 0.0);
	glRotatef(eye_camZ, 0.0, 0.0, 1.0);
	
	
	

	glPushMatrix(); //SKYEYE
	glBindTexture(GL_TEXTURE_2D, t_skyeye.GLindex);
	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER, 0.1);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glTranslatef(0, 0, 0);
	esfera(50.0, 90.0, 90.0, t_skyeye.GLindex);
	glDisable(GL_BLEND);
	glDisable(GL_ALPHA_TEST);
	glPopMatrix();//////////termina SKYEYE

	

	//////////////////suelo1
	glPushMatrix(); //
	glTranslatef(0, 0, 0);
	prismaregular(0.5,10,10,t_stone.GLindex, t_stone.GLindex,t_stone.GLindex, t_stone.GLindex, t_stone.GLindex, t_marmol.GLindex);
	glPushMatrix(); //techo1
	glTranslatef(0, 5.5, 0);
	prismaregular(0.5, 10, 10, t_stone.GLindex, t_stone.GLindex, t_stone.GLindex, t_stone.GLindex, t_blanco3.GLindex, t_stone.GLindex);
	glPopMatrix();//////////terMiNa techo1
	glPopMatrix();//////////terMiNa suelo1
	glPushMatrix(); /////suelo 2
	glTranslatef(7, 0, -4);
	prismaregular(0.5, 4, 18, t_stone.GLindex, t_stone.GLindex, t_stone.GLindex, t_stone.GLindex, t_stone.GLindex, t_marmol.GLindex);
	glPushMatrix(); /////techo 2
	glTranslatef(0, 5.5, 0);
	prismaregular(0.5, 4, 18, t_stone.GLindex, t_stone.GLindex, t_stone.GLindex, t_stone.GLindex, t_blanco3.GLindex, t_stone.GLindex);
	glPopMatrix();
	glPushMatrix(); /////pared 4
	glTranslatef(-1.875, 2.75, -4.85);
	prisma6T(5, 0.25, 8.2, t_azul1.GLindex, t_azul1.GLindex, t_stone.GLindex, t_stone.GLindex, t_stone.GLindex, t_stone.GLindex);
	glPushMatrix(); /////pared 4 borde
	glTranslatef(0, -2.4, 0);
	prisma6T(0.2, 0.35, 8.3, t_techo.GLindex, t_techo.GLindex, t_blanco.GLindex, t_blanco.GLindex, t_blanco.GLindex, t_blanco.GLindex);
	glPopMatrix();//////////termina pared4 borde
	glPopMatrix();//////////termina pared4
	glPushMatrix(); /////pared 5
	glTranslatef(1.875, 2.75, -4.85);
	prisma6T(5, 0.25, 8.2, t_azul1.GLindex, t_stone.GLindex, t_stone.GLindex, t_azul1.GLindex, t_stone.GLindex, t_stone.GLindex);
	glPushMatrix(); /////pared 5 borde
	glTranslatef(0, -2.4, 0);
	prisma6T(0.2, 0.35, 8.3, t_blanco.GLindex, t_blanco.GLindex, t_blanco.GLindex, t_techo.GLindex, t_blanco.GLindex, t_blanco.GLindex);
	glPopMatrix();//////////termina pared5 borde
	glPopMatrix();//////////termina pared5
	glPushMatrix(); /////COLUMNA
	glTranslatef(1.5, 2.75, -0.25);
	prisma6T(5, 1, 1, t_azul1.GLindex, t_stone.GLindex, t_azul1.GLindex, t_azul1.GLindex, t_stone.GLindex, t_stone.GLindex);
	glPushMatrix(); /////VIGA1
	glTranslatef(-6.5, 2.3, 0);
	prismaregular(0.4, 14, 1.1, t_blanco.GLindex, t_blanco.GLindex, t_blanco.GLindex, t_blanco.GLindex, t_blanco3.GLindex, t_techo.GLindex);
	
	glPushMatrix(); /////VIGA2
	glTranslatef(-0.2, 0, 6);
	prismaregular(0.4, 13.25, 1.1, t_blanco.GLindex, t_blanco.GLindex, t_blanco.GLindex, t_blanco.GLindex, t_blanco3.GLindex, t_techo.GLindex);
	glPopMatrix();///////termina VIGA2
	glPopMatrix();///////termina VIGA1
	glPushMatrix(); /////COLUMNA borde
	glTranslatef(0, -2.4, 0);
	prisma6T(0.2, 1.1, 1.1, t_techo.GLindex, t_blanco.GLindex, t_techo.GLindex, t_techo.GLindex, t_blanco.GLindex, t_blanco.GLindex);
	glPopMatrix();//////////termina COLUMNA borde
	glPopMatrix();//////////termina COLUMNA
	glPushMatrix(); /////PAREDPUERTA IZQ
	glTranslatef(-1.375, 2.5, -8.85);
	prisma6T(4.5, 0.75, 0.25, t_azul1.GLindex, t_blanco.GLindex, t_stone.GLindex, t_stone.GLindex, t_stone.GLindex, t_stone.GLindex);
	glPushMatrix(); /////PAREDPUERTA IZQ borde
	glTranslatef(0, -2.15, 0);
	prisma6T(0.2, 0.85, 0.35, t_techo.GLindex, t_blanco.GLindex, t_blanco.GLindex, t_blanco.GLindex, t_blanco.GLindex, t_blanco.GLindex);
	glPopMatrix();//////////termina PAREDPUERTA IZQ borde
	glPopMatrix();//////////termina PAREDPUERTA IZQ
	glPushMatrix(); /////PAREDPUERTA DER
	glTranslatef(1.375, 2.5, -8.85);
	prisma6T(4.5, 0.75, 0.25, t_azul1.GLindex, t_stone.GLindex, t_stone.GLindex, t_blanco.GLindex, t_stone.GLindex, t_stone.GLindex);
	glPushMatrix(); /////PAREDPUERTA DER borde
	glTranslatef(0, -2.15, 0);
	prisma6T(0.2, 0.85, 0.35, t_techo.GLindex, t_blanco.GLindex, t_blanco.GLindex, t_blanco.GLindex, t_blanco.GLindex, t_blanco.GLindex);
	glPopMatrix();//////////termina PAREDPUERTA DER borde
	glPopMatrix();//////////termina PAREDPUERTA DER
	glPushMatrix(); /////PAREDPUERTA ARRIBA
	glTranslatef(0, 5, -8.85);
	prisma6T(0.5, 3.5, 0.25, t_azul1.GLindex, t_stone.GLindex, t_stone.GLindex, t_stone.GLindex, t_blanco.GLindex, t_blanco.GLindex);
	glPopMatrix();//////////termina PAREDPUERTA ARRIBA
	glPushMatrix(); /////puerta
	glTranslatef(0, 2.5, -8.85);
	prisma6T(4.5, 2, 0.125, t_puerta.GLindex, t_stone.GLindex, t_puerta.GLindex, t_stone.GLindex, t_stone.GLindex, t_stone.GLindex);
	glPushMatrix(); /////manija1
	glTranslatef(0.8, 0.1, 0.0);
	glRotatef(90,1,0,0);
	cilindro(0.04, 0.18, 20, t_metal.GLindex);
	glPushMatrix(); /////manija2
	glTranslatef(0, 0.225, 0);
	esfera(0.08, 20, 20, t_metal.GLindex);
	glPopMatrix();//////////termina manija2
	glPopMatrix();//////////termina manija1
	glPopMatrix();//////////termina puerta
	glPopMatrix();//////////termina suelo2

	glPushMatrix(); /////pared 1
	glTranslatef(0, 2.75, -4.88);
	prisma6T(5, 10, 0.25, t_azul1.GLindex, t_stone.GLindex, t_stone.GLindex, t_stone.GLindex, t_stone.GLindex, t_stone.GLindex);
	glPushMatrix(); /////pared 1 borde
	glTranslatef(0, -2.4, 0);
	prisma6T(0.2, 10, 0.35, t_techo.GLindex, t_blanco.GLindex, t_blanco.GLindex, t_blanco.GLindex, t_blanco.GLindex, t_blanco.GLindex);
	glPopMatrix();//////////termina pared1 borde
	glPopMatrix();//////////termina pared1

	glPushMatrix(); /////pared 2
	glTranslatef(-4.88, 2.75, 0);
	prisma6T(5, 0.25, 10, t_stone.GLindex, t_azul1.GLindex, t_stone.GLindex, t_stone.GLindex, t_stone.GLindex, t_stone.GLindex);
	glPushMatrix(); /////pared 2 borde
	glTranslatef(0, -2.4, 0);
	prisma6T(0.2, 0.35, 10, t_blanco.GLindex, t_techo.GLindex, t_blanco.GLindex, t_blanco.GLindex, t_blanco.GLindex, t_blanco.GLindex);
	glPopMatrix();//////////termina pared2 borde
	glPopMatrix();//////////termina pared2

	glPushMatrix(); /////pared 3
	glTranslatef(2, 2.75, 4.88);
	prisma6T(5, 14, 0.25, t_stone.GLindex, t_stone.GLindex, t_azul1.GLindex, t_stone.GLindex, t_stone.GLindex, t_stone.GLindex);
	glPushMatrix(); /////pared 3 borde
	glTranslatef(0, -2.4, 0);
	prisma6T(0.2, 14, 0.35, t_blanco.GLindex, t_blanco.GLindex, t_techo.GLindex, t_blanco.GLindex, t_blanco.GLindex, t_blanco.GLindex);
	glPopMatrix();//////////termina pared3 borde
	glPopMatrix();//////////termina pared3

	//////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////777777777777777

	/////cama
	glPushMatrix(); ////colchon
	glTranslatef(6.2, 1.25, 0);
	prisma6T(0.2, 4.25, 2.4, t_blanco2.GLindex, t_blanco2.GLindex, t_blanco2.GLindex, t_blanco2.GLindex, t_blanco.GLindex, t_colchon.GLindex);
	glPushMatrix(); ////cabecera1
	glTranslatef(2.175, -0.2, 0);
	prisma6T(1.2, 0.1, 2.2, t_colchon.GLindex, t_blanco.GLindex, t_colchon.GLindex, t_blanco.GLindex, t_colchon.GLindex, t_colchon.GLindex);
	glPushMatrix(); ////cabecera2 circulo
	glTranslatef(-0.0499, 0, 0);
	glScalef(0.0,1,0.8);
	Hesfera(1, 20, 20, t_blanco.GLindex);
	glPopMatrix();/////termina cabecera2 circulo
	glPushMatrix(); ////planeta
	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER, 0.1);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glTranslatef(-0.075, 0.65, 0);
	glRotatef(15,1,0,0);
	prisma6T(0.35, 0, 0.8, t_vacia.GLindex, t_vacia.GLindex, t_vacia.GLindex, t_planeta.GLindex, t_vacia.GLindex, t_vacia.GLindex);
	glDisable(GL_BLEND);
	glDisable(GL_ALPHA_TEST);
	glPopMatrix();////termina planeta
	glPopMatrix();/////termina cabecera1
	glPushMatrix(); ////parte frontal
	glTranslatef(-2.1, -0.25, 0);
	glRotatef(15,0,0,1);
	prisma6T(0.5, 0.05, 2.45, t_colchon.GLindex, t_colchon.GLindex, t_colchon.GLindex, t_blanco.GLindex, t_colchon.GLindex, t_colchon.GLindex);
	glPushMatrix(); ////nave
	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER, 0.1);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glTranslatef(-0.0275, 0, 0);
	prisma6T(0.4, 0.0, 0.25, t_vacia.GLindex, t_vacia.GLindex, t_vacia.GLindex, t_nave.GLindex, t_vacia.GLindex, t_vacia.GLindex);
	glDisable(GL_BLEND);
	glDisable(GL_ALPHA_TEST);
	glPopMatrix();//////termina nave
	glPopMatrix();//////termina parte frontal
	glPushMatrix(); ////bor
	glTranslatef(0, -0.1, 0);
	prisma6T(0.08, 4.25, 2.5, t_blanco.GLindex, t_blanco.GLindex, t_blanco.GLindex, t_blanco.GLindex, t_blanco.GLindex, t_blanco.GLindex);
	glPopMatrix();////termina bor

	glPushMatrix(); ////bozz sur
	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER, 0.1);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glTranslatef(0, -0.1, 1.255);
	glRotatef(90,0,0,1);
	prisma6T(4.3, 1.8, 0.0, t_bozzcama1.GLindex, t_vacia.GLindex, t_vacia.GLindex, t_vacia.GLindex, t_vacia.GLindex, t_vacia.GLindex);
	glDisable(GL_BLEND);
	glDisable(GL_ALPHA_TEST);
	glPopMatrix();////termina bozzsur

	glPushMatrix(); ////bozz norte
	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER, 0.1);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glTranslatef(0, -0.1, -1.255);
	glRotatef(90, 0, 0, 1);
	prisma6T(4.3, 1.8, 0.0, t_vacia.GLindex, t_vacia.GLindex, t_bozzcama2.GLindex, t_vacia.GLindex, t_vacia.GLindex, t_vacia.GLindex);
	glDisable(GL_BLEND);
	glDisable(GL_ALPHA_TEST);
	glPopMatrix();////termina bozznorte
	glPopMatrix();/////termina colchon
	//////////termina cama

	//////////////ropero
	glPushMatrix(); ////ropero 
	glTranslatef(0, 2.05, -4.3);
	glRotatef(0, 0, 0, 0);
	prisma6T(3.6, 2.8, 0.75, t_whitewood.GLindex, t_whitewood.GLindex, t_whitewood.GLindex, t_whitewood.GLindex, t_whitewood.GLindex, t_whitewood.GLindex);
	glPushMatrix(); ////Puerta izq 
	glTranslatef(-0.65, 0.3125, 0.4);
	glRotatef(0, 0, 0, 0);
	prisma6T(2.8, 1.25, 0.1, t_blanco.GLindex, t_whitewood.GLindex, t_whitewood.GLindex, t_whitewood.GLindex, t_whitewood.GLindex, t_blanco2.GLindex);
	glPushMatrix(); ////manija izq 
	glTranslatef(0.5, -0.25, 0.125);
	glRotatef(0, 0, 0, 0);
	cilindro(0.02, 0.25, 20, t_metal.GLindex);
	glPushMatrix(); ////manija izq 1.1
	glTranslatef(0.0, 0.03, -0.23);
	glRotatef(90, 1, 0, 0);
	cilindro(0.02, 0.25, 20, t_metal.GLindex);
	glPopMatrix();/////termina manija izq 1.1
	glPushMatrix(); ////manija izq 1.2
	glTranslatef(0.0, 0.22, -0.23);
	glRotatef(90, 1, 0, 0);
	cilindro(0.02, 0.25, 20, t_metal.GLindex);
	glPopMatrix();/////termina manija izq 1.2
	glPopMatrix();/////termina manija izq

	glPushMatrix(); ////visagra izq arriba
	glTranslatef(-0.635, 0.55, 0.0);
	glRotatef(0, 0, 0, 0);
	cilindro(0.025, 0.3, 20, t_metal.GLindex);
	glPopMatrix();/////termina visagra izq arriba
	glPushMatrix(); ////visagra izq abajo
	glTranslatef(-0.635, -1.1, 0.0);
	glRotatef(0, 0, 0, 0);
	cilindro(0.025, 0.3, 20, t_metal.GLindex);
	glPopMatrix();/////termina visagra izq abajo
	glPushMatrix(); ////logotoy
	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER, 0.1);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glTranslatef(-0.1, -0.25, 0.055);
	glRotatef(0, 0, 0, 0);
	prisma6T(0.45, 0.55, 0.0, t_logotoy.GLindex, t_vacia.GLindex, t_vacia.GLindex, t_vacia.GLindex, t_vacia.GLindex, t_vacia.GLindex);
	glDisable(GL_BLEND);
	glDisable(GL_ALPHA_TEST);
	glPopMatrix();////termina logotoy
	glPopMatrix();/////termina puerta izq
	
	glPushMatrix(); ////cajon izq 
	glTranslatef(-0.65, -1.4, 0.4);
	glRotatef(0, 0, 0, 0);
	prisma6T(0.45, 1.25, 0.1, t_blanco.GLindex, t_whitewood.GLindex, t_whitewood.GLindex, t_whitewood.GLindex, t_whitewood.GLindex, t_blanco2.GLindex);
	glPushMatrix(); ////manija esf izq
	glTranslatef(-0.35, 0, -0.075);
	glRotatef(90, 1, 0, 0);
	cilindro(0.03, 0.2, 20, t_metal.GLindex);
	glPushMatrix(); ////manija esfera izq
	glTranslatef(0, 0.2, 0);
	glRotatef(0, 0, 0, 0);
	esfera(0.05, 20, 20, t_metal.GLindex);
	glPopMatrix();/////termina manija esfera izq
	glPopMatrix();/////termina manija esf izq

	glPushMatrix(); ////manija esf der
	glTranslatef(0.35, 0, -0.075);
	glRotatef(90, 1, 0, 0);
	cilindro(0.03, 0.2, 20, t_metal.GLindex);
	glPushMatrix(); ////manija esfera der
	glTranslatef(0, 0.2, 0);
	glRotatef(0, 0, 0, 0);
	esfera(0.05, 20, 20, t_metal.GLindex);
	glPopMatrix();/////termina manija esfera der
	glPopMatrix();/////termina manija esf der

	glPushMatrix(); ////tubo de esferas
	glTranslatef(0.38, 0, 0.125);
	glRotatef(90, 0, 0, 1);
	cilindro(0.02, 0.75, 20, t_metal.GLindex);
	glPopMatrix();

	glPopMatrix();/////termina cajon izq
	glPushMatrix(); ////Puerta der
	glTranslatef(0.65, 0.3125, 0.4);
	glRotatef(0, 0, 0, 0);
	prisma6T(2.8, 1.25, 0.1, t_blanco.GLindex, t_whitewood.GLindex, t_whitewood.GLindex, t_whitewood.GLindex, t_whitewood.GLindex, t_blanco2.GLindex);
	glPushMatrix(); ////manija der
	glTranslatef(-0.5, -0.25, 0.125);
	glRotatef(0, 0, 0, 0);
	cilindro(0.02, 0.25, 20, t_metal.GLindex);
	glPushMatrix(); ////manija der 1.1
	glTranslatef(0.0, 0.03, -0.23);
	glRotatef(90, 1, 0, 0);
	cilindro(0.02, 0.25, 20, t_metal.GLindex);
	glPopMatrix();/////termina manija der 1.1
	glPushMatrix(); ////manija izq 1.2
	glTranslatef(0.0, 0.22, -0.23);
	glRotatef(90, 1, 0, 0);
	cilindro(0.02, 0.25, 20, t_metal.GLindex);
	glPopMatrix();/////termina manija der 1.2
	glPopMatrix();/////termina manija der

	glPushMatrix(); ////visagra der arriba
	glTranslatef(0.635, 0.55, 0.0);
	glRotatef(0, 0, 0, 0);
	cilindro(0.025, 0.3, 20, t_metal.GLindex);
	glPopMatrix();/////termina visagra der arriba
	glPushMatrix(); ////visagra der abajo
	glTranslatef(0.635, -1.1, 0.0);
	glRotatef(0, 0, 0, 0);
	cilindro(0.025, 0.3, 20, t_metal.GLindex);
	glPopMatrix();/////termina visagra der abajo


	glPushMatrix(); ////bozzropero
	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER, 0.1);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glTranslatef(0.025, -0.575, 0.055);
	glRotatef(0, 0, 0, 0);
	prisma6T(1.65, 1.2, 0.0, t_bozzropero.GLindex, t_vacia.GLindex, t_vacia.GLindex, t_vacia.GLindex, t_vacia.GLindex, t_vacia.GLindex);
	glDisable(GL_BLEND);
	glDisable(GL_ALPHA_TEST);
	glPopMatrix();////termina bozzropero

	glPopMatrix();/////termina puerta der
	glPushMatrix(); ////cajon der
	glTranslatef(0.65, -1.4, 0.4);
	glRotatef(0, 0, 0, 0);
	prisma6T(0.45, 1.25, 0.1, t_blanco.GLindex, t_whitewood.GLindex, t_whitewood.GLindex, t_whitewood.GLindex, t_whitewood.GLindex, t_blanco2.GLindex);
	glPushMatrix(); ////manija esf izq
	glTranslatef(-0.35, 0, -0.075);
	glRotatef(90, 1, 0, 0);
	cilindro(0.03, 0.2, 20, t_metal.GLindex);
	glPushMatrix(); ////manija esfera izq
	glTranslatef(0, 0.2, 0);
	glRotatef(0, 0, 0, 0);
	esfera(0.05, 20, 20, t_metal.GLindex);
	glPopMatrix();/////termina manija esfera izq
	glPopMatrix();/////termina manija esf izq

	glPushMatrix(); ////manija esf der
	glTranslatef(0.35, 0, -0.075);
	glRotatef(90, 1, 0, 0);
	cilindro(0.03, 0.2, 20, t_metal.GLindex);
	glPushMatrix(); ////manija esfera der
	glTranslatef(0, 0.2, 0);
	glRotatef(0, 0, 0, 0);
	esfera(0.05, 20, 20, t_metal.GLindex);
	glPopMatrix();/////termina manija esfera der
	glPopMatrix();/////termina manija esf der

	glPushMatrix(); ////tubo de esferas
	glTranslatef(0.38, 0, 0.125);
	glRotatef(90, 0, 0, 1);
	cilindro(0.02, 0.75, 20, t_metal.GLindex);
	glPopMatrix();
	glPopMatrix();/////termina cajon der


	glPushMatrix(); ////nave ropero
	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER, 0.1);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glTranslatef(-0.05,0.25, 0.37);
	glRotatef(0, 0, 0, 0);
	prisma6T(5.4, 4.5, 0, t_roperoverde.GLindex, t_vacia.GLindex, t_vacia.GLindex, t_vacia.GLindex, t_vacia.GLindex, t_vacia.GLindex);
	glDisable(GL_BLEND);
	glDisable(GL_ALPHA_TEST);
	glPopMatrix();////termina nave ropero
	glPopMatrix();////termina ropero
	//////////////termina ropero


	////////////////////buro ropero
	glPushMatrix(); ////buro ropero
	glTranslatef(3.25, 1.283, -4.4);
	glScalef(1.1, 1.15, 1);
	glRotatef(0, 0, 0, 0);
	prisma6T(1.8, 1.3, 0.5, t_whitewood.GLindex, t_whitewood.GLindex, t_whitewood.GLindex, t_whitewood.GLindex, t_whitewood.GLindex, t_whitewood.GLindex);
	glPushMatrix(); ////nave buro ropero
	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER, 0.1);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glTranslatef(-0.0, 0.1, -0.25);
	glRotatef(0, 0, 0, 0);
	prisma6T(2.5, 2.1, 0, t_roperoverde.GLindex, t_vacia.GLindex, t_vacia.GLindex, t_vacia.GLindex, t_vacia.GLindex, t_vacia.GLindex);
	glDisable(GL_BLEND);
	glDisable(GL_ALPHA_TEST);
	glPopMatrix();////termina nave buro ropero
	glPushMatrix(); ////repisa buro
	glTranslatef(0.02, 0.9, 0.03);
	glRotatef(0, 0, 0, 0);
	prisma6T(0.04, 1.35, 0.56, t_verde2.GLindex, t_verde2.GLindex, t_verde2.GLindex, t_verde2.GLindex, t_verde2.GLindex, t_verde1.GLindex);
	glPopMatrix();////termina repisa buro
	glPushMatrix(); ////cajon verde arriba
	glTranslatef(0.0, 0.775, 0.25);
	glRotatef(0, 0, 0, 0);
	prisma6T(0.135, 1.2, 0.05, t_verde.GLindex, t_verde2.GLindex, t_verde2.GLindex, t_verde2.GLindex, t_verde2.GLindex, t_verde1.GLindex);
	glPopMatrix();////termina  cajon verde arriba
	glPushMatrix(); ////cajon azul 
	glTranslatef(0.0, 0.46, 0.275);
	glRotatef(0, 0, 0, 0);
	prisma6T(0.375, 1.2, 0.05, t_bozzburo1.GLindex, t_whitewood.GLindex, t_whitewood.GLindex, t_whitewood.GLindex, t_whitewood.GLindex, t_blanco2.GLindex);
	glPushMatrix(); ////manija izq 
	glTranslatef(0.15, 0, 0.085);
	glRotatef(90,0,0,1);
	glRotatef(0, 0, 0, 0);
	cilindro(0.01, 0.25, 20, t_metal.GLindex);
	glPushMatrix(); ////manija izq 1.1
	glTranslatef(0.0, 0.03, -0.23);
	glRotatef(90, 1, 0, 0);
	cilindro(0.01, 0.25, 20, t_metal.GLindex);
	glPopMatrix();/////termina manija izq 1.1
	glPushMatrix(); ////manija izq 1.2
	glTranslatef(0.0, 0.22, -0.23);
	glRotatef(90, 1, 0, 0);
	cilindro(0.01, 0.25, 20, t_metal.GLindex);
	glPopMatrix();/////termina manija izq 1.2
	glPopMatrix();/////termina manija izq
	glPopMatrix();////termina  cajon azul
	glPushMatrix(); ////cajon 1
	glTranslatef(0.0, 0.08, 0.275);
	glRotatef(0, 0, 0, 0);
	prisma6T(0.25, 1.2, 0.05, t_blanco.GLindex, t_whitewood.GLindex, t_whitewood.GLindex, t_whitewood.GLindex, t_whitewood.GLindex, t_blanco2.GLindex);
	glPushMatrix(); ////manija esf der
	glTranslatef(0.325, 0, -0.12);
	glRotatef(90, 1, 0, 0);
	cilindro(0.01, 0.2, 20, t_metal.GLindex);
	glPushMatrix(); ////manija esfera 
	glTranslatef(0, 0.2, 0);
	glRotatef(0, 0, 0, 0);
	esfera(0.035, 20, 20, t_metal.GLindex);
	glPopMatrix();/////termina manija esfera der
	glPopMatrix();/////termina manija esf der
	glPushMatrix(); ////manija esf izq
	glTranslatef(-0.325, 0, -0.12);
	glRotatef(90, 1, 0, 0);
	cilindro(0.01, 0.2, 20, t_metal.GLindex);
	glPushMatrix(); ////manija esfera 
	glTranslatef(0, 0.2, 0);
	glRotatef(0, 0, 0, 0);
	esfera(0.035, 20, 20, t_metal.GLindex);
	glPopMatrix();/////termina manija esfera izq
	glPopMatrix();/////termina manija esf izq
	glPopMatrix();////termina  cajon 1
	glPushMatrix(); ////cajon 2
	glTranslatef(0.0, -0.235, 0.275);
	glRotatef(0, 0, 0, 0);
	prisma6T(0.25, 1.2, 0.05, t_blanco.GLindex, t_whitewood.GLindex, t_whitewood.GLindex, t_whitewood.GLindex, t_whitewood.GLindex, t_blanco2.GLindex);
	glPushMatrix(); ////manija esf der
	glTranslatef(0.325, 0, -0.12);
	glRotatef(90, 1, 0, 0);
	cilindro(0.01, 0.2, 20, t_metal.GLindex);
	glPushMatrix(); ////manija esfera 
	glTranslatef(0, 0.2, 0);
	glRotatef(0, 0, 0, 0);
	esfera(0.035, 20, 20, t_metal.GLindex);
	glPopMatrix();/////termina manija esfera der
	glPopMatrix();/////termina manija esf der
	glPushMatrix(); ////manija esf izq
	glTranslatef(-0.325, 0, -0.12);
	glRotatef(90, 1, 0, 0);
	cilindro(0.01, 0.2, 20, t_metal.GLindex);
	glPushMatrix(); ////manija esfera 
	glTranslatef(0, 0.2, 0);
	glRotatef(0, 0, 0, 0);
	esfera(0.035, 20, 20, t_metal.GLindex);
	glPopMatrix();/////termina manija esfera izq
	glPopMatrix();/////termina manija esf izq
	glPopMatrix();////termina  cajon 2
	glPushMatrix(); ////cajon 3
	glTranslatef(0.0, -0.55, 0.275);
	glRotatef(0, 0, 0, 0);
	prisma6T(0.25, 1.2, 0.05, t_blanco.GLindex, t_whitewood.GLindex, t_whitewood.GLindex, t_whitewood.GLindex, t_whitewood.GLindex, t_blanco2.GLindex);
	glPushMatrix(); ////manija esf der
	glTranslatef(0.325, 0, -0.12);
	glRotatef(90, 1, 0, 0);
	cilindro(0.01, 0.2, 20, t_metal.GLindex);
	glPushMatrix(); ////manija esfera 
	glTranslatef(0, 0.2, 0);
	glRotatef(0, 0, 0, 0);
	esfera(0.035, 20, 20, t_metal.GLindex);
	glPopMatrix();/////termina manija esfera der
	glPopMatrix();/////termina manija esf der
	glPushMatrix(); ////manija esf izq
	glTranslatef(-0.325, 0, -0.12);
	glRotatef(90, 1, 0, 0);
	cilindro(0.01, 0.2, 20, t_metal.GLindex);
	glPushMatrix(); ////manija esfera 
	glTranslatef(0, 0.2, 0);
	glRotatef(0, 0, 0, 0);
	esfera(0.035, 20, 20, t_metal.GLindex);
	glPopMatrix();/////termina manija esfera izq
	glPopMatrix();/////termina manija esf izq
	glPopMatrix();////termina  cajon 3
	glPushMatrix(); ////cajon verde abajo
	glTranslatef(0.0, -0.775, 0.25);
	glRotatef(0, 0, 0, 0);
	prisma6T(0.16, 1.2, 0.05, t_verde.GLindex, t_verde2.GLindex, t_verde2.GLindex, t_verde2.GLindex, t_verde2.GLindex, t_verde1.GLindex);
	glPopMatrix();////termina  cajon verde abajo
	glPopMatrix();////termina buro ropero
	/////////////termina buro ropero

	/////////////Buro Cama
	glPushMatrix(); ////buro cama
	glScalef(1.2,1.2,1.2);
	glTranslatef(6.6, 0.475 , 2.3);
	glRotatef(0, 0, 0, 0);
	prisma6T(0.375, 0.7, 0.9, t_blanco.GLindex, t_whitewood.GLindex, t_blanco.GLindex, t_blanco.GLindex, t_whitewood.GLindex, t_whitewood.GLindex);
	glPushMatrix(); ////cajon
	glTranslatef(0.025, 0.01, 0.0);
	glRotatef(0, 0, 0, 0);
	prisma6T(0.3, 0.8, 0.8, t_blanco.GLindex, t_blanco.GLindex, t_blanco.GLindex, t_bozzburo1.GLindex, t_blanco.GLindex, t_blanco.GLindex);
	glPushMatrix(); ////manija esf 
	glTranslatef(-0.25, 0, 0);
	glRotatef(90, 0, 0, 1);
	cilindro(0.01, 0.2, 20, t_metal.GLindex);
	glPushMatrix(); ////manija esfera 
	glTranslatef(0, 0.2, 0);
	glRotatef(0, 0, 0, 0);
	esfera(0.035, 20, 20, t_metal.GLindex);
	glPopMatrix();/////termina manija esfera
	glPopMatrix();/////termina manija esf 
	glPopMatrix();/////termina cajon
	glPushMatrix(); ////pata sup der
	glTranslatef(0.275, -0.225, 0.35);
	glRotatef(0, 0, 0, 0);
	prisma6T(0.08, 0.1, 0.125, t_blanco2.GLindex, t_blanco2.GLindex, t_blanco2.GLindex, t_blanco2.GLindex, t_blanco2.GLindex, t_blanco2.GLindex);
	glPopMatrix();////termina  pata superior der
	glPushMatrix(); ////pata sup izq
	glTranslatef(0.275, -0.225, -0.35);
	glRotatef(0, 0, 0, 0);
	prisma6T(0.08, 0.1, 0.125, t_blanco2.GLindex, t_blanco2.GLindex, t_blanco2.GLindex, t_blanco2.GLindex, t_blanco2.GLindex, t_blanco2.GLindex);
	glPopMatrix();////termina  pata sup izq
	glPushMatrix(); ////pata inf izq
	glTranslatef(-0.275, -0.225, -0.35);
	glRotatef(0, 0, 0, 0);
	prisma6T(0.08, 0.1, 0.125, t_blanco2.GLindex, t_blanco2.GLindex, t_blanco2.GLindex, t_blanco2.GLindex, t_blanco2.GLindex, t_blanco2.GLindex);
	glPopMatrix();////termina  pata inf izq
	glPushMatrix(); ////pata inf der
	glTranslatef(-0.275, -0.225, 0.35);
	glRotatef(0, 0, 0, 0);
	prisma6T(0.08, 0.1, 0.125, t_blanco2.GLindex, t_blanco2.GLindex, t_blanco2.GLindex, t_blanco2.GLindex, t_blanco2.GLindex, t_blanco2.GLindex);
	glPopMatrix();////termina  pata inf der
	glPushMatrix(); ////primer circulo
	glTranslatef(0.35, -0.1775, 0);
	glScalef(0,0.6, 1);
	glRotatef(0, 0, 0, 0);
	Hesfera(0.75, 20, 20, t_verde.GLindex);
	glPushMatrix(); ////segundo circulo
	glTranslatef(0, 0.25, 0);
	glScalef(0, 2.5, 0.65);
	glRotatef(0, 0, 0, 0);
	Hesfera(0.75, 20, 20, t_verde.GLindex);
	glPopMatrix();////termina  segundo circulo
	glPopMatrix();////termina  primer circulo
	

	glPushMatrix();//////////// cuartos de circulos
	glRotatef(-90, 0, 1, 0);///////////////////////////rotación para cuartos de circulo
	glPushMatrix(); ////cuartocirculo 1
	glTranslatef(0.39, 0.185, -0.345);
	glScalef(0, 0.9, 1.1);
	Qesfera(0.5, 20, 20, t_blanco.GLindex);
	glPopMatrix(); //////termina cuartocirculo 1
	glPushMatrix(); ////cuartocirculo 2
	glTranslatef(-0.39, 0.185, -0.345);
	glScalef(0, 0.9, 1.1);
	Qesfera(0.5, 20, 20, t_blanco.GLindex);
	glPopMatrix();////termina cuartocirculo 2
	glPopMatrix(); //////termina cuartos de circulos

	glPushMatrix(); ////repisa
	glTranslatef(0.07, 0.35, 0.0);
	glRotatef(0, 0, 0, 0);
	prisma6T(0.03, 0.55, 0.7775, t_blanco.GLindex, t_whitewood.GLindex, t_whitewood.GLindex, t_whitewood.GLindex, t_whitewood.GLindex, t_whitewood.GLindex);

	glPushMatrix(); ////base1
	glTranslatef(0.0, 0, 0.0);
	glRotatef(0.1, 0, 0, 0);
	glScalef(2, 2, 0);
	Hesfera(0.05, 20, 20, t_rojo.GLindex);
	glPopMatrix(); //////termina base1
	glPushMatrix(); ////base2
	glTranslatef(0.0, 0, 0.0);
	glRotatef(0.1, 0, 0, 0);
	glScalef(0, 2, 2);
	Hesfera(0.05, 20, 20, t_rojo.GLindex);
	glPopMatrix(); //////termina base2

	glPushMatrix(); ////lamapara 1
	glTranslatef(0.0, 0.25, 0.0);
	glRotatef(180, 0, 0, 1);
	glScalef(2, 8, 2);
	Hesfera(0.03, 20, 20, t_estrella.GLindex);
	glPopMatrix(); //////termina lampara 1

	glPushMatrix(); ////lamapara 2
	glTranslatef(0.0, 0.65, 0.0);
	glRotatef(45, 0, 1, 0);
	glScalef(2, 8, 2);
	Hesfera(0.03, 20, 20, t_estrella.GLindex);
	glPopMatrix(); //////termina lampara 2

	glPushMatrix(); ////lamapara 2
	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER, 0.1);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glTranslatef(0.0, 0.25, 0.0);
	glRotatef(0, 0, 0, 0);
	cilindro(0.06, 0.4, 40, t_vidrio2.GLindex);
	glDisable(GL_BLEND);
	glDisable(GL_ALPHA_TEST);
	glPopMatrix(); //////termina lampara 2
	glPopMatrix(); //////termina repisa
	glPopMatrix();////termina buro cama
	////termina  buro cama



	/////////cuadros

	glPushMatrix(); ////cuadro1
	glTranslatef(3.25, 3.5, -4.69);
	glRotatef(0, 0, 0, 0);
	prisma6T(1.2, 1.2, 0.035, t_cuadro.GLindex, t_blanco2.GLindex, t_blanco2.GLindex, t_blanco2.GLindex, t_blanco2.GLindex, t_blanco2.GLindex);
	glPopMatrix(); //////termina cuadro1

	glPushMatrix(); ////cuadro2
	glTranslatef(8.65, 3.5, -6);
	glRotatef(0, 0, 0, 0);
	prisma6T(1.25, 0.03, 1.2, t_blanco2.GLindex, t_blanco2.GLindex, t_blanco2.GLindex, t_cuadro1.GLindex, t_blanco2.GLindex, t_blanco2.GLindex);
	glPopMatrix(); //////termina cuadro2

	glPushMatrix(); ////cuadro3
	glTranslatef(8.65, 3.5, -7.5);
	glRotatef(0, 0, 0, 0);
	prisma6T(1.25, 0.03, 1.2, t_blanco2.GLindex, t_blanco2.GLindex, t_blanco2.GLindex, t_cuadro2.GLindex, t_blanco2.GLindex, t_blanco2.GLindex);
	glPopMatrix(); //////termina cuadro3

	glPushMatrix(); ////cuadro4
	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER, 0.1);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glTranslatef(5.275, 3.3, -7.5);
	glRotatef(0, 0, 0, 0);
	prisma6T(2.15, 0.0, 1.25, t_vacia.GLindex, t_cuadro3.GLindex, t_vacia.GLindex, t_vacia.GLindex, t_vacia.GLindex, t_vacia.GLindex);
	glDisable(GL_BLEND);
	glDisable(GL_ALPHA_TEST);
	glPopMatrix(); //////termina cuadro4
	////////////terminan cuadros

	glPushMatrix(); ////fomi
	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER, 0.1);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glTranslatef(1.5, 0.255, 0);
	glRotatef(90, 0, -1, 0);
	prisma6T(0, 3.75, 3.75, t_vacia.GLindex, t_vacia.GLindex, t_vacia.GLindex, t_vacia.GLindex, t_vacia.GLindex, t_fomi.GLindex);
	glDisable(GL_BLEND);
	glDisable(GL_ALPHA_TEST);
	glPopMatrix(); //////termina fomi


	glPushMatrix(); ////balon futbol	
	glTranslatef(balonFut[1] + 1, 0.45, 3);
	glRotatef(135, 0, 0, 1);
	glRotatef(balonFut[0], 0, 0, 1);
	esfera(0.2, 50, 50, t_futbol.GLindex);
	glPopMatrix();/////termina balon futbol

	glPushMatrix(); ////balon basket
	glTranslatef(1.2, 0.45+balonBasquet[1], 2.4);
	glRotatef(140,1,0,-1);
	glRotatef(balonBasquet[0],0.0, 1.0, 0.0);
	esfera(0.2, 30, 30, t_basket.GLindex);
	glPopMatrix();/////termina basket

	glPushMatrix(); ////balon blanco
	glTranslatef(0.6, 0.35, 2.7);
	glRotatef(225, 0, 0, 1);
	esfera(0.1, 30, 30, t_golf.GLindex);
	glPopMatrix();/////termina balon blanco


	glPushMatrix(); ////dado1
	glTranslatef(dado1[1]-1.7, 0.46, -dado1[1] + -0.2);
	glRotatef(dado1[0], 1, 0, 1);
	glRotatef(-45, 0, 1, 0);
	prisma6T(0.4, 0.4, 0.4, t_dado5.GLindex, t_dado4.GLindex, t_dado6.GLindex, t_dado2.GLindex, t_dado1.GLindex, t_dado3.GLindex);
	glPopMatrix(); //////termina dado1

	glPushMatrix(); ////dado2
	glTranslatef(dado1[1] + -1.55, 0.46, -dado1[1] + 0.5);
	glRotatef(dado1[0], 1, 0, 1);
	glRotatef(-45, 0, 1, 0);
	prisma6T(0.4, 0.4, 0.4, t_dado11.GLindex, t_dado33.GLindex, t_dado44.GLindex, t_dado22.GLindex, t_dado66.GLindex, t_dado55.GLindex);
	glPopMatrix(); //////termina dado2




	glPushMatrix(); /////marco ventana abajo
	glTranslatef(8.85, 0.4, 0.5);
	prisma6T(0.25, 0.25, 8.6125, t_metal.GLindex, t_metal.GLindex, t_metal.GLindex, t_metal.GLindex, t_metal.GLindex, t_metal.GLindex);
	glPopMatrix();//////////termina marco ventana abajo
	glPushMatrix(); /////marco ventana norte
	glTranslatef(8.85, 2.75, -3.625);
	prisma6T(5, 0.225, 0.25, t_metal.GLindex, t_metal.GLindex, t_metal.GLindex, t_metal.GLindex, t_metal.GLindex, t_metal.GLindex);
	glPopMatrix();//////////termina marco ventana norte
	glPushMatrix(); /////marco ventana sur
	glTranslatef(8.85, 2.75, 4.625);
	prisma6T(5, 0.225, 0.25, t_metal.GLindex, t_metal.GLindex, t_metal.GLindex, t_metal.GLindex, t_metal.GLindex, t_metal.GLindex);
	glPopMatrix();//////////termina marco ventana sur
	glPushMatrix(); /////marco ventana arriba
	glTranslatef(8.85, 5.125, 0.5);
	prisma6T(0.25, 0.25, 8.6125, t_metal.GLindex, t_metal.GLindex, t_metal.GLindex, t_metal.GLindex, t_metal.GLindex, t_metal.GLindex);
	glPushMatrix(); /////cilindro cortina norte
	glTranslatef(-0.1, 0, -4.0);
	glRotatef(90,0,0,1);
	cilindro(0.05, 0.3, 20, t_metal.GLindex);
	glPushMatrix(); /////esfera norte
	glTranslatef(0, 0.225, 0);
	esfera(0.08, 20, 20, t_metal.GLindex);
	glPopMatrix();//////////termina esfera norte
	glPopMatrix();//////////termina cilindro cortina norte
	glPushMatrix(); /////cilindro cortina medio
	glTranslatef(-0.10, 0, 0);
	glRotatef(90, 0, 0, 1);
	cilindro(0.05, 0.3, 20, t_metal.GLindex);
	glPushMatrix(); /////esfera medio
	glTranslatef(0, 0.225, 0);
	esfera(0.08, 20, 20, t_metal.GLindex);
	glPopMatrix();//////////termina esfera medio
	glPopMatrix();//////////termina cilindro cortina medio

	glPushMatrix(); /////cilindro cortina medio sur
	glTranslatef(-0.10, 0, 2.2);
	glRotatef(90, 0, 0, 1);
	cilindro(0.05, 0.3, 20, t_metal.GLindex);
	glPushMatrix(); /////esfera medio sur
	glTranslatef(0, 0.225, 0);
	esfera(0.08, 20, 20, t_metal.GLindex);
	glPopMatrix();//////////termina esfera medio sur
	glPopMatrix();//////////termina cilindro cortina medio sur

	glPushMatrix(); /////cilindro cortina medio norte
	glTranslatef(-0.10, 0, -2.2);
	glRotatef(90, 0, 0, 1);
	cilindro(0.05, 0.3, 20, t_metal.GLindex);
	glPushMatrix(); /////esfera medio norte
	glTranslatef(0, 0.225, 0);
	esfera(0.08, 20, 20, t_metal.GLindex);
	glPopMatrix();//////////termina esfera medio norte
	glPopMatrix();//////////termina cilindro cortina medio norte

	glPushMatrix(); /////cilindro cortina sur
	glTranslatef(-0.1, 0, 4.0);
	glRotatef(90, 0, 0, 1);
	cilindro(0.05, 0.3, 20, t_metal.GLindex);
	glPushMatrix(); /////esfera sur
	glTranslatef(0, 0.225, 0);
	esfera(0.08, 20, 20, t_metal.GLindex);
	glPopMatrix();//////////termina esfera sur
	glPopMatrix();//////////termina cilindro cortina sur
	glPopMatrix();//////////termina marco ventana arriba


	glPushMatrix(); /////Lampara viga 1
	glTranslatef(-4, 4.85, -4.25);
	glRotatef(180, 0, 0, 1);
	Hesfera(0.1, 25, 25, t_blanco3.GLindex);
	glPushMatrix(); /////Lampara vidrio
	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER, 0.1);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glTranslatef(0, 0, 0);
	Hesfera(0.15, 25, 25, t_vidrio2.GLindex);
	glDisable(GL_BLEND);
	glDisable(GL_ALPHA_TEST);
	glPopMatrix();///// termina Lampara vidrio
	glPopMatrix();///// termina Lampara

	glPushMatrix(); /////Lampara viga 1
	glTranslatef(-2, 4.85, -4.25);
	glRotatef(180, 0, 0, 1);
	Hesfera(0.1, 25, 25, t_blanco3.GLindex);
	glPushMatrix(); /////Lampara vidrio
	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER, 0.1);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glTranslatef(0, 0, 0);
	Hesfera(0.15, 25, 25, t_vidrio2.GLindex);
	glDisable(GL_BLEND);
	glDisable(GL_ALPHA_TEST);
	glPopMatrix();///// termina Lampara vidrio
	glPopMatrix();///// termina Lampara

	glPushMatrix(); /////Lampara viga 1
	glTranslatef(0, 4.85, -4.25);
	glRotatef(180, 0, 0, 1);
	Hesfera(0.1, 25, 25, t_blanco3.GLindex);
	glPushMatrix(); /////Lampara vidrio
	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER, 0.1);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glTranslatef(0, 0, 0);
	Hesfera(0.15, 25, 25, t_vidrio2.GLindex);
	glDisable(GL_BLEND);
	glDisable(GL_ALPHA_TEST);
	glPopMatrix();///// termina Lampara vidrio
	glPopMatrix();///// termina Lampara
	
	glPushMatrix(); /////Lampara viga 1
	glTranslatef(2, 4.85, -4.25);
	glRotatef(180, 0, 0, 1);
	Hesfera(0.1, 25, 25, t_blanco3.GLindex);
	glPushMatrix(); /////Lampara vidrio
	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER, 0.1);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glTranslatef(0, 0, 0);
	Hesfera(0.15, 25, 25, t_vidrio2.GLindex);
	glDisable(GL_BLEND);
	glDisable(GL_ALPHA_TEST);
	glPopMatrix();///// termina Lampara vidrio
	glPopMatrix();///// termina Lampara

	glPushMatrix(); /////Lampara viga 1
	glTranslatef(4, 4.85, -4.25);
	glRotatef(180, 0, 0, 1);
	Hesfera(0.1, 25, 25, t_blanco3.GLindex);
	glPushMatrix(); /////Lampara vidrio
	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER, 0.1);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glTranslatef(0, 0, 0);
	Hesfera(0.15, 25, 25, t_vidrio2.GLindex);
	glDisable(GL_BLEND);
	glDisable(GL_ALPHA_TEST);
	glPopMatrix();///// termina Lampara vidrio
	glPopMatrix();///// termina Lampara

	glPushMatrix(); /////Lampara viga 1
	glTranslatef(6, 4.85, -4.25);
	glRotatef(180, 0, 0, 1);
	Hesfera(0.1, 25, 25, t_blanco3.GLindex);
	glPushMatrix(); /////Lampara vidrio
	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER, 0.1);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glTranslatef(0, 0, 0);
	Hesfera(0.15, 25, 25, t_vidrio2.GLindex);
	glDisable(GL_BLEND);
	glDisable(GL_ALPHA_TEST);
	glPopMatrix();///// termina Lampara vidrio
	glPopMatrix();///// termina Lampara

	glPushMatrix(); /////Lampara viga 1
	glTranslatef(7.5, 4.85, -4.25);
	glRotatef(180, 0, 0, 1);
	Hesfera(0.1, 25, 25, t_blanco3.GLindex);
	glPushMatrix(); /////Lampara vidrio
	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER, 0.1);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glTranslatef(0, 0, 0);
	Hesfera(0.15, 25, 25, t_vidrio2.GLindex);
	glDisable(GL_BLEND);
	glDisable(GL_ALPHA_TEST);
	glPopMatrix();///// termina Lampara vidrio
	glPopMatrix();///// termina Lampara

	glPushMatrix(); /////Lampara viga 2
	glTranslatef(0, 4.85, 1.775);
	glRotatef(180, 0, 0, 1);
	Hesfera(0.1, 25, 25, t_blanco3.GLindex);
	glPushMatrix(); /////Lampara vidrio
	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER, 0.1);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glTranslatef(0, 0, 0);
	Hesfera(0.15, 25, 25, t_vidrio2.GLindex);
	glDisable(GL_BLEND);
	glDisable(GL_ALPHA_TEST);
	glPopMatrix();///// termina Lampara vidrio
	glPopMatrix();///// termina Lampara

	glPushMatrix(); /////Lampara viga2
	glTranslatef(2, 4.85, 1.775);
	glRotatef(180, 0, 0, 1);
	Hesfera(0.1, 25, 25, t_blanco3.GLindex);
	glPushMatrix(); /////Lampara vidrio
	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER, 0.1);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glTranslatef(0, 0, 0);
	Hesfera(0.15, 25, 25, t_vidrio2.GLindex);
	glDisable(GL_BLEND);
	glDisable(GL_ALPHA_TEST);
	glPopMatrix();///// termina Lampara vidrio
	glPopMatrix();///// termina Lampara

	glPushMatrix(); /////Lampara viga 2
	glTranslatef(4, 4.85, 1.775);
	glRotatef(180, 0, 0, 1);
	Hesfera(0.1, 25, 25, t_blanco3.GLindex);
	glPushMatrix(); /////Lampara vidrio
	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER, 0.1);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glTranslatef(0, 0, 0);
	Hesfera(0.15, 25, 25, t_vidrio2.GLindex);
	glDisable(GL_BLEND);
	glDisable(GL_ALPHA_TEST);
	glPopMatrix();///// termina Lampara vidrio
	glPopMatrix();///// termina Lampara
	
	glPushMatrix(); /////Lampara viga 2
	glTranslatef(6, 4.85, 1.775);
	glRotatef(180, 0, 0, 1);
	Hesfera(0.1, 25, 25, t_blanco3.GLindex);
	glPushMatrix(); /////Lampara vidrio
	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER, 0.1);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glTranslatef(0, 0, 0);
	Hesfera(0.15, 25, 25, t_vidrio2.GLindex);
	glDisable(GL_BLEND);
	glDisable(GL_ALPHA_TEST);
	glPopMatrix();///// termina Lampara vidrio
	glPopMatrix();///// termina Lampara

	glPushMatrix(); /////Lampara viga 2
	glTranslatef(8, 4.85, 1.775);
	glRotatef(180, 0, 0, 1);
	Hesfera(0.1, 25, 25, t_blanco3.GLindex);
	glPushMatrix(); /////Lampara vidrio
	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER, 0.1);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glTranslatef(0, 0, 0);
	Hesfera(0.15, 25, 25, t_vidrio2.GLindex);
	glDisable(GL_BLEND);
	glDisable(GL_ALPHA_TEST);
	glPopMatrix();///// termina Lampara vidrio
	glPopMatrix();///// termina Lampara

	glPushMatrix(); /////Lampara viga 2
	glTranslatef(-2, 4.85, 1.775);
	glRotatef(180, 0, 0, 1);
	Hesfera(0.1, 25, 25, t_blanco3.GLindex);
	glPushMatrix(); /////Lampara vidrio
	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER, 0.1);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glTranslatef(0, 0, 0);
	Hesfera(0.15, 25, 25, t_vidrio2.GLindex);
	glDisable(GL_BLEND);
	glDisable(GL_ALPHA_TEST);
	glPopMatrix();///// termina Lampara vidrio
	glPopMatrix();///// termina Lampara

	glPushMatrix(); /////Lampara viga 2
	glTranslatef(-4, 4.85, 1.775);
	glRotatef(180, 0, 0, 1);
	Hesfera(0.1, 25, 25, t_blanco3.GLindex);
	glPushMatrix(); /////Lampara vidrio
	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER, 0.1);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glTranslatef(0, 0, 0);
	Hesfera(0.15, 25, 25, t_vidrio2.GLindex);
	glDisable(GL_BLEND);
	glDisable(GL_ALPHA_TEST);
	glPopMatrix();///// termina Lampara vidrio
	glPopMatrix();///// termina Lampara


	glPushMatrix(); /////cortina
	glBindTexture(GL_TEXTURE_2D, t_cortina.GLindex);
	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER, 0.1);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glTranslatef(8.6, 2.95, 0.5);
	prisma6T(4.5, 0.1, 8.25, t_vacia.GLindex, t_cortina.GLindex, t_vacia.GLindex, t_vacia.GLindex, t_vacia.GLindex, t_vacia.GLindex);
	glDisable(GL_BLEND);
	glDisable(GL_ALPHA_TEST);
	glPopMatrix();//////////termina cortina
	
	glPushMatrix(); /////ventana 
	glBindTexture(GL_TEXTURE_2D, t_vidrio3.GLindex);
	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER, 0.1);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glTranslatef(8.85, 2.75, 0.5);
	prisma6T(4.5, 0.1, 8.6125, t_vacia.GLindex, t_vidrio3.GLindex, t_vacia.GLindex, t_vacia.GLindex, t_vacia.GLindex, t_vacia.GLindex);
	glDisable(GL_BLEND);
	glDisable(GL_ALPHA_TEST);
	glPopMatrix();//////////termina ventana 
	
	
	
	
	
	
	glPopMatrix();///////POP DE TODO





	glDisable(GL_TEXTURE_2D);
	renderBitmapCharacter(-11, 12.0, -14.0, (void *)font, ""); ////practica 10000
	renderBitmapCharacter(-11, 10.5, -14, (void *)font, "");
	glEnable(GL_TEXTURE_2D);

	glutSwapBuffers();

}

void reshape(int width, int height)   // Creamos funcion Reshape
{
	if (height == 0)										// Prevenir division entre cero
	{
		height = 1;
	}

	glViewport(0, 0, width, height);

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Tipo de Vista

	glFrustum(-0.1, 0.1, -0.1, 0.1, 0.1, 500.0);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	glLoadIdentity();
}

void animacion(){
	////////////////////Aniamcion 1//////////////////////
	if (play) {
		//GiroBalon
		if (balonBasquet[0]<=360) {
			balonBasquet[0]+=10;
		}else {
			balonBasquet[0] = 0;			
		}	
		
		//Primer Rebote
		if (banderas[0]) {
			if (balonBasquet[1] > 0.0)
				balonBasquet[1] -= 0.1;
			else {
				banderas[0] = false;
				banderas[1] = true;
			}
		}
		//Sube primera vez
		if (banderas[1]) {
			if (balonBasquet[1] <= 2.0)
				balonBasquet[1] += 0.09;
			else {

				banderas[1] = false;
				banderas[2] = true;
			}
		}
		 //Segundo Rebote
		if (banderas[2]) {
			if (balonBasquet[1] > 0.0)
				balonBasquet[1] -= 0.08;
			else {
				banderas[2] = false;
				banderas[3] = true;
			}
		}
		 //Sube segunda vez
		if (banderas[3]) {
			if (balonBasquet[1] <= 1.5)
				balonBasquet[1] += 0.08;
			else {

				banderas[3] = false;
				banderas[4] = true;
			}
		}
		 //Tercer Rebote
		if (banderas[4]) {
			if (balonBasquet[1] > 0.0)
				balonBasquet[1] -= 0.06;
			else {
				banderas[4] = false;
				banderas[5] = true;
			}
		}
		//Sube tercera vez
		if (banderas[5]) {
			if (balonBasquet[1] <= 0.5)
				balonBasquet[1] += 0.05;
			else {

				banderas[5] = false;
				banderas[6] = true;
			}
		}
		//Cuarto Rebote
		if (banderas[6]) {
			if (balonBasquet[1] > 0.0)
				balonBasquet[1] -= 0.04;
			else {
				banderas[6] = false;
				play = false;
			}
		}
	}
	////////////////////Aniamcion 2//////////////////////
	if (play2) {		
		//Avanza
		if (banderas[7]) {
			if (balonFut[1] < 6.0){
				balonFut[1] += 0.1;
			//GiroBalon Fut
			if (balonFut[0] >= 0) {
				balonFut[0] -= 10;
			}
			else {
				balonFut[0] = 360;
			}
			}else {
				banderas[7] = false;
				banderas[8] = true;
			}
		}
		//Regresa
		if (banderas[8]) {
			if (balonFut[1] > 0.0){
				balonFut[1] -= 0.08;
				//GiroBalon
				if (balonFut[0] <= 360) {
					balonFut[0] += 10;
				}
				else {
					balonFut[0] = 0;
				}


			}else {

				banderas[8] = false;
				play2 = false;
			}
		}

	}
	////////////////////Aniamcion 3//////////////////////
	if (play3) {
		if (dado1[1] < 2.3) {
			dado1[1] += 0.05;
			//Giro Dados
			if (dado1[0] >= -360) {
				dado1[0] -= 10;
			}
			else {
				dado1[0] = 0;
			}
		}
		else {
			play3 = false;
		}		
	}
	///////////////////Animacion 4//////////////////////
	if (play4) {
		if (dado1[1] >= 0.05) {
			dado1[1] -= 0.05;
			//Giro Dados
			if (dado1[0] <= 360) {
				dado1[0] += 10;
			}
			else {
				dado1[0] = 0;
			}
		}
		else {
			play4 = false;
		}
	}


	glutPostRedisplay();
}

void keyboard(unsigned char key, int x, int y)  // Create Keyboard Function
{
	switch (key) {
	case 'w':   //Movimientos de camara
	case 'W':
		pos_camZ += 0.5f;
		//eye_camZ -= 0.5f;
		break;

	case 's':
	case 'S':
		pos_camZ -= 0.5f;
		//eye_camZ += 0.5f;
		break;

	case 'a':
	case 'A':
		pos_camX += 0.5f;
		//eye_camX -= 0.5f;
		break;
	case 'd':
	case 'D':
		pos_camX -= 0.5f;
		//eye_camX += 0.5f;
		break;

	case 'l':
	case 'L':
		play=!play;
		balonBasquet[1] = 3.0;
		banderas[0] = true;
		break;

	case 'k':
	case 'K':
		play2 = !play2;
		banderas[7] = true;
		break;

	case 'j':
	case 'J':
		play3=!play3;
		break;

	case 'h':
	case 'H':
		play4 = !play4;
		break;

	case 27:        // Cuando Esc es presionado...
		exit(0);   // Salimos del programa
		break;
	default:        // Cualquier otra
		break;
	}
	glutPostRedisplay();
}

void arrow_keys(int a_keys, int x, int y)  // Funcion para manejo de teclas especiales (arrow keys)
{
	switch (a_keys) {
	case GLUT_KEY_PAGE_UP:
		pos_camY -= 0.5f;
		//eye_camY += 0.5f;
		break;

	case GLUT_KEY_PAGE_DOWN:
		pos_camY += 0.5f;
		//eye_camY -= 0.5f;
		break;

	case GLUT_KEY_UP:     // Presionamos tecla ARRIBA...
		eye_camX = (eye_camX - 5) % 360;
		break;

	case GLUT_KEY_DOWN:               // Presionamos tecla ABAJO...
		eye_camX = (eye_camX + 5) % 360;
		break;

	case GLUT_KEY_LEFT:
		eye_camY = (eye_camY - 5) % 360;
		break;

	case GLUT_KEY_RIGHT:
		eye_camY = (eye_camY + 5) % 360;
		break;
	default:
		break;
	}
	glutPostRedisplay();
}


int main(int argc, char** argv)   // Main Function
{
	glutInit(&argc, argv); // Inicializamos OpenGL
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Doble )
	glutInitWindowSize(1000, 800);	// Tamaño de la Ventana
	glutInitWindowPosition(300, 0);	//Posicion de la Ventana
	glutCreateWindow("Practica 8"); // Nombre de la Ventana
									//glutFullScreen     ( );         // Full Screen
	InitGL();						// Parametros iniciales de la aplicacion
	glutDisplayFunc(display);  //Indicamos a Glut función de dibujo
	glutReshapeFunc(reshape);	//Indicamos a Glut función en caso de cambio de tamano
	glutKeyboardFunc(keyboard);	//Indicamos a Glut función de manejo de teclado
	glutSpecialFunc(arrow_keys);	//Otras
	glutIdleFunc(animacion);
	glutMainLoop();          // 

	return 0;
}