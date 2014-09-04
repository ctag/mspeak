mspeak.elf: sw_serial.S main.c
	msp430-gcc -Os sw_serial.S main.c -o lazy.elf -mmcu=msp430g2211

install: mspeak.elf
	mspdebug rf2500 "prog mspeak.elf"

clean:
	rm -f *~ *.elf
