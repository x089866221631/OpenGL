//#include<gl/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<string>
//#include<fstream>
//using namespace std;
//constexpr auto numVAOs = 1;
//GLint renderingprogram;
//GLuint vao[numVAOs];
//
//string readShaderSource(const char* filepath)
//{
//	string content;
//	ifstream fileSteam(filepath, ios::in);
//	string line = "";
//	while (!fileSteam.eof())
//	{
//		getline(fileSteam, line);
//		content.append(line + "\n");
//	}
//	fileSteam.close();
//	return content;
//	
//}
//GLuint createShaderProgram()
//{
//	GLuint vShader = glCreateShader(GL_VERTEX_SHADER);
//	GLuint fShader = glCreateShader(GL_FRAGMENT_SHADER);
//	GLuint vfprogram = glCreateProgram();
//
//	string vertShaderStr = readShaderSource("rec/shader/vertShader.glsl");
//	string fragShaderStr = readShaderSource("rec/shader/fragShader.glsl");
//	const char* vertShaderSrc = vertShaderStr.c_str();
//	const char* fragShaderSrc = fragShaderStr.c_str();
//
//	glShaderSource(vShader, 1, &vertShaderSrc, NULL);
//	glShaderSource(fShader, 1 ,& fragShaderSrc, NULL);
//	glCompileShader(vShader);
//	glCompileShader(fShader);
//
//	glAttachShader(vfprogram, vShader);
//	glAttachShader(vfprogram, fShader);
//	glLinkProgram(vfprogram);
//
//	return vfprogram;
//}
//
//void init(GLFWwindow* window)
//{
//	renderingprogram = createShaderProgram();
//	glGenVertexArrays(numVAOs, vao);
//	glBindVertexArray(vao[0]);
//}
//void display(GLFWwindow* window, double currentTime)
//{
//	glUseProgram(renderingprogram);
//	glPointSize(30.0f);
//	glDrawArrays(GL_POINTS, 0, 1);
//}
//int main(void)
//{
//	if (!glfwInit()) { exit(EXIT_FAILURE); }
//	glfwInitHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
//	glfwInitHint(GLFW_CONTEXT_VERSION_MINOR, 3);
//	GLFWwindow* window = glfwCreateWindow(600,600,"title",NULL,NULL);
//	glfwMakeContextCurrent(window);
//	if (glewInit() != GLEW_OK) { exit(EXIT_FAILURE); }
//	glfwSwapInterval(1);
//
//	init(window);
//	while (!glfwWindowShouldClose(window))
//	{
//		display(window, glfwGetTime());
//		glfwSwapBuffers(window);
//		glfwPollEvents();
//	}
//	glfwTerminate();
//	glfwDestroyWindow(window);
//	exit(EXIT_SUCCESS);
//}

