//#include <GL\glew.h>
//#include <GLFW\glfw3.h>
//#include <iostream>
//#include<malloc.h>
//using namespace std;
//
//#define numVAOs 1
//
//GLuint renderingProgram;
//GLuint vao[numVAOs];
//
//void printShaderLog(GLuint shader) {
//	int len = 0;
//	int chWrittn = 0;
//	char* log;
//	glGetShaderiv(shader, GL_INFO_LOG_LENGTH, &len);//����ɫ�����󷵻�һ������;
//	//GL_INFO_LOG_LENGTH(������Ϣ��־����Ļ������Ĵ�С)
//	//shader:ָ��Ҫ��ѯ����ɫ������ֱ�ӷ�����Ҫ������ɫ������
//	//pname;ָ����ɫ������Ĳ������ɽ��ܷ���Ϊ�� 1��GL_SHADER_TYPE 2��GL_DELETE_STATUS 3��GL_COMPILE_STATUS 4��GL_INFO_LOG_LENGTH 5��GL_SHADER_SOURCE_LENGTH
//	//params:���������صĽ������������ĵ����������У���Ϊ��������õ��Ľ���кܶ��֣�����Ҫ�������ڵ����������У�������void glGetSHaderiv������GLuint
//	if (len > 0) {
//		log = (char*)malloc(len);
//		glGetShaderInfoLog(shader, len, &chWrittn, log);
//		/*shader:ָ��Ҫ��ѯ����Ϣ��־����ɫ������
//			* bufsize:ָ�����ڴ��淵�ص���־��Ϣ���ַ��������Ĵ�С
//			* length:����infoLog�з��ص��ַ����ĳ��ȣ�����������ֹ����
//			* infoLog��ָ�����ڷ�����Ϣ��־���ַ�����
//			*/
//		cout << "Shader Info Log: " << log << endl;
//		free(log);
//	}
//}
//
//void printProgramLog(int prog) {
//	int len = 0;
//	int chWrittn = 0;
//	char* log;
//	glGetProgramiv(prog, GL_INFO_LOG_LENGTH, &len);
//	if (len > 0) {
//		log = (char*)malloc(len);
//		glGetProgramInfoLog(prog, len, &chWrittn, log);
//		cout << "Program Info Log: " << log << endl;
//		free(log);
//	}
//}
//
//bool checkOpenGLError() {
//	bool foundError = false;
//	int glErr = glGetError();
//	while (glErr != GL_NO_ERROR) {
//		cout << "glError: " << glErr << endl;
//		foundError = true;
//		glErr = glGetError();
//	}
//	return foundError;
//}
//
//GLuint createShaderProgram() {
//	GLint vertCompiled;
//	GLint fragCompiled;
//	GLint linked;
//
//	const char* vshaderSource =
//		"#version 430    \n"
//		"void main(void) \n"
//		"{ gl_Position = vec4(0.0, 0.0, 0.0, 1.0); }";
//
//	const char* fshaderSource =
//		"#version 430    \n"
//		"out vec4 color; \n"
//		"void main(void) \n"
//		"{ color = vec4(0.0, 0.0, 1.0, 1.0); }";
//
//	GLuint vShader = glCreateShader(GL_VERTEX_SHADER);
//	GLuint fShader = glCreateShader(GL_FRAGMENT_SHADER);
//	GLuint vfprogram = glCreateProgram();
//
//	glShaderSource(vShader, 1, &vshaderSource, NULL);
//	glShaderSource(fShader, 1, &fshaderSource, NULL);
//
//	glCompileShader(vShader);
//	checkOpenGLError();
//	glGetShaderiv(vShader, GL_COMPILE_STATUS, &vertCompiled);
//	if (vertCompiled == 1) {
//		cout << "vertex compilation success" << endl;
//	}
//	else {
//		cout << "vertex compilation failed" << endl;
//		printShaderLog(vShader);
//	}
//
//	glCompileShader(fShader);
//	checkOpenGLError();
//	glGetShaderiv(fShader, GL_COMPILE_STATUS, &fragCompiled);
//	if (fragCompiled == 1) {
//		cout << "fragment compilation success" << endl;
//	}
//	else {
//		cout << "fragment compilation failed" << endl;
//		printShaderLog(fShader);
//	}
//
//	glAttachShader(vfprogram, vShader);
//	glAttachShader(vfprogram, fShader);
//	glLinkProgram(vfprogram);
//
//	glLinkProgram(vfprogram);
//	checkOpenGLError();
//	glGetProgramiv(vfprogram, GL_LINK_STATUS, &linked);
//	if (linked == 1) {
//		cout << "linking succeeded" << endl;
//	}
//	else {
//		cout << "linking failed" << endl;
//		printProgramLog(vfprogram);
//	}
//
//	return vfprogram;
//}
//
//void init(GLFWwindow* window) {
//		renderingProgram = createShaderProgram();
//		glGenVertexArrays(numVAOs, vao);//������glGen��ʽ��������䲻ͬ���͵�OpenGL���������
//		/*����n��δʹ�õĶ�����������arrays�У����������������
//		���ص����ֿ����������������ڴ����
//		���������Ѿ�ʹ��δ��ʼ���Ķ��������Ĭ��״̬��������ֵ�� ��ʼ��*/
//		glBindVertexArray(vao[0]);
//		/*�������ı���array��0������glGenVertexArrays()�����صģ���ô��������һ���µĶ�������������������ƹ���������
//		�����һ���Ѿ������Ķ��������У���ô�ἤ���������������飬����ֱ��Ӱ�������������ĵ������״̬��
//		�������ı���arrayΪ0����ôOpenGL��������ʹ�ó�����������κζ���������󣬲��ҽ���Ⱦ״̬����Ϊ���������Ĭ��״̬��*/
//}
//
//void display(GLFWwindow* window, double currentTime) {
//	glUseProgram(renderingProgram);
//	glPointSize(300.0f);
//	glDrawArrays(GL_POINTS, 0, 1);
//}
//
//int main(void) {
//	if (!glfwInit()) { exit(EXIT_FAILURE); }
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
//	GLFWwindow* window = glfwCreateWindow(600, 600, "Chapter 2 - program 3", NULL, NULL);
//	glfwMakeContextCurrent(window);
//
//	if (glewInit() != GLEW_OK) { exit(EXIT_FAILURE); }
//	glfwSwapInterval(1);
//
//	init(window);
//
//	while (!glfwWindowShouldClose(window)) {
//		display(window, glfwGetTime());
//		glfwSwapBuffers(window);
//		glfwPollEvents();
//	}
//
//	glfwDestroyWindow(window);
//	glfwTerminate();
//	exit(EXIT_SUCCESS);
//}


