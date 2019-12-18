FROM ubuntu:18.04

RUN apt-get update && \
    apt-get install -y --no-install-recommends \
        gcc-8=8.3.0-6ubuntu1~18.04.1 \
        g++-8=8.3.0-6ubuntu1~18.04.1 \
        make=4.1-9.1ubuntu1 && \
    apt-get autoremove && \
    apt-get autoclean && \
    rm -r /var/lib/apt/lists/* && \
    ln -s "$(command -v gcc-8)" /usr/local/bin/gcc && \
    ln -s "$(command -v g++-8)" /usr/local/bin/g++ && \
    ln -s "$(command -v gcov-8)" /usr/local/bin/gcov
