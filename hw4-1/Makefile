HW1 = string
HW2 = function_overloading
HW3 = circle
HW3_1 = circle_main
HW4 = dynamic_array

all: $(HW1).o $(HW2).o $(HW3).o $(HW3_1).o $(HW4).o
	g++ -o $(HW1) $(HW1).o
	g++ -o $(HW2) $(HW2).o
	g++ -o $(HW4) $(HW4).o
	g++ -o $(HW3) $(HW3).o $(HW3_1).o

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
	rm $(HW1).o $(HW1) $(HW2).o $(HW2) $(HW3).o $(HW3) $(HW4) $(HW4).o $(HW3_1).o

submit: $(HW1).cc $(HW2).cc $(HW3).cc Makefile $(HW4).cc $(HW3_1).cc $(HW3).h
	git add $(HW1).cc $(HW2).cc $(HW3).cc Makefile $(HW4).cc $(HW3_1).cc $(HW3).h
	git commit -m "hw4-1 complete"
	git push origin master

