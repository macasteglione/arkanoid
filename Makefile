CC=g++
LIBS_L=-lraylib -lGL -lm -lpthread -ldl -lrt -lX11
LIBS_W=-lraylib -lopengl32 -lgdi32 -lwinmm
LIB_DIR=./deps/raylib/lib
INC_DIR=./deps/raylib/include

linux:
	${CC} -I${INC_DIR} src/*.cpp -o bin/Pong -L${LIB_DIR} ${LIBS_L}
	./bin/Pong 

windows:
	${CC} -I${INC_DIR} src/*.cpp -o bin/Pong.exe -L${LIB_DIR} ${LIBS_W}
	bin/Pong.exe