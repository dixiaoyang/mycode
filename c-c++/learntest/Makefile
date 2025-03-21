test:build/main.o
	g++ $^ -o test
	mv test bin
build/main.o:src/main.cpp
	g++ -c $^ -o main.o
	mv main.o build
clean:
	rm -rf ./build/*
cleanexe:
	rm -rf ./bin/*
.PHONY:clean cleanexe
