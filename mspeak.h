#ifndef SW_SERIALH_
#define SW_SERIAL_H_
void init_serial(unsigned txPinMask, unsigned rxPinMask, unsigned bitDuration);
int getchar(void);
int putchar(int c);
int puts(const char *s);
#endif /* SW_SERIAL_H_ */
