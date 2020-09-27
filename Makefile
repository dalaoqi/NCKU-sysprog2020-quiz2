hex2value: hexchar2value.c	
	gcc hexchar2value.c -o hex2value.o
quickmod: quickMod.c
	gcc quickMod.c -o quickmod.o
strlower: strLower.c
	gcc strLower.c -o strlower.o
clean:	
	rm -f *.o