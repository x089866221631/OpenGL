//#include<iostream>
//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//using namespace std;
//
//void init(GLFWwindow* window) {}
//
//void display(GLFWwindow* window, double currentTime)
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glClearColor(1.0, 0.0, 0.0, 1.0);
//}
//
//
//int main(void)
//{
//	if (!glfwInit()){exit(EXIT_FAILURE);}//glfw�ĳ�ʼ��
//
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 4);
//	GLFWwindow* window = glfwCreateWindow(600, 600, "Chapter2-program1", NULL, NULL);
//
//	//GLFW����Ĭ����˫���塣����GLFW���ڲ������Զ������뵱ǰ��OpenGL��������ϵ�����������������Ҫ����glfwMakeContextCurrent();
//	glfwMakeContextCurrent(window);
//
//
//	if (glewInit() != GLEW_OK) { exit(EXIT_FAILURE); }//glew�ĳ�ʼ��
//
//	glfwSwapInterval(1);//glfwSwapInterval() �� glfwSwapBuffers()��������������ֱͬ����Vsync��
//
//	init(window);
//	//�˴���init()��display()�������ض���������Ҫ����GLFW���ڶ���
//	while (!glfwWindowShouldClose(window))
//	{
//		display(window, glfwGetTime());
//		glfwSwapBuffers(window);//������Ļ
//		glfwPollEvents();//����������¼�
//		
//	}
//	glfwDestroyWindow(window);
//	glfwTerminate();
//	exit(EXIT_FAILURE);
//	return 0;
//}
//

