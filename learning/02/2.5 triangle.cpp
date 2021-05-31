//#include <GL\glew.h>
//#include <GLFW\glfw3.h>
//#include <iostream>
//#include <string>
//#include <iostream>
//#include <fstream>
//#include "Utils.h"
//using namespace std;
//
//constexpr auto numVAOs = 1;
//
//GLuint renderingProgram;
//GLuint vao[numVAOs];
//
//void init(GLFWwindow* window) {
//	renderingProgram = Utils::createShaderProgram("learning/02/vertShader.glsl", "learning/02/fragShader.glsl");
//	glGenVertexArrays(numVAOs, vao);
//	glBindVertexArray(vao[0]);
//}
//
//void display(GLFWwindow* window, double currentTime) {
//	glUseProgram(renderingProgram);
//	glDrawArrays(GL_TRIANGLES, 0,3);
//}
//
//int main(void) {
//	if (!glfwInit()) { exit(EXIT_FAILURE); }
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
//	GLFWwindow* window = glfwCreateWindow(600, 600, "Chapter 2 - program 5", NULL, NULL);
//	glfwMakeContextCurrent(window);
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

#include<iostream>
#include<gl/glew.h>
#include<GLFW/glfw3.h>
#include<string>
#include<fstream>
#include"Utils.h"

using namespace std;

#define numVAOs 1

GLuint renderingProgram;
GLuint vao[numVAOs];

void init(GLFWwindow* window)
{
	renderingProgram = Utils::createShaderProgram("learning/02/vertShader.glsl", "learning/02/fragShader.glsl");
	glGenVertexArrays(numVAOs, vao);
	glBindVertexArray(vao[0]);
}
void display(GLFWwindow* window, double currentTime)
{
	glUseProgram(renderingProgram);
	glDrawArrays(GL_TRIANGLES, 0, 3);
}
int main(void)
{
	if (!glfwInit()) { exit(EXIT_FAILURE); }
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	GLFWwindow* window = glfwCreateWindow(600, 600, "title", NULL, NULL);
	glfwMakeContextCurrent(window);
	if (glewInit() != GLEW_OK) { exit(EXIT_FAILURE); }
	glfwSwapInterval(1);
	init(window);
	while (glfwWindowShouldClose(window))
	{
		display(window, glfwGetTime());
		glfwSwapBuffers(window);
		glfwPollEvents();
	}
	glfwDestroyWindow(window);
	glfwTerminate();
	exit(EXIT_SUCCESS);
}