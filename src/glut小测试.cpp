//#include<iostream>
//#include<glut.h>
//#include<math.h>
//const int n = 6;
//const GLfloat R = 0.5f;
//const GLfloat Pi = 3.1415926536f;
//void myDisplay(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glColor3f(0.3f, 1.0f, 0.1f);
//	glRectf(-0.5f, -0.5f, 0.5f, 0.5f);
//	glFlush();
//}
//void myPolygon(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glColor3f(0.5f, 3.0f, 1.5f);
//	glPolygonMode(GL_FRONT, GL_FILL);
//	glPolygonMode(GL_BACK, GL_LINE);
//	glFrontFace(GL_CCW);//ccw��ʱ��
//	glBegin(GL_POLYGON);
//	glVertex2f(-0.5f, -0.5f);
//	glVertex2f( 0.0f, -0.5f);
//	glVertex2f( 0.0f,  0.0f);
//	glVertex2f(-0.5f,  0.0f);
//	glEnd();
//	glBegin(GL_POLYGON);
//	glVertex2f(0.0f, 0.0f);
//	glVertex2f(0.0f, 0.5f);
//	glVertex2f(0.5f, 0.5f);
//	glVertex2f(0.5f, 0.0f);
//	glEnd();
//	glFlush();
//}
//void myClearColor(void)
//{
//	glClearColor(0.0f, 1.0f, 0.0f, 1.0f);
//	glClear(GL_COLOR_BUFFER_BIT);
//	glFlush();
//}
//void mypoint(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glPointSize(5.0f);
//	glBegin(GL_POINT);
//	glVertex2f(0.0f, 0.0f);
//	glVertex2f(0.5f, 0.5f);
//	glEnd();
//	glFlush();
//}
//void myCircle(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	
//	glBegin(GL_TRIANGLE_STRIP);
//	glVertex2i(50, 80);
//	glVertex2i(50, 50);
//	glVertex2i(100, 80);
//	glVertex2i(100, 30);
//	glVertex2i(130, 95);
//	glEnd();
//	glFlush();
//}
//int main(int argc, char* argv[])
//{
//	glutInit(&argc,argv);
//	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
//	glutInitWindowPosition(100, 100);
//	glutInitWindowSize(400, 400);
//	glutCreateWindow("hello,world");
//	glutDisplayFunc(&myCircle);
//	glutMainLoop();
//	return 0;
//}

//#include<iostream>
//#include<glut.h>
//void init()
//{
//	glClearColor(0.1f, 0.1f, 0.4f, 0.0f);
//	glShadeModel(GL_SMOOTH);
//}
//void display3()
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glBegin(GL_TRIANGLES);
//	glColor3f(1.0f, 0.0f, 0.0f);
//	glVertex3f(-1.0f, -1.0f, -5.0f);
//	glColor3f(0.0f, 1.0f, 0.0f);
//	glVertex3f(1.0f, -1.0f, -5.0f);
//	glColor3f(0.0f, 0.0f, 1.0f);
//	glVertex3f(0.0f, 1.0f, -5.0f);
//	glEnd();
//	glFlush();
//}
//void reshape(int w, int h)
//{
//	glViewport(0, 0, w, h);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluPerspective(60.0, (GLfloat)w / (GLfloat)h, 0.1, 100000.0);
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//}

//
//// ��ͼ�ص�����
//void display() 
//{
//    // ���֮ǰ֡����
//    glClear(GL_COLOR_BUFFER_BIT);
//    DrawMyObjects();
//    // ִ�л�ͼ����
//    glFlush();
//}
//
//int main(int argc,const char*argv[])
//{
//	glutInit(&argc, const_cast<char**>(argv));
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//
//
//	glutInitWindowSize(500, 500);
//	glutInitWindowPosition(100, 100);
//	glutCreateWindow(argv[0]);
//
//	init();
//	glutReshapeFunc(reshape);
//	glutDisplayFunc(DrawMyObjects);
//	glutMainLoop();
//	return 0;
//}

