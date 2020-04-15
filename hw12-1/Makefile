HW1 = myswap
HW3 = my_vector
HW4 = $(HW3)_main

all: $(HW1).o $(HW4).o
	g++ -o $(HW1) $(HW1).o
	g++ -std=c++11 -o $(HW3) $(HW4).o

$(HW1).o: $(HW1).cc
	g++ -c -o $(HW1).o $(HW1).cc

$(HW4).o: $(HW4).cc
	g++ -std=c++11 -c -o $(HW4).o $(HW4).cc

clean:
	rm $(HW1).o $(HW1) $(HW4).o $(HW3)

submit: $(HW1).cc $(HW1).h $(HW4).cc $(HW3).h Makefile
	git add $(HW1).cc $(HW1).h $(HW4).cc $(HW3).h Makefile
	git commit -m "hw12-1 complete"
	git push origin master
