### scanf函数运行警告不安全

​	VS编辑器认为C语言提供的scanf...一些函数式不安全的，于是提供了另外的一些函数供程序员使用，要防止运行不会报错可以在源文件的第一行添加：
`#define _CRT_SECURE_NO_WARNINGS 1`
或者在项目属性的C/C++中设置SDL检查为否

###### 配置文件的方式：

​	在Visual Studio安装的路径下："D:\Program Files\Microsoft Visual Studio\2022\Community\Common7\IDE\VC\VCProjectItems" 找到 newc++file.cpp文件
编辑该文件在文件中添加 `#define _CRT_SECURE_NO_WARNINGS 1`可以在每次创建c文件时自动添加该语句