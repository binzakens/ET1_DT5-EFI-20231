// All guide belongs to VuDucBi

$ echo $SYSTEMC_HOME

=> usr/local/systemc-2.3.x

$ g++ -Wall -g -I. -I$(SYSTEMC_HOME)/include -L. -L$(SYSTEMC_HOME)/lib-linux64 -Wl,-rpath=$(SYSTEMC_HOME)/lib-linux64 -lm -lsystemc -o

$ g++ -Wall -g -I. -I$(SYSTEMC_HOME)/include -L. -L$(SYSTEMC_HOME)/lib-linux64 -Wl,-rpath=$(SYSTEMC_HOME)/lib-linux64 -lm -lsystemc -o ouput_unlinked_file.o -c  soure_file.cpp
