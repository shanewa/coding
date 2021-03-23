CC 			:= g++
CPPFLAGS 	:= -g -std=c++11
SRC 		:= $(wildcard *cpp)
OBJ 		:= $(SRC:%.cpp=%.exe)
RM			:= rm -rf

.PHONY: all clean

all: $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(CPPFLAGS) -o $@ $(@:%.exe=%.cpp)

clean:
	$(RM) $(OBJ) *.o