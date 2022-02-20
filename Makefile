a.out : variables.cpp
	g++ -o $@ $<

run : 
	./a.out
	
clean : 
	rm -rf a.out

.PHONY : run clean