all: osnovanie glavni_test bezhatTest valgrind

osnovanie:
	g++ Real_7lab.cpp -o main

glavni_test:
	g++ -ftest-coverage -fprofile-arcs -O0 -o main_test Testirovka.cpp DataClient.cpp

bezhatTest:
	./main_test
	gcov -abcfu DataClient.cpp

valgrind: 
	valgrind ./main_test