//
//#include<glut.h>
//
//
//// ��ʼ������
//void init() {
//    glClearColor(0.1, 0.1, 0.5, 0.0);
//    glShadeModel(GL_SMOOTH);
//}
//
//
//void DrawMyObjects(void) {
//    /* draw some points */
//    glBegin(GL_POINTS);
//    glColor3f(1.0, 0.0, 0.0);
//    glVertex2f(-10.0, 11.0);
//    glColor3f(1.0, 1.0, 0.0);
//    glVertex2f(-9.0, 10.0);
//    glColor3f(0.0, 1.0, 1.0);
//    glVertex2f(-8.0, 12.0);
//    glEnd();
//
//
//    /* draw some line_segments */
//    glBegin(GL_LINES);
//    glColor3f(1.0, 1.0, 0.0);
//    glVertex2f(-11.0, 8.0);
//    glVertex2f(-7.0, 7.0);
//    glColor3f(1.0, 0.0, 1.0);
//    glVertex2f(-11.0, 9.0);
//    glVertex2f(-8.0, 6.0);
//    glEnd();
//
//
//    /* draw one opened_line */
//    glBegin(GL_LINE_STRIP);
//    glColor3f(0.0, 1.0, 0.0);
//    glVertex2f(-3.0, 9.0);
//    glVertex2f(2.0, 6.0);
//    glVertex2f(3.0, 8.0);
//    glVertex2f(-2.5, 6.5);
//    glEnd();
//
//
//    /* draw one closed_line */
//    glBegin(GL_LINE_LOOP);
//    glColor3f(0.0, 1.0, 1.0);
//    glVertex2f(7.0, 7.0);
//    glVertex2f(8.0, 8.0);
//    glVertex2f(9.0, 6.5);
//    glVertex2f(10.3, 7.5);
//    glVertex2f(11.5, 6.0);
//    glVertex2f(7.5, 6.0);
//    glEnd();
//
//
//    /* draw one filled_polygon */
//    glBegin(GL_POLYGON);
//    glColor3f(0.5, 0.3, 0.7);
//    glVertex2f(-7.0, 2.0);
//    glVertex2f(-8.0, 3.0);
//    glVertex2f(-10.3, 0.5);
//    glVertex2f(-7.5, -2.0);
//    glVertex2f(-6.0, -1.0);
//    glEnd();
//
//
//    /* draw some filled_quandrangles */
//    glBegin(GL_QUADS);
//    glColor3f(0.7, 0.5, 0.2);
//    glVertex2f(0.0, 2.0);
//    glVertex2f(-1.0, 3.0);
//    glVertex2f(-3.3, 0.5);
//    glVertex2f(-0.5, -1.0);
//    glColor3f(0.5, 0.7, 0.2);
//    glVertex2f(3.0, 2.0);
//    glVertex2f(2.0, 3.0);
//    glVertex2f(0.0, 0.5);
//    glVertex2f(2.5, -1.0);
//    glEnd();
//
//    /* draw some filled_strip_quandrangles */
//    glBegin(GL_QUAD_STRIP);
//    glVertex2f(6.0, -2.0);
//    glVertex2f(5.5, 1.0);
//    glVertex2f(8.0, -1.0);
//    glColor3f(0.8, 0.0, 0.0);
//    glVertex2f(9.0, 2.0);
//    glVertex2f(11.0, -2.0);
//    glColor3f(0.0, 0.0, 0.8);
//    glVertex2f(11.0, 2.0);
//    glVertex2f(13.0, -1.0);
//    glColor3f(0.0, 0.8, 0.0);
//    glVertex2f(14.0, 1.0);
//    glEnd();
//
//
//    /* draw some filled_triangles */
//
//    glBegin(GL_TRIANGLES);
//    glColor3f(0.2, 0.5, 0.7);
//    glVertex2f(-10.0, -5.0);
//    glVertex2f(-12.3, -7.5);
//    glVertex2f(-8.5, -6.0);
//    glColor3f(0.2, 0.7, 0.5);
//    glVertex2f(-8.0, -7.0);
//    glVertex2f(-7.0, -4.5);
//    glVertex2f(-5.5, -9.0);
//    glEnd();
//
//    /* draw some filled_strip_triangles */
//    glBegin(GL_TRIANGLE_STRIP);
//    glVertex2f(-1.0, -8.0);
//    glVertex2f(-2.5, -5.0);
//    glColor3f(0.8, 0.8, 0.0);
//    glVertex2f(1.0, -7.0);
//    glColor3f(0.0, 0.8, 0.8);
//    glVertex2f(2.0, -4.0);
//    glColor3f(0.8, 0.0, 0.8);
//    glVertex2f(4.0, -6.0);
//    glEnd();
//
//
//    /* draw some filled_fan_triangles */
//    glBegin(GL_TRIANGLE_FAN);
//    glVertex2f(8.0, -6.0);
//    glVertex2f(10.0, -3.0);
//    glColor3f(0.8, 0.2, 0.5);
//    glVertex2f(12.5, -4.5);
//    glColor3f(0.2, 0.5, 0.8);
//    glVertex2f(13.0, -7.5);
//    glColor3f(0.8, 0.5, 0.2);
//    glVertex2f(10.5, -9.0);
//    glEnd();
//}
//
//// ��ͼ�ص�����
//void display() {
//    // ���֮ǰ֡����
//    glClear(GL_COLOR_BUFFER_BIT);
//    DrawMyObjects();
//    // ִ�л�ͼ����
//    glFlush();
//}
//
//
//// ���ڴ�С�仯�ص�����
//void reshape(int w, int h) {
//    glViewport(0, 0, w, h);
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    gluPerspective(60.0, (GLfloat)w / (GLfloat)h, 0.1, 100000.0);
//    glMatrixMode(GL_MODELVIEW);
//    glLoadIdentity();
//    gluLookAt(0, 0, 25, 0, 0, -1, 0, 1, 0);
//}
//
//int main(int argc, const char* argv[]) {
//    // ��ʼ����ʾģʽ
//    glutInit(&argc, const_cast<char**>(argv));
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//
//    // ��ʼ������
//    glutInitWindowSize(500, 500);
//    glutInitWindowPosition(100, 100);
//    glutCreateWindow(argv[0]);
//
//    init();
//    glutReshapeFunc(reshape);
//    glutDisplayFunc(display);
//
//    // ��ʼ��ѭ������
//    glutMainLoop();
//    return 0;
//}



