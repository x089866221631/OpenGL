//#include<glut.h>
//
//
//// ��ʼ������
//void init() {
//    GLfloat ambient[] = { 0.0, 0.0, 0.0, 1.0 };
//    GLfloat diffuse[] = { 1.0, 1.0, 1.0, 1.0 };
//    //    GLfloat specular[] = { 1.0, 1.0, 1.0, 1.0 };
//    GLfloat position[] = { 0.0, 0, -1.0, 0.0 };
//    glEnable(GL_DEPTH_TEST);
//    glDepthFunc(GL_LESS);
//    glLightfv(GL_LIGHT0, GL_AMBIENT, ambient);
//    glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse);
//    //    glLightfv(GL_LIGHT0, GL_SPECULAR, specular);
//    glLightfv(GL_LIGHT0, GL_POSITION, position);
//    glEnable(GL_LIGHTING);
//    glEnable(GL_LIGHT0);
//    glClearColor(0.0, 0.1, 0.1, 0.0);
//}
//
//
//// ��ͼ�ص�����
//void display() {
//    GLfloat no_mat[] = { 0.0, 0.0, 0.0, 1.0 };
//    GLfloat mat_ambient[] = { 0.7, 0.7, 0.7, 1.0 };
//    GLfloat mat_ambient_color[] = { 0.8, 0.8, 0.2, 1.0 };
//    GLfloat mat_diffuse[] = { 0.1, 0.5, 0.8, 1.0 };
//    GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
//    GLfloat no_shininess[] = { 0.0 };
//    GLfloat low_shininess[] = { 5.0 };
//    GLfloat high_shininess[] = { 100.0 };
//    GLfloat mat_emission[] = { 0.3, 0.2, 0.2, 0.0 };
//    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//
//
//
//    /* ��һ�е�һ�л��Ƶ���������������޻�����;���⡣*/
//    glPushMatrix();
//    glTranslatef(-3.75, 3.0, 0.0);
//    glMaterialfv(GL_FRONT, GL_AMBIENT, no_mat);
//    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
//    glMaterialfv(GL_FRONT, GL_SPECULAR, no_mat);
//    glMaterialfv(GL_FRONT, GL_SHININESS, no_shininess);
//    glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
//    glutSolidSphere(1.0, 20, 20);
//    glPopMatrix();
//
//
//
//    /* ��һ�еڶ��л��Ƶ������������;���⣬���е͸߹⣬���޻����� ��*/
//    glPushMatrix();
//    glTranslatef(-1.25, 3.0, 0.0);
//    glMaterialfv(GL_FRONT, GL_AMBIENT, no_mat);
//    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
//    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
//    glMaterialfv(GL_FRONT, GL_SHININESS, low_shininess);
//    glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
//    glutSolidSphere(1.0, 20, 20);
//
//    glPopMatrix();
//
//
//
//    /* ��һ�е����л��Ƶ������������;���⣬���к����ĸ߹⣬���޻����� ��*/
//    glPushMatrix();
//    glTranslatef(1.25, 3.0, 0.0);
//    glMaterialfv(GL_FRONT, GL_AMBIENT, no_mat);
//    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
//    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
//    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
//    glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
//    glutSolidSphere(1.0, 20, 20);
//    glPopMatrix();
//
//
//    /* ��һ�е����л��Ƶ������������ͷ���⣬���޻����;��淴��⡣*/
//    glPushMatrix();
//    glTranslatef(3.75, 3.0, 0.0);
//    glMaterialfv(GL_FRONT, GL_AMBIENT, no_mat);
//    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
//    glMaterialfv(GL_FRONT, GL_SPECULAR, no_mat);
//    glMaterialfv(GL_FRONT, GL_SHININESS, no_shininess);
//    glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
//    glutSolidSphere(1.0, 20, 20);
//    glPopMatrix();
//
//
//    /* �ڶ��е�һ�л��Ƶ������������ͻ����⣬�����淴��⡣*/
//    glPushMatrix();
//    glTranslatef(-3.75, 0.0, 0.0);
//    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
//    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
//    glMaterialfv(GL_FRONT, GL_SPECULAR, no_mat);
//    glMaterialfv(GL_FRONT, GL_SHININESS, no_shininess);
//    glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
//    glutSolidSphere(1.0, 20, 20);
//    glPopMatrix();
//
//
//    /* �ڶ��еڶ��л��Ƶ�����������⡢������;���⣬���е͸߹⡣*/
//    glPushMatrix();
//    glTranslatef(-1.25, 0.0, 0.0);
//    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
//    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
//    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
//    glMaterialfv(GL_FRONT, GL_SHININESS, low_shininess);
//    glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
//    glutSolidSphere(1.0, 20, 20);
//    glPopMatrix();
//
//
//    /* �ڶ��е����л��Ƶ�����������⡢������;���⣬���к����ĸ߹⡣*/
//    glPushMatrix();
//    glTranslatef(1.25, 0.0, 0.0);
//    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
//    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
//    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
//    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
//    glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
//    glutSolidSphere(1.0, 20, 20);
//    glPopMatrix();
//
//
//    /* �ڶ��е����л��Ƶ�����������⡢������ͷ���⣬���޾���⡣*/
//    glPushMatrix();
//    glTranslatef(3.75, 0.0, 0.0);
//    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
//    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
//    glMaterialfv(GL_FRONT, GL_SPECULAR, no_mat);
//    glMaterialfv(GL_FRONT, GL_SHININESS, no_shininess);
//    glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
//    glutSolidSphere(1.0, 20, 20);
//    glPopMatrix();
//
//
//    /* �����е�һ�л��Ƶ�����������������ɫ�Ļ����⣬���޾���⡣*/
//    glPushMatrix();
//    glTranslatef(-3.75, -3.0, 0.0);
//    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient_color);
//    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
//    glMaterialfv(GL_FRONT, GL_SPECULAR, no_mat);
//    glMaterialfv(GL_FRONT, GL_SHININESS, no_shininess);
//    glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
//    glutSolidSphere(1.0, 20, 20);
//    glPopMatrix();
//
//
//    /* �����еڶ��л��Ƶ�����������������ɫ�Ļ������Լ�����⣬���е͸߹⡣*/
//    glPushMatrix();
//    glTranslatef(-1.25, -3.0, 0.0);
//    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient_color);
//    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
//    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
//    glMaterialfv(GL_FRONT, GL_SHININESS, low_shininess);
//    glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
//    glutSolidSphere(1.0, 20, 20);
//    glPopMatrix();
//
//
//    /* �����е����л��Ƶ�����������������ɫ�Ļ������Լ�����⣬���к����ĸ߹⡣*/
//    glPushMatrix();
//    glTranslatef(1.25, -3.0, 0.0);
//    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient_color);
//    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
//    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
//    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
//    glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
//    glutSolidSphere(1.0, 20, 20);
//    glPopMatrix();
//
//
//    /* �����е����л��Ƶ�����������������ɫ�Ļ������Լ�����⣬���޾���⡣*/
//    glPushMatrix();
//    glTranslatef(3.75, -3.0, 0.0);
//    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient_color);
//    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
//    glMaterialfv(GL_FRONT, GL_SPECULAR, no_mat);
//    glMaterialfv(GL_FRONT, GL_SHININESS, no_shininess);
//    glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
//    glutSolidSphere(1.0, 20, 20);
//    glPopMatrix();
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
//    gluLookAt(0, 0, 10, 0, 0, -1, 0, 1, 0);
//}
//
//
//int main(int argc, const char* argv[]) {
//    // ��ʼ����ʾģʽ
//    glutInit(&argc, const_cast<char**>(argv));
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
//
//
//    // ��ʼ������
//    glutInitWindowSize(500, 500);
//    glutInitWindowPosition(100, 100);
//    glutCreateWindow(argv[0]);
//
//
//    init();
//    glutReshapeFunc(reshape);
//    glutDisplayFunc(display);
//
//    // ��ʼ��ѭ������
//    glutMainLoop();
//    return 0;
//}
