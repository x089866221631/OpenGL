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
//	if (!glfwInit()){exit(EXIT_FAILURE);}//glfw的初始化
//
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 4);
//	GLFWwindow* window = glfwCreateWindow(600, 600, "Chapter2-program1", NULL, NULL);
//
//	//GLFW窗口默认是双缓冲。创建GLFW窗口并不会自动将它与当前的OpenGL上下文联系起来——因此我们需要调用glfwMakeContextCurrent();
//	glfwMakeContextCurrent(window);
//
//
//	if (glewInit() != GLEW_OK) { exit(EXIT_FAILURE); }//glew的初始化
//
//	glfwSwapInterval(1);//glfwSwapInterval() 和 glfwSwapBuffers()命令用来开启垂直同步（Vsync）
//
//	init(window);
//	//此处的init()和display()函数在特定环境下需要访问GLFW窗口对象。
//	while (!glfwWindowShouldClose(window))
//	{
//		display(window, glfwGetTime());
//		glfwSwapBuffers(window);//绘制屏幕
//		glfwPollEvents();//处理窗口相关事件
//		
//	}
//	glfwDestroyWindow(window);
//	glfwTerminate();
//	exit(EXIT_FAILURE);
//	return 0;
//}
//

