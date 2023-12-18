# The compiler: gcc for C program, define as g++ for C++
CC = g++

# Compiler flags:
#  -g     - this flag adds debugging information to the executable file
#  -Wall  - this flag is used to turn on most compiler warnings
#  -O0: This flag tells the compiler not to optimize the code. This can make debugging easier.
SCCFLAGS  = -I. -I$(SYSTEMC_HOME)/include -L. -L$(SYSTEMC_HOME)/lib-linux64 -Wl,-rpath=$(SYSTEMC_HOME)/lib-linux64 -lm -lsystemc
CFLAGS = -Wall -g -O0

# The build target
TARGET = test_algorithm

# Library source
FILE = ../../../lib/File.cpp
MATH = ../../../lib/Math.cpp
ARRAY = ../../../lib/Array.cpp
CKP = ../../src/CKP.cpp
CLT = ../../src/CLT.cpp
EGO = ../../src/EGO.cpp
MAP = ../../src/MAP.cpp
MAT = ../../src/MAT.cpp
FIC = ../../src/FuelInjectionControl.cpp
IC = ../../src/IgnitionControl.cpp
CRA = CrankAlgo.cpp
FA = FuelAlgo.cpp
IA = IgnitionAlgo.cpp
SA = StrokeAlgo.cpp

# Targets needed to bring the executable up to date
all: test_algorithm.o Array.o Math.o File.o CKP.o CLT.o EGO.o MAP.o MAT.o FuelInjectionControl.o IgnitionControl.o CrankAlgo.o StrokeAlgo.o FuelAlgo.o IgnitionAlgo.o
	$(CC) $(CFLAGS) $(SCCFLAGS) -o $(TARGET) test_algorithm.o Array.o Math.o File.o CKP.o CLT.o EGO.o MAP.o MAT.o FuelInjectionControl.o IgnitionControl.o CrankAlgo.o StrokeAlgo.o FuelAlgo.o IgnitionAlgo.o

File.o:	
	$(CC) $(CFLAGS) -o File.o -c $(FILE)

Math.o:
	$(CC) $(CFLAGS) -o Math.o -c $(MATH)

Array.o:
	$(CC) $(CFLAGS) -o Array.o -c $(ARRAY)

CKP.o:
	$(CC) $(CFLAGS) $(SCCFLAGS) -o CKP.o -c $(CKP)
CLT.o:
	$(CC) $(CFLAGS) $(SCCFLAGS) -o CLT.o -c $(CLT)
EGO.o:
	$(CC) $(CFLAGS) $(SCCFLAGS) -o EGO.o -c $(EGO)
MAP.o:
	$(CC) $(CFLAGS) $(SCCFLAGS) -o MAP.o -c $(MAP)
MAT.o:
	$(CC) $(CFLAGS) $(SCCFLAGS) -o MAT.o -c $(MAT)

FuelInjectionControl.o:
	$(CC) $(CFLAGS) $(SCCFLAGS) -o FuelInjectionControl.o -c $(FIC)

IgnitionControl.o:
	$(CC) $(CFLAGS) $(SCCFLAGS) -o IgnitionControl.o -c $(IC)

CrankAlgo.o:
	$(CC) $(CFLAGS) $(SCCFLAGS) -o CrankAlgo.o -c $(CRA)

StrokeAlgo.o:
	$(CC) $(CFLAGS) $(SCCFLAGS) -o StrokeAlgo.o -c $(SA)

FuelAlgo.o:
	$(CC) $(CFLAGS) $(SCCFLAGS) -o FuelAlgo.o -c $(FA)

IgnitionAlgo.o:
	$(CC) $(CFLAGS) $(SCCFLAGS) -o IgnitionAlgo.o -c $(IA)
	
test_algorithm.o:
	$(CC) $(CFLAGS) $(SCCFLAGS) -o test_algorithm.o -c test_algorithm.cpp

run:
	chmod +x test_algorithm
	./test_algorithm

clean:
	rm -rf test_algorithm *.o *.vcd
