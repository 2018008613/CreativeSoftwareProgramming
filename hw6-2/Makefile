HW1 = reply_admin
HW2 = $(HW1)_main

all: $(HW1).o $(HW2).o
	g++ -o $(HW1) $(HW1).o $(HW2).o

$(HW1).o: $(HW1).cc
	g++ -c -o $(HW1).o $(HW1).cc

$(HW2).o: $(HW2).cc
	g++ -c -o $(HW2).o $(HW2).cc

clean:
	rm $(HW1).o $(HW2).o $(HW1)

submit: $(HW1).cc $(HW2).cc $(HW1).h Makefile
	git add $(HW1).cc $(HW2).cc $(HW1).h Makefile
	git commit -m "hw6-2 complete"
	git push origin master

