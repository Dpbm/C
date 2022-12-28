#include <GL/freeglut.h>
#include <GL/gl.h>

#define HEIGHT 400
#define WIDTH 400

void draw(void){
  glClearColor(0, 0, 1, 0);
  glClear(GL_COLOR_BUFFER_BIT);
  glFlush();

}

int main(int argc, char** argv){
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE);
  glutInitWindowSize(WIDTH, HEIGHT);
  glutCreateWindow("Hello world!");
  glutDisplayFunc(draw);
  glutMainLoop();
  return 0;
}
