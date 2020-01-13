FROM ubuntu:19.10

RUN apt-get update && \
    apt-get install -y --no-install-recommends \
        gcc-8=8.3.0-23ubuntu2 \
        g++-8=8.3.0-23ubuntu2 \
        make=4.2.1-1.2 && \
    apt-get autoremove && \
    apt-get autoclean && \
    rm -r /var/lib/apt/lists/* && \
    ln -s "$(command -v gcc-8)" /usr/local/bin/gcc && \
    ln -s "$(command -v g++-8)" /usr/local/bin/g++ && \
    ln -s "$(command -v gcov-8)" /usr/local/bin/gcov
