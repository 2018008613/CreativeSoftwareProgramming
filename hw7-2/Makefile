HW1 = simple_int_set
HW2 = $(HW1)_main
HW3 = message_book
HW4 = $(HW3)_main

all: $(HW1).o $(HW2).o $(HW3).o $(HW4).o
	g++ -std=c++11 -o $(HW1) $(HW1).o $(HW2).o
	g++ -o $(HW3) $(HW3).o $(HW4).o

$(HW1).o: $(HW1).cc
	g++ -c -o $(HW1).o $(HW1).cc

$(HW2).o: $(HW2).cc
	g++ -std=c++11 -c -o $(HW2).o $(HW2).cc

$(HW3).o: $(HW3).cc
	g++ -c -o $(HW3).o $(HW3).cc

$(HW4).o: $(HW4).cc
	g++ -c -o $(HW4).o $(HW4).cc


clean:
	rm $(HW1).o $(HW2).o $(HW1) $(HW3).o $(HW4).o $(HW3)

submit: $(HW1).cc $(HW2).cc $(HW1).h $(HW3).cc $(HW4).cc $(HW3).h Makefile
	git add $(HW1).cc $(HW2).cc $(HW1).h $(HW3).cc $(HW4).cc $(HW3).h Makefile
	git commit -m "hw7-2 complete"
	git push origin master
