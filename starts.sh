#!/bin/bash
docker run -t -d --name linux_container -v $PWD/container/src/:/root/src/ $(basename $PWD)_linux
