CC=g++
LIBS_L=-lraylib -lGL -lm -lpthread -ldl -lrt -lX11
LIBS_W=-lraylib -lopengl32 -lgdi32 -lwinmm

linux:
	${CC} src/*.cpp -o bin/Pong ${LIBS_L}
	./bin/Pong

windows:
	${CC} src/*.cpp -o bin/Pong.exe ${LIBS_W}
	bin/Pong.exe