//#include <glut.h>
//#include<iostream>
//// ͼ�λ��ƺ���
//void myDrawing(void) 
//{
//	//�����ɫ������
//	printf("$\n");
//	glClearColor(0.0, 0.0, 1.0f, 0.0);    //���ñ��������ɫ
//	glClear(GL_COLOR_BUFFER_BIT);         //ִ�����
//	
//	//���߿���ʽ����һ�����
//	glRotatef(75, 1.0f, 1.0f, 1.0f);//��ת -- <���Ŵ���>
//	
//	/*glutWireTeapot(0.5f);  */        //��
//	/*glutWireTetrahedron();*///������
//	/*glutWireSphere(0.5f, 24, 24);   */      //�߿�����
//	glutWireTorus(0.25f, 0.6, 30, 25);
//	/*glutWireCube(0.5f);*/
//	/*glutWireCone(1, 1, 5, 3);*/
//	//�߿�����
//	glFlush(); //ǿ�ƻ�ͼ
//}
//// ������
//using namespace std;
//int main(void)
//{
//	//��GLUT���г�ʼ��
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//	//����һ����Ϊ"Hello"�Ļ��ƴ���, //ʹ��ȱʡֵ
//	glutInitWindowPosition(100, 100);
//	glutInitWindowSize(500, 500);
//	glutCreateWindow("GLUT TEST");
//	//ע����ƺ���
//	glutDisplayFunc(myDrawing);
//	//�����ɫ������ ----- �������ﲻ������
//	//glClearColor(0.0, 0.0, 1.0f, 0.0); //���ñ��������ɫ
//	//glClear(GL_COLOR_BUFFER_BIT);
//	//����Ϣѭ��
//	glutMainLoop(); //������Ϣѭ��
//	return 0;
//}
//

//#include<glut.h>
//#include<iostream>
//void display(void)
//{
//	glClearColor(0.0, 0.0, 1.0, 1.0);
//	glClear(GL_COLOR_BUFFER_BIT);
//	glRotatef(45, 1.0f, 1.0f, 1.0f);
//	glutWireTeapot(0.5f);
//	glFlush();
//}
//int main(int argc, const char* argv[])
//{
//	glutInit(&argc, const_cast<char**>(argv));
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//	glutInitWindowPosition(100, 100);
//	glutInitWindowSize(500, 500);
//	glutCreateWindow(argv[0]);
//	glutDisplayFunc(&display);
//	glutMainLoop();
//	return 0;
//}

//#include<iostream>
//#include<glut.h>
//void display(void)
//{
//	glClearColor(0.0, 0.0, 1.0, 1.0);
//	glClear(GL_COLOR_BUFFER_BIT);
//	glRotatef(45, 1.0f, 1.0f, 1.0f);
//	glutWireTeapot(0.5f);
//	glFlush();
//}
//int main(int argc,char*argv[])
//{
//	glutInit(&argc, static_cast<char**>(argv));
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//	glutInitWindowPosition(100, 100);
//	glutInitWindowSize(600, 500);
//	glutCreateWindow("title");
//	glutDisplayFunc(&display);
//	glutMainLoop();
//	return 0;
//}


