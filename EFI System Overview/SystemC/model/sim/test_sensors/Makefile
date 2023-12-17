# The compiler: gcc for C program, define as g++ for C++
CC = g++

# Compiler flags:
#  -g     - this flag adds debugging information to the executable file
#  -Wall  - this flag is used to turn on most compiler warnings
#  -O0: This flag tells the compiler not to optimize the code. This can make debugging easier.
SCCFLAGS  = -I. -I$(SYSTEMC_HOME)/include -L. -L$(SYSTEMC_HOME)/lib-linux64 -Wl,-rpath=$(SYSTEMC_HOME)/lib-linux64 -lm -lsystemc
CFLAGS = -Wall -g -O0

# The build target
TARGET = test_sensors

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

# Targets needed to bring the executable up to date
all: test_sensors.o Array.o Math.o File.o CKP.o CLT.o EGO.o MAP.o MAT.o FuelInjectionControl.o IgnitionControl.o
	$(CC) $(SCCFLAGS) -o $(TARGET) test_sensors.o Array.o Math.o File.o CKP.o CLT.o EGO.o MAP.o MAT.o FuelInjectionControl.o IgnitionControl.o
	
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

test_sensors.o:
	$(CC) $(CFLAGS) $(SCCFLAGS) -o test_sensors.o -c test_sensors.cpp

run:
	chmod +x test_sensors
	./test_sensors
clean:
	rm -rf test_sensors *.o *.vcd
