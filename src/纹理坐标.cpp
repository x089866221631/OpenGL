//#include<glut.h>
//
//
//// 初始化参数
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
//// 绘图回调函数
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
//    /* 第一行第一列绘制的球仅有漫反射光而无环境光和镜面光。*/
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
//    /* 第一行第二列绘制的球有漫反射光和镜面光，并有低高光，而无环境光 。*/
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
//    /* 第一行第三列绘制的球有漫反射光和镜面光，并有很亮的高光，而无环境光 。*/
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
//    /* 第一行第四列绘制的球有漫反射光和辐射光，而无环境和镜面反射光。*/
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
//    /* 第二行第一列绘制的球有漫反射光和环境光，而镜面反射光。*/
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
//    /* 第二行第二列绘制的球有漫反射光、环境光和镜面光，且有低高光。*/
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
//    /* 第二行第三列绘制的球有漫反射光、环境光和镜面光，且有很亮的高光。*/
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
//    /* 第二行第四列绘制的球有漫反射光、环境光和辐射光，而无镜面光。*/
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
//    /* 第三行第一列绘制的球有漫反射光和有颜色的环境光，而无镜面光。*/
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
//    /* 第三行第二列绘制的球有漫反射光和有颜色的环境光以及镜面光，且有低高光。*/
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
//    /* 第三行第三列绘制的球有漫反射光和有颜色的环境光以及镜面光，且有很亮的高光。*/
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
//    /* 第三行第四列绘制的球有漫反射光和有颜色的环境光以及辐射光，而无镜面光。*/
//    glPushMatrix();
//    glTranslatef(3.75, -3.0, 0.0);
//    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient_color);
//    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
//    glMaterialfv(GL_FRONT, GL_SPECULAR, no_mat);
//    glMaterialfv(GL_FRONT, GL_SHININESS, no_shininess);
//    glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
//    glutSolidSphere(1.0, 20, 20);
//    glPopMatrix();
//    // 执行绘图命令
//    glFlush();
//}
//
//
//// 窗口大小变化回调函数
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
//    // 初始化显示模式
//    glutInit(&argc, const_cast<char**>(argv));
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
//
//
//    // 初始化窗口
//    glutInitWindowSize(500, 500);
//    glutInitWindowPosition(100, 100);
//    glutCreateWindow(argv[0]);
//
//
//    init();
//    glutReshapeFunc(reshape);
//    glutDisplayFunc(display);
//
//    // 开始主循环绘制
//    glutMainLoop();
//    return 0;
//}
