SRC := getpwuid.c
TGT := getpwuid.so

.phony: build
build:
	gcc -o $(TGT) -fPIC -shared $(SRC) -ldl
