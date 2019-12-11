#!/bin/bash -eu

docker build -t gcc-ubuntu gcc-ubuntu
docker run --rm -it gcc-ubuntu bash
