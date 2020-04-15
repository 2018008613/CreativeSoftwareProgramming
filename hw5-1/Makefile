HW1 = swap
HW2 = command_argument
HW3 = sort
HW3_1 = $(HW3)_int
HW4 = cmdarg

all: $(HW1).o $(HW2).o $(HW3).o $(HW3_1).o $(HW4).o
	g++ -o $(HW1) $(HW1).o
	g++ -o $(HW2) $(HW2).o
	g++ -o $(HW4) $(HW4).o
	g++ -o $(HW3_1) $(HW3).o $(HW3_1).o

$(HW1).o: $(HW1).cc
	g++ -c -o $(HW1).o $(HW1).cc

$(HW2).o: $(HW2).cc
	g++ -c -o $(HW2).o $(HW2).cc

$(HW3).o: $(HW3).cc
	g++ -c -o $(HW3).o $(HW3).cc

$(HW3_1).o: $(HW3_1).cc
	g++ -c -o $(HW3_1).o $(HW3_1).cc

$(HW4).o: $(HW4).cc
	g++ -c -o $(HW4).o $(HW4).cc

clean:
	rm $(HW1).o $(HW1) $(HW2).o $(HW2) $(HW3).o $(HW3_1) $(HW4) $(HW4).o $(HW3_1).o

submit: $(HW1).cc $(HW2).cc $(HW3).cc $(HW3_1).cc $(HW4).cc $(HW3).h Makefile
	git add $(HW1).cc $(HW2).cc $(HW3).cc $(HW3_1).cc $(HW4).cc $(HW3).h Makefile
	git commit -m "hw5-1 complete"
	git push origin master

