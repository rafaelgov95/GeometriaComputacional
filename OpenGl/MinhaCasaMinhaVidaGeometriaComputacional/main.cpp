#include <GL/glut.h>
void casa(){
    //Telhado
    glColor3f(0.0f, 0.0f, 1.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(-6,9);
    glVertex2f(-4,4);
    glVertex2f(-8,4);
    glEnd();
    glColor3f(1.0f, 0.0f, 1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-6,9);
    glVertex2f(-4,4);
    glVertex2f(9,4);
    glVertex2f(9,9);
    glEnd();
    glColor3f(0.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-8,-8);
    glVertex2f(-8,4);
    glVertex2f(9,4);
    glVertex2f(9,-8);
    glEnd();
    glColor3f(0.0f, 0.0f, 1.0f);
    // Desenha as "linhas" da janela
    glBegin(GL_LINES);
    glVertex2f(-3.0f,-4.0f);
    glVertex2f(-3.0f,1.0f);
    glVertex2f(3.0f,1.0f);
    glVertex2f(3.0f,-4.0f);
    glVertex2f(-3.0f,1.0f);
    glVertex2f(3.0f,1.0f);
    glVertex2f(-3.0f,-4.0f);
    glVertex2f(3.0f,-4.0f);
    glVertex2f(3.0f,-1.5f);
    glVertex2f(-3.0f,-1.5f);
    glVertex2f(0.0f,1.0f);
    glVertex2f(0.0f,-4.0f);
    glEnd();
    glColor3f(2.0f, 5.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(-7.5,-8);
    glVertex2f(-7.5,-1);
    glVertex2f(-5,-1);
    glVertex2f(-5,-8);
    glEnd();
    glColor3f(1.0f, 0.0f,45.0f);
    glPointSize(10.0f); // aumenta o tamanho dos pontos
    glBegin(GL_POINTS);
    glVertex2f(-7,-5);

    glEnd();
}

void bufferCena(){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f, 0.0f, 0.0f); // vermelho
    glLineWidth(1.0f);
    glBegin(GL_LINES);
    glVertex2f(-10,0);
    glVertex2f( 10,0);
    glVertex2f(0,10);
    glVertex2f(0, -10);
    glEnd();
    casa();
    glEnd();
    glutSwapBuffers();
}
void Inicializa(){
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10,10,-10,10);
    glMatrixMode(GL_MODELVIEW);
}
int main(int argc, char** argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(320,249);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Minha Casa Minha Vida");
    glutDisplayFunc(bufferCena);
    Inicializa();
    glutMainLoop();

}
