.PHONY: all
all:

.PHONY: make_dir
make_dir:
	mkdir -p build
all: make_dir

build/test: src/test.cpp
	g++ -o build/test src/test.cpp
all: build/test
