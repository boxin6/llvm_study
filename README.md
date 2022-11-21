观察树形  
1.vim *.g4文件;  
2.编译 antlr4 *.g4;  
3.编译java文件 javac *.java; 
4.看树 grun test compunit test.sys -gui & ;  
  
生成cpp文件  
1.antlr4 -Dlanguage=Cpp -visitor test.g4  
2.overwire basevisitor.cpp文件  

未完...  
