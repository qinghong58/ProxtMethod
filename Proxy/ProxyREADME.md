1.项目名称
LuckyNumber
2.项目介绍
项目基于代理模式实现，这个功能主要进行延迟初始化，权限检查，动态缓存等功能进行代理模式的实现。

3.项目架构说明
Config.h：项目的配置文件，一些变量的声明。
LuckyNumber.h:包括一些具体的方法
Number.h：数字的基类，LuckyNumber就是继承于这个
ProxyNumber.h：代理功能的具体实现
MainMenu.cpp：主函数的实现，包括界面等具体功能
4.使用说明
进入项目之后，可以按照说明的要求进行LuckyNumber的搜索，你输入的字符会进行权限检查，如果数据库里面没有，就会不允许查看。
5.过程总结
这个整体的功能还是很好实现的，但是扩展很不好扩展，想用其它代理模式进行相应的编码，但是自己找不到适合的，但是听说了一个新功能，对象池的实现。

