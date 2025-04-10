PROYECTO =nose
PRUEBA =prueba
LIB :=-lftxui-component -lftxui-dom -lftxui-screen
CXX :=-std=c++17
SRC :=src
INCLUDE := include
BIN := bin
EXE = $(BIN)/$(PROYECTO)
MEM = $(BIN)/$(PRUEBA)


$(EXE) : $(SRC)/main.cpp
	c++ $< -o $@ $(LIB) $(CXX) -I$(INCLUDE)

run : $(EXE)
	./$<

clean :
	rm $(BIN)/*

$(MEM):$(SRC)/memoria.cpp
	c++ $< -o $@

runm : $(MEM)
	./$<

bin/archivo: src/archivo.cpp
	c++ $< -o $@ -I$(INCLUDE)

archivo: bin/archivo
	./$<