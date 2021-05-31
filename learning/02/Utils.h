
//#include<gl/glew.h>
//#include<GLFW/glfw3.h>
//#include<SOIL2/SOIL2.h>
//#include<string>
//#include<iostream>
//#include<math.h>
//#include<fstream>
//#include<vector>
//#include<glm/glm.hpp>
//#include<glm/gtc/type_ptr.hpp>
//#include<glm/gtc/matrix_transform.hpp>
//using namespace std;
//class Utils
//{
//private:
//	static string readShaderFile(const char* filePath);
//	static void printShaderLog(GLuint shader);
//	static void printProgarmLog(int prog);
//	static GLuint prepareShader(int shaderTYPE, const char* shaderPath);
//	static GLint finalizeShaderProgram(GLuint sprogram);
//public:
//	static bool checkOpenGLError();
//	static GLuint createShaderProgram(const char* vp, const char* fp);
//	static GLuint createShaderProgram(const char* vp, const char* gp, const char* fp);
//	static GLuint createShaderProgram(const char* vp, const char* tCS, const char* tES, const char* fp);
//	static GLuint createSHaderProgram(const char* vp, const char* tCS, const char* tES, const char* gp, const char* fp);
//	static GLuint loadTexture(const char* texImagPath);
//	static GLuint loadCubeMap(const char* mapDir);
//
//	static float* goldAmbient(); //Ambient 环境
//	static float* goldDiffuse();// diffus 弥漫、发散、固有色
//	static float* goldSpecular();// 镜面
//	static float* goldShininess;// 光照
//
//	static float* silverAmbient();
//	static float* silverDiffuse();
//	static float* silverSpecular();
//	static float* silverShininess();
//
//	static float* bronzeAmbient();// bronze 青铜
//	static float* bronzeDiffuse();
//	static float* bronzeSpecular();
//	static float* bronzeShininess();
//	
//
//
//};
#pragma once
#include <GL\glew.h>
#include <GLFW\glfw3.h>
#include <SOIL2\soil2.h>
#include <string>
#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <glm\glm.hpp>
#include <glm\gtc\type_ptr.hpp>
#include <glm\gtc\matrix_transform.hpp>

class Utils
{
private:
	static std::string readShaderFile(const char* filePath);
	static void printShaderLog(GLuint shader);
	static void printProgramLog(int prog);
	static GLuint prepareShader(int shaderTYPE, const char* shaderPath);
	static int finalizeShaderProgram(GLuint sprogram);

public:
	Utils();
	static bool checkOpenGLError();
	static GLuint createShaderProgram(const char* vp, const char* fp);
	static GLuint createShaderProgram(const char* vp, const char* gp, const char* fp);
	static GLuint createShaderProgram(const char* vp, const char* tCS, const char* tES, const char* fp);
	static GLuint createShaderProgram(const char* vp, const char* tCS, const char* tES, char* gp, const char* fp);
	static GLuint loadTexture(const char* texImagePath);
	static GLuint loadCubeMap(const char* mapDir);

	static float* goldAmbient();
	static float* goldDiffuse();
	static float* goldSpecular();
	static float goldShininess();

	static float* silverAmbient();
	static float* silverDiffuse();
	static float* silverSpecular();
	static float silverShininess();

	static float* bronzeAmbient();
	static float* bronzeDiffuse();
	static float* bronzeSpecular();
	static float bronzeShininess();
};