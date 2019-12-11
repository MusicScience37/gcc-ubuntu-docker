#!/bin/bash -e

cd $(dirname $0)
make
build/test
