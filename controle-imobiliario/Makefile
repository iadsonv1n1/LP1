# Meu makefile

# Nome do projeto
PROJETO=imovel

# Arquivos .cpp
C_FIND=$(wildcard ./src/*.cpp)

# Arquivo .h
H_FIND=$(wildcard ./include/*.h)

# Arquivos .o
OBJ=$(subst .cpp,.o,$(subst src,build,$(C_FIND)))

# Compilador
CC=g++

# Tags para compilação
CC_TAGS= -c        \
         -Wall     \
         -Iinclude \
         -ansi     \
         -pedantic 
#
# Compilando e ligando
#

all: $(PROJETO)

$(PROJETO): $(OBJ)
	$(CC) $^ -o $@ 

./build/%.o: ./src/%.cpp ./include/%.h
	$(CC) $< $(CC_TAGS) -o $@

./build/main.o: ./src/main.cpp $(H_FIND)
	$(CC) $< $(CC_TAGS) -o $@

#---------------FIM--------------------