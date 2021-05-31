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
//		"out vec4 color; \n"//�ڶ�����ɫ���в����Ǳ���Ҫ��gl_Position ָ�� ��out����ǩ����Ϊgl_Position��Ԥ������������
//		"void main(void) \n"
//		"{color=vec4(0.0,1.0,0.0,1.0);}";
//
//	GLuint vShader = glCreateShader(GL_VERTEX_SHADER);
//	GLuint fShader = glCreateShader(GL_FRAGMENT_SHADER);
//	GLuint vfprogram = glCreateProgram();//����ָ����������ID
//
//	glShaderSource(vShader, 1, &vshaderSource, NULL);//a�����������ɫ������ɫ������b����ɫ��Դ�����е��ַ���������c������Դ������ַ���ָ�룬d�����һ��û�õ��Ĳ���
//	glShaderSource(fShader, 1 ,&fshaderSource, NULL);//ע�������ε�glShaderSource���ö�ָ������ɫ����Դ�����ַ�������Ϊ��1��
//	glCompileShader(vShader);
//	glCompileShader(fShader);
//
//	glAttachShader(vfprogram, vShader);//����ɫ������������֮����glLinkProgram()����GLSL������ȷ�����ǵļ�����
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
//	glUseProgram(renderingprogram);//�˴�û��������ɫ������ֻ�ǽ���ɫ�����ؽ�Ӳ��
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

