run:lj/math.o lj/main.o 
	g++ -std=c++23 $^ -o run -fmodules-ts
	mv run bin
	mv gcm.cache lj
	rm -rf lj
lj/math.o:mk/math.cpp
	mkdir lj
	g++ -std=c++23 -c $^ -o math.o -fmodules-ts
	mv math.o lj
lj/main.o:src/main.cpp
	g++ -std=c++23 -c $^ -o main.o -fmodules-ts
	mv main.o lj
clean:
	rm -rf bin/*
.PHONY:clean
