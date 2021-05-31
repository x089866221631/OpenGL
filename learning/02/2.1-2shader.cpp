//#include<iostream>
//#include<gl/glew.h>
//#include<GLFW/glfw3.h>
//
//constexpr auto numVAOs = 1;
//GLint renderingprogram;
//GLuint vao[numVAOs];
//
//GLuint createShaderProgram()
//{
//	const char* vshaderSource =
//		"#version 430 \n"
//		"void main(void)"
//		"{gl_Position=vec4(0.0,0.0,0.0,1.0);}";
//
//
//	const char* fshaderSource =
//		"#version 430 \n"
//		"out vec4 color; \n"//在顶点着色器中并不是必须要给gl_Position 指定 “out”标签，因为gl_Position是预定义的输出变量
//		"void main(void) \n"
//		"{color=vec4(0.0,1.0,0.0,1.0);}";
//
//	GLuint vShader = glCreateShader(GL_VERTEX_SHADER);
//	GLuint fShader = glCreateShader(GL_FRAGMENT_SHADER);
//	GLuint vfprogram = glCreateProgram();//储存指向它的整数ID
//
//	glShaderSource(vShader, 1, &vshaderSource, NULL);//a、用来存放着色器的着色器对象，b、着色器源代码中的字符串数量，c、包含源代码的字符串指针，d、最后一个没用到的参数
//	glShaderSource(fShader, 1 ,&fshaderSource, NULL);//注意这两次的glShaderSource调用都指明了着色器的源代码字符串数量为“1”
//	glCompileShader(vShader);
//	glCompileShader(fShader);
//
//	glAttachShader(vfprogram, vShader);//将着色器加入程序对象，之后用glLinkProgram()请求GLSL编译器确保他们的兼容性
//	glAttachShader(vfprogram, fShader);
//	glLinkProgram(vfprogram);
//
//	return vfprogram;
//}
//void init(GLFWwindow* window)
//{
//	renderingprogram = createShaderProgram();
//	glGenVertexArrays(numVAOs, vao);
//	glBindVertexArray(vao[0]);
//}
//
//void display(GLFWwindow* winodw, double currentTime)
//{
//	glUseProgram(renderingprogram);//此处没有运行着色器，它只是将着色器加载进硬件
//	glPointSize(30.f);
//	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
//	glDrawArrays(GL_POINTS, 0, 1);
//}
//int main()
//{
//	if (!glfwInit()) { exit(EXIT_FAILURE); }
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
//	GLFWwindow* window = glfwCreateWindow(600, 600, "vertexshader and fragmentshader", NULL, NULL);
//
//	glfwMakeContextCurrent(window);
//
//	if(glewInit()!=GLEW_OK){ exit(EXIT_FAILURE); }
//
//	glfwSwapInterval(1);
//
//	init(window);
//
//	while (!glfwWindowShouldClose(window))
//	{
//		display(window, glfwGetTime());
//		glfwSwapBuffers(window);
//		glfwPollEvents();
//	}
//	glfwDestroyWindow(window);
//	glfwTerminate();
//	exit(EXIT_SUCCESS);
//}

