# libisten
A C library which determines if a number is equal to 10 or not.

## Compiling
From the root directory, run make:

```
$ make all
```

### Expected output
You should see the following after a successful build:

```
gcc -I./include -O3 -c -o build/libisten.o src/libisten.c
ar rcs export/libisten.a build/libisten.o
```

## Testing
You can build and run the included tests like so:

```
make test
```

### Expected output
A successful test will give the following output:

```
gcc -I./include -O3 -c -o build/libisten.o src/libisten.c
ar rcs export/libisten.a build/libisten.o
gcc -I./include -O3 -c -o build/libisten_test.o test/libisten_test.c
gcc -L./export -I./include -O3 -o export/libisten_test build/libisten_test.o -listen
export/libisten_test
libisten test results:
2/2 passed
All tests passed!
```

## Cleanup
You can cleanup any built files like so:

```
make clean
```
