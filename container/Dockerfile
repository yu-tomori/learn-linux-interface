FROM ubuntu:latest

RUN yes | unminimize

RUN apt -y update && \
    apt-get -y install vim less man-db gcc

CMD ["/bin/bash"]
