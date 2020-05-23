# Layer_first-solve-cube
Rubik's cube is stored in a structure with six members. 
They are the 9 color blocks of the bottom, top, front, back, right and left of the cube. 
Among them, 0, 1, 2, 3, 4 and 5 represent white, yellow, blue, green, red and orange respectively.            
There are 7 steps to solve the cube, and the corresponding procedures are contained in 7 'step' C files.           
The operation of magic cube is 90 degrees clockwise, 180 degrees and 90 degrees anticlockwise. 
The operation function is included in the "operate" C file. 
The method of use is:
input the initial color of each face of the cube structure, 
call the functions of seven steps to solve the cube in turn, 
and the steps to solve the cube will be stored in the array of global variables.

CHINESE：
魔方的存储方式为一个拥有6个成员的结构体。
分别为魔方的底面、顶面、前面、后面、右面、左面的9个色块颜色。
其中0、1、2、3、4、5分别表示为白色、黄色、蓝色、绿色、红色、橙色。
层先法解魔方共有7个步骤，相应的程序分别包含在7个‘STEP’ C文件中。
魔方的操作为顺时针旋转90度，180度和逆时针旋转90°，操作函数包含于 ‘operate’ C文件中。
使用方法为：输入魔方结构体各个面的初始颜色，依次调用7个解魔方步骤的函数，解魔方的步骤会储存在全局变量的数组中。
