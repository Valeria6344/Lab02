program.exe: message.o hello.o goodbye.o main.o
	g++ message.o hello.o goodbye.o main.o -o program.exe
message.o: message.cpp
	g++ -c message.cpp -o message.o
hello.o: hello.cpp
	g++ -c hello.cpp -o hello.o
goodbye.o: goodbye.cpp
	g++ -c goodbye.cpp -o goodbye.o
main.o: main.cpp
	g++ -c main.cpp -o main.o