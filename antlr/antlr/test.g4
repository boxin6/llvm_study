grammar test;

//
compunit  : funcdef;

funcdef   : functype IDENT '(' ')' block;
functype  : 'int';

block     : '{' stmt '}';
stmt      : 'return' number ';';
number    : INT_CONST;

//
IDENT:
	[a-zA-Z_][0-9a-zA-Z]*;
INT_CONST:
	[1-9][0-9]*|'0';
W	:
	[ \t\r\n] ->skip;
