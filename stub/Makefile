.PHONY: all clean
CC:=gcc
all: libreadline.so libz.so
libreadline.so: readline.c
	$(CC) readline.c -Wl,-soname,libreadline.so.8 -shared -o libreadline.so
libz.so: zlib.c
	$(CC) zlib.c -Wl,-soname,libz.so.1,--version-script,zlib.map -shared -o libz.so
clean:
	rm -f libreadline.so libz.so