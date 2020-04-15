HW1 = simple_shape
HW2 = $(HW1)_main
HW3 = simple_account
HW4 = simple_account_main

all: $(HW1).o $(HW2).o $(HW3).o $(HW4).o
	g++ -o $(HW1) $(HW1).o $(HW2).o
	g++ -o $(HW3) $(HW3).o $(HW4).o

$(HW1).o: $(HW1).cc
	g++ -c -o $(HW1).o $(HW1).cc

$(HW2).o: $(HW2).cc
	g++ -c -o $(HW2).o $(HW2).cc

$(HW3).o: $(HW3).cc
	g++ -c -o $(HW3).o $(HW3).cc

$(HW4).o: $(HW4).cc
	g++ -c -o $(HW4).o $(HW4).cc


clean:
	rm $(HW1).o $(HW2).o $(HW1) $(HW3).o $(HW4).o $(HW3)

submit: $(HW1).cc $(HW2).cc $(HW1).h $(HW3).cc $(HW4).cc $(HW3).h Makefile
	git add $(HW1).cc $(HW2).cc $(HW1).h $(HW3).cc $(HW4).cc $(HW3).h Makefile
	git commit -m "hw6-1 complete"
	git push origin master

