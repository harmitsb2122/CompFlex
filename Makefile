all: tokenizer.l parser.y helper.cpp helper.h
	lex tokenizer.l
	yacc -d parser.y 
	yacc parser.y -o gm.cc
	cc -c lex.yy.c -o lex.yy.o
	g++ lex.yy.o gm.cc helper.cpp -o genTemp

run: genTemp map.cpp
	./genTemp map.cpp

clean:
	rm -f genTemp
	rm -f gm.cc lex.yy.c y.tab.h lex.yy.o y.tab.c