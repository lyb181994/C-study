#include <stdio.h>
#include <Windows.h>

void main()
{
	printf("helloworld");
	MessageBox(0, "你好，天朝", "helloworld", 0);
	//第一个参数设置为0，是依赖窗口的编号，相当于谁弹出的窗口，0表示系统弹出的窗口
	//第二个参数为对话框的内容，第三个参数是对话框的标题，第四个参数是对话框的类型，设置为0即可
	
	ShellExecute(0, "open", "E:\\1.txt",0,0,1);  //在c语言中\\表示\
	
	ShellExecute(0, "open", "http://www.seu.edu.cn",0,0,1); 
	//ShellExecute是windows里面进行操作的一个函数
	//第一个参数，指示谁执行的，0表示系统执行的
	//第二个参数执行什么操作，一般情况下，只有open和print
	//第三个参数，执行的文件名称，或网址
	//第四第五是系统保留参数，都设置为0
	//最后一个参数是控制窗口显示，隐藏，最大化，最小化等

	getchar();
}