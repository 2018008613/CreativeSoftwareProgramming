HW1 = score_graph
HW2 = print_point
HW3 = array_2dim

all: $(HW1).o $(HW2).o $(HW3).o
	g++ -o $(HW1) $(HW1).o
	g++ -o $(HW2) $(HW2).o
	g++ -o $(HW3) $(HW3).o

$(HW1).o: $(HW1).cc
	g++ -c -o $(HW1).o $(HW1).cc

$(HW2).o: $(HW2).cc
	g++ -c -o $(HW2).o $(HW2).cc

$(HW3).o: $(HW3).cc
	g++ -c -o $(HW3).o $(HW3).cc

clean:
	rm $(HW1).o $(HW1) $(HW2).o $(HW2) $(HW3).o $(HW3)

submit: $(HW1).cc $(HW2).cc $(HW3).cc Makefile
	git add $(HW1).cc $(HW2).cc $(HW3).cc Makefile
	git commit -m "hw3-2 complete"
	git push origin master
