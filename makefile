m = echo

all :
		clear
		rm --force main.o main.out
		gcc main.c -c
		gcc main.c -o main.out
		./main.out
		$echo all
compile :
		$m compiling...
		gcc -c main.c
		gcc main.c -o main.out

run :
		$m running main.out
		./main.out
		
clear : 
		clear
		
clean : 
		$m cleaning
		rm -f main.out
		rm -f main.o
		

patti : 
		$echo patti
