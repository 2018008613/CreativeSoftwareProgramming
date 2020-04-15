HW1 = bad_allocation
HW2 = object_copy
HW3 = chained_handler

all: $(HW1).o $(HW2).o $(HW3).o
	g++ -o $(HW1) $(HW1).o
	g++ -std=c++11 -o $(HW2) $(HW2).o
	g++ -o $(HW3) $(HW3).o

$(HW1).o: $(HW1).cc
	g++ -c -o $(HW1).o $(HW1).cc

$(HW2).o: $(HW2).cc
	g++ -std=c++11 -c -o $(HW2).o $(HW2).cc

$(HW3).o: $(HW3).cc
	g++ -c -o $(HW3).o $(HW3).cc

clean:
	rm $(HW1).o $(HW2).o $(HW1) $(HW3).o $(HW2) $(HW3)

submit: $(HW1).cc $(HW2).cc $(HW3).cc Makefile
	git add $(HW1).cc $(HW2).cc $(HW3).cc Makefile
	git commit -m "hw13-1 complete"
	git push origin master
