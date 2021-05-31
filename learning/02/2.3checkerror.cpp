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
//	glGetShaderiv(shader, GL_INFO_LOG_LENGTH, &len);//从着色器对象返回一个参数;
//	//GL_INFO_LOG_LENGTH(返回信息日志锁需的缓存区的大小)
//	//shader:指定要查询的着色器对象，直接放入需要检查的着色器即可
//	//pname;指定着色器对象的参数。可接受符号为： 1、GL_SHADER_TYPE 2、GL_DELETE_STATUS 3、GL_COMPILE_STATUS 4、GL_INFO_LOG_LENGTH 5、GL_SHADER_SOURCE_LENGTH
//	//params:函数将返回的结果储存在输入的第三个参数中，因为这个函数得到的结果有很多种，所以要单独放在第三个参数中，所以是void glGetSHaderiv而不是GLuint
//	if (len > 0) {
//		log = (char*)malloc(len);
//		glGetShaderInfoLog(shader, len, &chWrittn, log);
//		/*shader:指定要查询其信息日志的着色器对象
//			* bufsize:指定用于储存返回的日志信息的字符缓存区的大小
//			* length:返回infoLog中返回的字符串的长度（不包括空终止符）
//			* infoLog：指定用于返回信息日志的字符数组
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
//		glGenVertexArrays(numVAOs, vao);//概述：glGen形式：负责分配不同类型的OpenGL对象的名称
//		/*返回n个未使用的对象名到数组arrays中，用作顶点数组对象。
//		返回的名字可以用来分配更多的内存对象，
//		并且它们已经使用未初始化的顶点数组的默认状态进行了数值的 初始化*/
//		glBindVertexArray(vao[0]);
//		/*如果输入的变量array非0，并且glGenVertexArrays()锁返回的，那么它将创建一个新的顶点数组对象并且与其名称关联起来。
//		如果绑定一个已经创建的顶点数组中，那么会激活这个顶点对象数组，并且直接影响对象中锁保存的点点数组状态。
//		如果输入的变量array为0，那么OpenGL将不会再使用程序所分配的任何顶点数组对象，并且将渲染状态重设为顶点数组的默认状态。*/
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


